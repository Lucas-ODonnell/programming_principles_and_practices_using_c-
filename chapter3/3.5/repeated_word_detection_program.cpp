#include "../../std_lib_facilities.h"

int main() {
	cout << "Enter words until you are satisfied, if you type the same thing twice it will notify you. Type in end to end the program.\n";
	string previous_word = " ";
	string current_word;
	while (cin>>current_word) {
		if (current_word == "end") {
			return 0;
		}
		else if (current_word == previous_word) {
			cout << "The word " << current_word << " is the previous word.\n";
		}
		previous_word = current_word;
	}
}
