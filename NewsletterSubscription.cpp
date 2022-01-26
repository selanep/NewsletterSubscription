#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string option;

	cout << "Do you want to subscribe to our newsletter? (Y/N)"; cin >> option;

	if (option == "Y") {
		string email;

		cout << "Enter your email address: "; cin >> email;

		ofstream file;
		file.open("Data\\email.txt", ios_base::app);
		file << email << endl;
		file.close();

		return 0;
	}
	else if (option == "N") {
		cout << "Thanks anyway!" << endl;

		return 0;
	}
}