/*
 * IntToBit.cc
 *
 *  Created on: Mar 11, 2017
 *      Author: eugenetan
 */

#include <iostream>

using namespace std;

// counting how many 1 contains in the number
// maximum positive 32 bit number is 2,147,483,647 (or hexadecimal 7FFF,FFFF)
class IntToBit {
#define BIT  32

public:

	int intToBit1(int number) {
		int num = 0;
		for (int i = 0; i < BIT; i++, number /= 2) {
			if (number % 2 == 1)
				num++;
		}
		return num;
	}

	int intToBit2(int number) {
		int num = 0;
		for (int i = 0; i < BIT; i++) {
			if (number % 2 == 1)
				num++;
			number /= 2;
		}
		return num;
	}

	auto intToBit3(int number);
/*	{
		int num = 0;
		do {
			if (number % 2)
				num++;
		} while (number /= 2) ;
		return num;
	}*/
};

auto IntToBit::intToBit3(int number) {
	auto num = 0;
	do {
		if (number % 2)
			num++;
	} while (number /= 2) ;
	return num;
}


int main() {

	IntToBit aIntToBit;
	cout << aIntToBit.intToBit1(1) << endl;
	cout << aIntToBit.intToBit1(5) << endl;
	cout << aIntToBit.intToBit1(2147483647) << endl;
	cout << aIntToBit.intToBit2(2147483647) << endl;
	cout << aIntToBit.intToBit3(2147483647) << endl;
	exit(0);
}
