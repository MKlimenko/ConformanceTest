struct S {
	enum E : int; // unscoped enumeration, underlying type is int
	E e; // e is an implemented as-if it was declared int
};
enum S::E : int { // definition of the nested enumeration
	/* ... */
};

int main() {

	return 0;
}
