#ifndef _ANFIBIODOMESTICO_H
#define _ANFIBIODOMESTICO_H

#include "Anfibio.h"
#include "AnimalDomestico.h"

using namespace std;

class AnfibioDomestico : public Anfibio, public AnimalDomestico {
public:
	AnfibioDomestico();
	AnfibioDomestico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas,
				int day, int month, int year);
	~AnfibioDomestico();

	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif