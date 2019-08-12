#ifndef _ANIMALSILVESTRE_H_
#define _ANIMALSILVESTRE_H_

#include <iostream>
#include <string>
#include "TratamentoInput.h"

using namespace std;

class AnimalSilvestre {
	protected:
  		string m_autorizacao_ibama;
  	public:
  		AnimalSilvestre();
  		AnimalSilvestre(string autorizacao_ibama);
  		~AnimalSilvestre();

  		virtual void set_autorizacao_ibama(string autorizacao_ibama) = 0;
  		string get_autorizacao_ibama();
};

#endif