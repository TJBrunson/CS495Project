/*
 * Driver.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: tjbru
 */

#include <iostream>

#include "../src/Pirate.h"
#include "../src/ParrotNamingClass.h"

int main(int argc, char* argv[]){

	//set up a pirate
	string name = "none";
	int age = 0;
	int gold =0;

	cout << "Name your pirate: " << endl;
	cin >> name;

	//set age
	cout << "How old is the pirate? " << endl;
	cin >> age;

	//set gold
	cout << "How much gold does the pirate have?" << endl;
	cin >> gold;

	//making pirate instance and pointer to pirate
	Pirate myPirate(name, age, gold);
	Pirate * piratePointer;
	piratePointer = &myPirate;

	//use pointer to chang pirate name
	cout << "updated pirate name: " <<  endl;
	cin >> name;
	piratePointer->setName(name);
	cout << &piratePointer << " " << piratePointer << " " << piratePointer->getPirateName() << endl << endl;

	int goldArray[] = {10,10,10,10,10};
	for(int i=0;i<6;i++){
		//create array pointer
		int *arrayPointer;
		arrayPointer = goldArray;

		//for out of bounds run
		if(i==6){
			cout << "Out of Bounds run " << endl;
			arrayPointer[i] += i;
			cout << "should be 16 if [6] existed, but get: " << arrayPointer[i] << "at location: " << &arrayPointer[i];
			cout << endl;
		}

		arrayPointer[i]+=i;
		cout << "i=" << i << ". pointer location: " << &arrayPointer[i] << ". Result: " << arrayPointer[i];
		cout << endl;
	}


return (0);
}
