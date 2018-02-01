/*
 * ParrotNamingClass.h
 *
 *  Created on: Feb 1, 2018
 *      Author: Tim
 */

#ifndef SRC_PARROTNAMINGCLASS_H_
#define SRC_PARROTNAMINGCLASS_H_
#include "../src/Pirate.h"

class ParrotNamingClass {
public:
	ParrotNamingClass();
	void theNamer(Pirate pirateArray[], int arrayLength);
	virtual ~ParrotNamingClass();
};

#endif /* SRC_PARROTNAMINGCLASS_H_ */
