/*
 * Pirate.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: tjbru
 */

#include "../src/Pirate.h"

#include <cmath>
#include <iostream>

Pirate::Pirate() { // @suppress("Class members should be properly initialized")
	cout << "Pirate created";
	string pirateName;
	int age = 0;
	int gold = 0;
}


//get pirate name
string Pirate::getPirateName(){
	return pirateName;
}
//get pirate age
int Pirate::getAge(){
	return age;
}
//get pirate gold
int Pirate::getGold(){
	return gold;
}

//set pirate name
void Pirate::setName(string nameIn){
	pirateName = nameIn;
}
//set pirate age
void Pirate::setAge(int ageIn){
	age = ageIn;
}
//set pirate gold
void Pirate::setGold(int goldIn){
	gold = goldIn;
}

//adds gold to current supply. I DID MATH
void Pirate::addGold(int goldToAdd){
	gold = gold + goldToAdd;
}
