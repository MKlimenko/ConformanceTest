struct B {
	virtual void f(int);
};
struct D : B {
	void f(long) override;     // error: wrong signature overriding B::f
};

int main() {
	return 0;
}