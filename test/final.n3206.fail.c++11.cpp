struct B {
	virtual void f() const final;
};

struct D : B {
	void f() const;    // error: D::f attempts to override final B::f
};

int main() {
	return 0;
}