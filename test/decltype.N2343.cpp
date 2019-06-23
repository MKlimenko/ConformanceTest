const int&& foo();
struct A { double x; };

int main() {
	int i;
	const A* a = new A();
	decltype(foo()) decl_foo = 1; // type is const int&&
	decltype(i) decl_i; // type is int
	decltype(a->x) decl_a_x; // type is double
	decltype((a->x)) decl_a_x_parenthesis = a->x; // type is const double&
	return 0;
}