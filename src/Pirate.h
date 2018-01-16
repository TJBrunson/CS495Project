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
		Pirate(string nameReceived, int ageRecieved, int goldRecieved);
		string getPirateName();
		int getAge();
		int getGold();
		void setName(string nameIn);
		void setAge(int ageIn);
		void setGold(int goldIn);
		void addGold (int goldToAdd);
	private:
		string pirateName;
		int age;
		int gold;

};

#endif /* PIRATE_H_ */
