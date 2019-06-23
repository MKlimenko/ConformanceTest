struct B {
	virtual void f(int);
};
struct D : B {
	void f(int) override;      // OK
};

int main() {
	return 0;
}