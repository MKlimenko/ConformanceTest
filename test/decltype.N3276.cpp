// Uncomment this for a wild time:
//#define BUGBUG
// A simplified result_of implementation.
// If BUGBUG is defined, it uses decltype.
// Otherwise, it uses the TR1 result_of
// protocol.
template<typename Sig>
struct result_of;
#ifdef BUGBUG
 template<typename T> T& declvar();
 // use decltype
 template<typename Fun, typename T>
 struct result_of<Fun(T)>
 {
 typedef decltype(declvar<Fun>()(declvar<T>())) type;
 };
 template<typename Fun, typename T, typename U>
 struct result_of<Fun(T, U)>
 {
 typedef decltype(declvar<Fun>()(declvar<T>(), declvar<U>())) type;
 };
#else
 // use TR1 protocol
 template<typename Fun, typename T>
 struct result_of<Fun(T)>
 : Fun::template result<Fun(T)>
 {};
 template<typename Fun, typename T, typename U>
 struct result_of<Fun(T, U)>
 : Fun::template result<Fun(T, U)>
 {};
#endif
// simple tuple type
template<typename A0 = void, typename A1 = void, typename A2 = void>
struct tuple;
template<typename A0>
struct tuple<A0, void, void>
{
 A0 a0_;
 tuple(A0 const &a0) : a0_(a0) {}
};
template<typename A0, typename A1>
struct tuple<A0, A1>
{
 A0 a0_;
 A1 a1_;
 tuple(A0 const &a0, A1 const & a1) : a0_(a0), a1_(a1) {}
};
// A node in an expression tree
template<class Tag, class Args> // Args is a tuple.
struct Expr;
// A function object that builds expression nodes
template<class Tag>
struct MakeExpr
{
 template<class Sig>
 struct result;
 template<class This, class T>
 struct result<This(T)>
 {
 typedef Expr<Tag, tuple<T> > type;
 };
 template<class This, class T, class U>
 struct result<This(T, U)>
 {
 typedef Expr<Tag, tuple<T, U> > type;
 };
 template<class T>
 Expr<Tag, tuple<T> > operator()(T const & t) const
 {
 return Expr<Tag, tuple<T> >(tuple<T>(t));
 }
 template<class T, typename U>
 Expr<Tag, tuple<T, U> > operator()(T const & t, U const & u) const
 {
 return Expr<Tag, tuple<T, U> >(tuple<T, U>(t, u));
 }
};
// Here are tag types that encode in an expression node
// what operation created the node.
struct Terminal;
struct BinaryPlus;
struct FunctionCall;
typedef MakeExpr<Terminal> MakeTerminal;
typedef MakeExpr<BinaryPlus> MakeBinaryPlus;
typedef MakeExpr<FunctionCall> MakeFunctionCall;
template<class Tag, class Args>
struct Expr
{
 Args args_;
 explicit Expr(Args const & t) : args_(t) {}
 // An overloaded operator+ that creates a binary plus node
 template<typename RTag, typename RArgs>
 typename result_of<MakeBinaryPlus(Expr, Expr<RTag, RArgs>)>::type
 operator+(Expr<RTag, RArgs> const &right) const
 {
 return MakeBinaryPlus()(*this, right);
 }
 // An overloaded function call operator that creates a unary
 // function call node
 typename result_of<MakeFunctionCall(Expr)>::type
 operator()() const
 {
 return MakeFunctionCall()(*this);
 }
};
int main()
{
 // This is a terminal in an expression tree
 auto i = MakeTerminal()(42);
 i + i; // OK, this creates a binary plus node.
 i(); // OK, this creates a unary function-call node
}