//chp2ex5.cpp
#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;

int main() {

	cout << "what size?: ";

	int size;
	cin >> size;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {


			cout << "*";
		}


		cout << endl;

	}
	cout << "\n";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 3; j++) {


			cout << "*";
		}


		cout << endl;

	}
	cout << "\n";
	for(int i=0; i< size; i++){

		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
		cout << endl;

	}






	return 0;

}