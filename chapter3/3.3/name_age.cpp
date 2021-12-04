#include "../../std_lib_facilities.h"

int main() {
	cout << "Please enter your name and age.\n";
	string name;
	double age;
	cin >> name >> age;
	cout << "Hello " << name << " who is " << age << " years old, or " << age * 12 << " months old!\n";
	return 0;
}
