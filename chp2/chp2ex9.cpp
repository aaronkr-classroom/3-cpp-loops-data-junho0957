//chp2ex9.cpp
#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;
int main() {

	int num1, num2;
	cout << "�� ���� ���� �Է��Ͻÿ�: ";
	
	cin >> num1 >> num2;
	
	if (num1 > num2) {
		cout << "�� ū ���� " << num1 << "�Դϴ�." << endl;
	}
	else if (num2 > num1) {
		cout << "�� ū ���� " << num2 << "�Դϴ�." << endl;
	}
	else if (num2 == num1) {
		cout << "�����ϴ�." << endl;
	}






	return 0;
}