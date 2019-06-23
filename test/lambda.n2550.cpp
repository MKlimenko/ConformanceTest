int main() {
	int i = 0;
	auto x1 = [](int i){ return i; };
	auto x2 = [i](){ return i; };
	auto x3 = [&i](){ return i; };
	auto x4 = [=](){ return i; };
	auto x5 = [&](){ return i; };
	auto x6 = []() mutable {};
	auto x7 = [](){};
	
	return 0;
}
