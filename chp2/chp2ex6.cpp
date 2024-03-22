//chp2ex6.cpp
#include <iostream>
#include <string>

int main()
{
	int i = 0;
	while (i < 10) {
		i += i;
		std::cout << i << std::endl;
	}

	return 0;

}