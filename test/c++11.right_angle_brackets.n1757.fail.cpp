template<int i> class X { /* ... */ };
X< 1>2 > x1;    // Syntax error.

template<class T> class Y { /* ... */ };
Y<X<6>>1>> x4;  // Syntax error. Instead, write "Y<X<(6>>1)>> x4;".


int main() {
	return 0;
}