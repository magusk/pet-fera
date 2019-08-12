#ifndef _REPTILEXOTICO_H
#define _REPTILEXOTICO_H

#include "Reptil.h"
#include "AnimalExotico.h"

class ReptilExotico : public Reptil, public AnimalExotico {
public:
	ReptilExotico();
	ReptilExotico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, bool venenoso,
				string tipo_veneno, string autorizacao_ibama, string pais_origem, string cidade_origem);
	~ReptilExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif