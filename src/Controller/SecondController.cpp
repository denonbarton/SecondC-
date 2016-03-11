/*
 * SecondController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: dbar0540
 */
#include "SecondController.h"
#include <iostream>
#include <string>
using namespace std;

SecondController :: SecondController()
{
	this->classCount = 21;
	this->className = "Denon Barton's C++ Data Structure.";
}
void SecondController :: setClassName(string classname)
{
	this->className = className;
	(*this).className = className;
}


void SecondController :: setClassCount(int classCount)
{
	this->classCount = classCount;
}

int SecondController :: getClassCount()
{
	return this ->classCount;
}

void SecondController :: start()
{
	cout << "Welcome to my second C++ class this week" << endl;
	cout << className << endl;
	cout << "The current value of classCount is " << getClassCount() <<endl;
	int newCount;
	cout << "Choose a new number for class"<< endl;
	cin >> newCount;
	this->setClassCount(newCount);
	cout << "The current value of classCount is " << getClassCount() << endl;
	cout << "the content (a char) at the 5th spot is " << className.at(4) << endl;
}

int SecondController :: String()
{

}

