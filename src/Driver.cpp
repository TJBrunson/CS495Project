/*
 * Driver.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: tjbru
 */

#include <iostream>

#include "../src/Pirate.h"

int main(int argc, char* argv[]){

	//declare pirate tina
	Pirate myPirate("tina",21,1000);
	cout << "Hello " << myPirate.getPirateName() << ", you are " << myPirate.getAge() << ", and have "
			<< myPirate.getGold() << " gold." << endl;

	//ask how much gold to add
	int gold;
	cout << "How much gold do you want to add?" << endl;
	cin >> gold;
	myPirate.addGold(gold);

	//return how much gold after addition
	cout << myPirate.getPirateName() << ", you now have " << myPirate.getGold() << " gold!" << endl;

	return 0;
}

