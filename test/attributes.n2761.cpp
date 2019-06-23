[[ noreturn ]] void f() {
  throw "error";
  // OK
}
 
void q [[ noreturn ]] (int i) {
  // behavior is undefined if called with an argument <= 0
  if (i > 0) {
    throw "positive";
  }
}

int main() {

	return 0;
}
