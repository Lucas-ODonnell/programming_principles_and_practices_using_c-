#include "../../std_lib_facilities.h"

int main() {
	string your_name;
	string addressee;
	string mutual_friend;
	int addressee_age;
	char sex = '0';
	cout << "Please put your name\n";
	cin >> your_name;
	cout << "Hello " << your_name << " let's write a letter. What is your friends name?\n";
	cin >> addressee;
	cout << "Dear " << addressee << ",\nHow are you doing? It has been a while since I saw you. Hope everything is well with you.\n";
	cout << "Wait don't you have a mutual friend you should mention?\n";
	cin >> mutual_friend;
	cout << "Have you seen " << mutual_friend << " lately?\n";
	cout << "Put m if your friend is male, f if female.\n";
	cin >> sex;
	if (sex == 'm') {
		cout << "If you see " << mutual_friend << " tell him to call me.\n";
	} else if (sex == 'f') {
	  cout << "if you see " << mutual_friend << " tell her to call me.\n";
	} else {
	  cout << "if you see" << mutual_friend << " tell them to call me.\n";
	}
	cout << "How old is the addressee?\n";
	cin >> addressee_age;
	cout << "I hear you had a birthday and are " << addressee_age << " years old!\n";
	if (addressee_age <= 0 || addressee_age > 112) {
		simple_error("your kidding!");
	} else if (addressee_age < 12) {
	  cout << "Next year you will be " << addressee_age + 1 << " years old!\n";
	} else if (addressee_age == 17) {
	  cout << "Next year you will be able to vote!\n";
	} else if (addressee_age >= 70) {
	  cout << "I hope you are enjoying retirement!\n";
	}
	  cout << "Sincerly yours,\n\n" << your_name << "\n";
}
