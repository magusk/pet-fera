#ifndef _REPTILNATIVO_H
#define _REPTILNATIVO_H

#include "Reptil.h"
#include "AnimalNativo.h"

class ReptilNativo : public Reptil, public AnimalNativo {
public:
	ReptilNativo();
	ReptilNativo(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, bool venenoso,
				string tipo_veneno, string autorizacao_ibama, string uf_origem);
	~ReptilNativo();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif