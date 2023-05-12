/**
 * Matek
 * Version 0.4.0
 * https://github.com/attila-papp/matek
 *
 * Freeware Licence Agreement:
 * https://github.com/attila-papp/matek/blob/v0.4.0/LICENCE.md
 *
 * Copyright (C) 2021-present, Attila Papp.
 */

#include <iostream>
#include "../../../../include/Matek.h"

using namespace std;
using namespace Matek::Math::NumberTheory;
using namespace Matek::Math::NumberTheory::Number;

int main(int argc, char* argv[]) {
	//Create Integer numbers with radix 10 and radix 16
	Integer
		number_1(87604),
		number_2("3d7fc671b5", Radix::RADIX_16);

	//Print numbers with radix 10
	cout << number_1 << endl;
	cout << number_2 << endl;

	//Print numbers with radix 16
	cout << number_1.toString(Radix::RADIX_16) << endl;
	cout << number_2.toString(Radix::RADIX_16) << endl;

	return 0;
}