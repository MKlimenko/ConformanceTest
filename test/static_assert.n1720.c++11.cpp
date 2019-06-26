static_assert(1 == 1, "1 is not 1");

template <typename T>
void test(T val) {
	static_assert(sizeof(T) == sizeof(double), "Wrong sizeof");
}

int main() {
	test(1.0);
	return 0;
}