#ifndef _ANIMALNATIVO_H_
#define _ANIMALNATIVO_H_ 

#include "AnimalSilvestre.h"
#include <string>

using namespace std;

class AnimalNativo : public AnimalSilvestre {
	protected:
		string m_uf_origem;
	public:
		AnimalNativo();
		AnimalNativo(string autorizacao_ibama, string uf_origem);
		~AnimalNativo();

		void set_uf_origem(string uf_origem);
		virtual void set_autorizacao_ibama(string autorizacao_ibama) = 0;
		string get_uf_origem();
		void inicializar_nativo();
		void alterar_nativo(string atributo);
};

#endif