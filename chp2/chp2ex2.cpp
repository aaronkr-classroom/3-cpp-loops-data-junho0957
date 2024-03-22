// chp2ex2.cpp
#include <iostream>
#include <string>
//표준 라이브러리에서 가져와서 사용할 이름을 언급
using std::cin; using std::endl;
using std::cout; using std::string;

int main()
{
	cout << "What's your name?: ";

	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";

	const int pad = 5;

	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;

	cout << endl;
	//rows개 행을 출력합니다.
	//불변성: 지금까지 r개 행을 출력
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
		//불변성: 현재 행에서 c개 문자를 출력
		while (c != cols) {
			//인사말 출력 여부를 판별
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {

				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}

		cout << endl;
	}

	return 0;

}