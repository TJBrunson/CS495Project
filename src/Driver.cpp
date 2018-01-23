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
	cout << "Would you like to run my array program?" << endl;
	string choice;
	cin >> choice;
	if(choice == "Yes" || choice == "yes" || choice == "Yar"){
		cout << "How many Pirates do you want?" << endl;
		int numberOfPirates;
		cin >> numberOfPirates;
		Pirate pirateArray[numberOfPirates];
		for(int i=0; i<numberOfPirates; i++){
			//variables for pirates
			string name;
			int pirateAge;
			int pirateGold;

			cout << "Enter pirate " << i <<  " name: " << endl;
			cin  >> name;
			cout << "Enter pirate " << i << " age: " << endl;
			cin  >> pirateAge;
			cout << "Enter pirate " << i << " gold: " << endl;
			cin  >> pirateGold;
			pirateArray[i].setName(name);
			pirateArray[i].setAge(pirateAge);
			pirateArray[i].setGold(pirateGold);

			exit(0);

		}
	}


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

	//ask if they want to change their name
	cout << "Is your name really Tina? Would you like to change it?"<<endl;
	string answer;
	cin>> answer;

	//if for answer
	if(answer == "yes" || answer == "Yes" || answer == "YAR"){
		cout << endl << "What would you like your name to be?"<<endl;
		string name;
		cin >> name;
		myPirate.setName(name);
		cout << "Your name is now " << myPirate.getPirateName();
	}

	//while loop set up to add more gold
	cout << "Would you like to add more gold?"<<endl;
	cin >> answer;
	int counter=0;

	//while loop
	cout << "counter before while loop: " << counter << endl;
	while(answer == "Yes" || answer == "YAR" || answer == "yes"){
		cout << "How much gold would you like to add?"<<endl;
		cin >> gold;
		myPirate.addGold(gold);
		cout << myPirate.getPirateName() << ", you now have " << myPirate.getGold() << " gold!" << endl;
		cout << "Would you like to add even more gold?"<<endl;
		cin >> answer;

		if(answer!="Yes" || answer!="yes" || answer !="YAR"){
			cout<< "last round of while loop counter: " << counter << endl;
		}
		counter++;
	}
	cout << "Counter after while loop: " << counter << endl;

	cout << "goodbye";


	return 0;
}

