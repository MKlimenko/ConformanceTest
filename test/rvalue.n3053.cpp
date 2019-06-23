struct S {
    int a;
    S& operator=( const S& ) = default;
    S& operator=( S&& ) = default;
};

int main() {
	return 0;
}