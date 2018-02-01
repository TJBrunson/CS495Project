/*
 * ParrotNamingClass.cpp
 *
 *  Created on: Feb 1, 2018
 *      Author: Tim
 */

#include "ParrotNamingClass.h"
#include <iostream>
#include "../src/Pirate.h"

ParrotNamingClass::ParrotNamingClass() {

}
void ParrotNamingClass::theNamer(Pirate pirateArray[], int arrayLength){
	for(int i=0; i<arrayLength; i++){
		cout << "Name Pirate " << i+1 << "'s parrot" << endl;
		string name;
		cin >> name;
		pirateArray[i].setParrotName(name);
	}
}

ParrotNamingClass::~ParrotNamingClass() {
	// TODO Auto-generated destructor stub
}

