#include "./std_lib_facilities.h"

int main() {
	int n = 0;
	cout << "Please choose a number\n";
	cin >> n;
	for (int i=1; i <= n; ++i) {
		if (i % 15 == 0) {
			cout << "FizzBuzz\n";
		} else if (i % 5 == 0) {
			cout << "Fizz\n";
		} else if (i % 3 == 0) {
			cout << "Buzz\n";
		} else {
			cout << i << "\n";
		}
	}
}
