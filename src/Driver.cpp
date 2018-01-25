/*
 * Driver.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: tjbru
 */

#include <iostream>

#include "../src/Pirate.h"

int main(int argc, char* argv[]){

	//set up for array of pirates and creation in a for loop
	cout << "How many Pirates do you want?" << endl;
	int numberOfPirates;
	cin >> numberOfPirates;
	Pirate pirateArray[numberOfPirates];
	for(int i=0; i<numberOfPirates; i++){
		//variables for pirates
		string name;
		int pirateAge;
		int pirateGold;

		cout << "Enter pirate " << i+1 <<  " name: " << endl;
		cin  >> name;
		cout << "Enter pirate " << i+1 << " age: " << endl;
		cin  >> pirateAge;
		cout << "Enter pirate " << i+1 << " gold: " << endl;
		cin  >> pirateGold;

		//These are all pass by value
		pirateArray[i].setName(name);
		pirateArray[i].setAge(pirateAge);
		pirateArray[i].setGold(pirateGold);

		//pass by reference
		cout << "Finally, name your parrot: " << endl;
		pirateArray[i].createNewParrot();


	}

	//search for parrot of a pirate from pirateArray
	string answer = "YES";
	while(answer == "YES" || answer == "YAR" || answer == "Yes" || answer == "yes"){

		//print all pirates
		cout << "Here is a list of all of the pirates: " << endl;
		for(int i=0; i<numberOfPirates; i++){
			cout << pirateArray[i].getPirateName() << endl;
		}

		//ask which pirate to find parrot of
		cout << "Which pirate's parrot would you like to find?" << endl;
		string name;
		cin >> name;

		//find the parrot
		for(int i=0; i<numberOfPirates; i++){
			cout << i;
			if(name == pirateArray[i].getPirateName()){

				cout << name << "'s parrot is named " << pirateArray[i].getParrotName() << endl;
				break;
			}
			else if(i == numberOfPirates-1){
				cout << "That is not a name of a pirate!";
			}
		}

		cout << "Would you like to know the name of another pirate's parrot?" << endl;
		cin >> answer;

	}


return (0);
}

