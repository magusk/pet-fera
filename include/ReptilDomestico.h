#ifndef _REPTILDOMESTICO_H
#define _REPTILDOMESTICO_H

#include "Reptil.h"
#include "AnimalDomestico.h"

class ReptilDomestico : public Reptil, public AnimalDomestico {
public:
	ReptilDomestico();
	ReptilDomestico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, bool venenoso,
				string tipo_veneno);
	~ReptilDomestico();

	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif