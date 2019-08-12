#ifndef _MAMIFEROEXOTICO_H
#define _MAMIFEROEXOTICO_H

#include "Mamifero.h"
#include "AnimalExotico.h"

using namespace std;

class MamiferoExotico : public Mamifero, public AnimalExotico {
public:
	MamiferoExotico();
	MamiferoExotico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, string cor_do_pelo,
				string autorizacao_ibama, string pais_origem, string cidade_origem);
	~MamiferoExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif