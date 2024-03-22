//chp2ex7.cpp
#include <iostream>
#include <string>

using std::endl;
using std::cout;
int main() {

	int s = 10;

	for (int i = 0; i < 16; i++) {


		cout << s;
		cout << "\n";
		s -= 1;
	}
	cout << endl;

	return 0;
}