#ifndef _ANIMALEXOTICO_H_
#define _ANIMALEXOTICO_H_

#include "AnimalSilvestre.h"
#include <string>

using namespace std;

class AnimalExotico : public AnimalSilvestre {
	protected:
		string m_pais_origem;
		string m_cidade_origem;
	public:
		AnimalExotico();
		AnimalExotico(string autorizacao_ibama, string pais_origem, string cidade_origem);
		~AnimalExotico();

		void set_pais_origem(string pais_origem);
		void set_cidade_origem(string cidade_origem);
		virtual void set_autorizacao_ibama(string autorizacao_ibama) = 0;
		string get_pais_origem();
		string get_cidade_origem();
		void inicializar_exotico();
		void alterar_exotico(string atributo);
};

#endif