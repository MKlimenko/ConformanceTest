class C {};

class X1 {
	friend C; // OK: class C is a friend
};
class X2 {
	friend C; // OK: class C is a friend
	friend class D; // OK: elaborated-type-specifier declares new class
};

template <typename T> 
class R {
	friend T;
};

R<C> rc; // class C is a friend of R<C>
R<int> Ri; // OK: “friend int;” is ignored

int main() {
	return 0;
}