#ifndef _PEIXEDOMESTICO_H
#define _PEIXEDOMESTICO_H

#include "Peixe.h"
#include "AnimalDomestico.h"

using namespace std;

class PeixeDomestico : public Peixe, public AnimalDomestico{
public:
	PeixeDomestico();
	PeixeDomestico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, string tipo_agua);
	~PeixeDomestico();

	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif