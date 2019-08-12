#ifndef _MAMIFERONATIVO_H
#define _MAMIFERONATIVO_H

#include "Mamifero.h"
#include "AnimalNativo.h"

using namespace std;

class MamiferoNativo : public Mamifero, public AnimalNativo {
public:
	MamiferoNativo();
	MamiferoNativo(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, string cor_do_pelo, 
				string autorizacao_ibama, string uf_origem);
	~MamiferoNativo();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif