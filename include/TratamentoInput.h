#ifndef _TRATAMENTOINPUT_H_
#define _TRATAMENTOINPUT_H_

#include <iostream>
#include <string>
#include "ExcecoesInput.h"

using namespace std;

class TratamentoInput{

	public:
		char * inputChar();
		double is_number(char * number);
		string inputString();
		int inputInt();
		double inputDouble();
};

#endif