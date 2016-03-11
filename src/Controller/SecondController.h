/*
 * SecondController.h
 *
 *  Created on: Jan 19, 2016
 *      Author: dbar0540
 */

#ifndef CONTROLLER_SECONDCONTROLLER_H_
#define CONTROLLER_SECONDCONTROLLER_H_
#include <string>
using namespace std;



class SecondController
{
private:
		int classCount;
		string className;
public:
		SecondController();
		void setClassCount(int classCount);
		void setClassName(string className);
		void getClassName();
		int getClassCount();
		void start();
};

#endif /* CONTROLLER_SECONDCONTROLLER_H_ */
