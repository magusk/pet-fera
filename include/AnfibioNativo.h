#ifndef _ANFIBIONATIVO_H
#define _ANFIBIONATIVO_H

#include "Anfibio.h"
#include "AnimalNativo.h"

using namespace std;

class AnfibioNativo : public Anfibio, public AnimalNativo {
public:
	AnfibioNativo();
	AnfibioNativo(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas,
				int day, int month, int year, string autorizacao_ibama, string uf_origem);
	~AnfibioNativo();
	
	void set_autorizacao_ibama(string autorizacao_ibama);
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
	string write();
	string Tipo();
private:
	ostream& print(ostream& os)const;
};

#endif