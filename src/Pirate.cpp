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
//adds gold to current supply
void Pirate::addGold(int goldToAdd){
	gold = gold + goldToAdd;
}
void Pirate::createNewParrot(){
	string name;
	cin >> name;
	parrotName = name;
}
void Pirate::setParrotName(string name){
	parrotName = name;
}
string Pirate::getParrotName(){

	return parrotName;
}
