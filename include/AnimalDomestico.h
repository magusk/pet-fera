#ifndef _ANIMALDOMESTICO_H_
#define _ANIMALDOMESTICO_H_
#include <string>

using namespace std;

class AnimalDomestico {
	protected:
	public:
		AnimalDomestico();
		~AnimalDomestico();
		virtual string write() = 0;

};

#endif