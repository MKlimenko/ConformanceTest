#include <string>

long double operator "" _w(long double){}
std::string operator "" _w(const char16_t*, size_t){}
unsigned operator "" _w(const char*){}

int main() {
    "two"_w; // error: no applicable literal operator
	
	return 0;
}
