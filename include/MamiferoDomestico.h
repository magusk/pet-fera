#ifndef _MAMIFERODOMESTICO_H
#define _MAMIFERODOMESTICO_H

#include "Mamifero.h"
#include "AnimalDomestico.h"

using namespace std;

class MamiferoDomestico : public Mamifero, public AnimalDomestico{
public:
	MamiferoDomestico();
	MamiferoDomestico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, string cor_do_pelo);
	~MamiferoDomestico();

	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif