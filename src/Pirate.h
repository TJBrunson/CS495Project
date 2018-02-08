/*
 * Pirate.h
 *
 *  Created on: Jan 16, 2018
 *      Author: tjbru
 */

//declaration for class: Pirate

#ifndef PIRATE_H
#define PIRATE_H
#include <string>
using namespace std;

class Pirate {
	public:
		Pirate(string name, int age, int gold);
		string getPirateName();
		int getAge();
		int getGold();
		void setName(string nameIn);
		void setAge(int ageIn);
		void setGold(int goldIn);
		void addGold (int goldToAdd);
		void createNewParrot();
		void setParrotName(string name);
		string getParrotName();
	private:
		string pirateName;
		int age;
		int gold;
		string parrotName;

};

#endif /* PIRATE_H_ */
