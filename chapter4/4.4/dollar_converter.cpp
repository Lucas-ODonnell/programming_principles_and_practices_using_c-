#include "../../std_lib_facilities.h"

int main() {
	constexpr double yen = 112.80;
	constexpr double krona = 0.11;
	constexpr double pound = 1.32;
	double money;
	string currency;
	cout << "Give a monetary value folowed by it's currency(yen/kronas/pounds)\n";
	cin >> money >> currency;
	if (currency == "yen") {
		cout << money << " yen equals $" << money/yen << ".\n";
	} else if (currency == "kronas") {
		cout << money << " kronas equals $" << money/krona << ".\n";
	} else if (currency == "pounds") {
		cout << money << " pounds equals $" << money/pound << ".\n";
	} else {
		cout << "I do not recognize the currency you are trying to use.\n";
	}
}
