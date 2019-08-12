#ifndef _ANFIBIOEXOTICO_H
#define _ANFIBIOEXOTICO_H

#include "Anfibio.h"
#include "AnimalExotico.h"

using namespace std;

class AnfibioExotico : public Anfibio, public AnimalExotico {
public:
	AnfibioExotico();
	AnfibioExotico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas,
				int day, int month, int year, string autorizacao_ibama, string pais_origem, string cidade_origem);
	~AnfibioExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
	string write();
	string Tipo();
private:
	ostream& print(ostream& os)const;
};

#endif