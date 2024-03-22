//chp2ex9.cpp
#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;
int main() {

	int num1, num2;
	cout << "두 개의 수를 입력하시오: ";
	
	cin >> num1 >> num2;
	
	if (num1 > num2) {
		cout << "더 큰 수는 " << num1 << "입니다." << endl;
	}
	else if (num2 > num1) {
		cout << "더 큰 수는 " << num2 << "입니다." << endl;
	}
	else if (num2 == num1) {
		cout << "같습니다." << endl;
	}






	return 0;
}