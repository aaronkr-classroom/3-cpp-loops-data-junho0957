//chp2ex8.cpp
#include <iostream>
#include <string>

using std::endl;
using std::cout;
int main() {

	int sum = 1;

	for (int i = 1; i <= 10; i++) {

		sum *= i;

	}
	
	cout << "��: " << sum << endl;
	return 0;
}