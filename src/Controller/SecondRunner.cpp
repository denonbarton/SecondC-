/*
 * SecondRunner.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: dbar0540
 */
#include "SecondController.h"
int main()
{
	SecondController * baseController = new SecondController();
			baseController->start();
			//Does the same thing in a different way
			(*baseController).start();
	return 0;
}




