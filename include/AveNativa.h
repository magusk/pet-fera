#ifndef _AVENATIVA_H
#define _AVENATIVA_H

#include "Ave.h"
#include "AnimalNativo.h"

using namespace std;

class AveNativa : public Ave, public AnimalNativo{
public:
	AveNativa();
	AveNativa(int id, string nome_cientifico, char sexo,
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario,
			shared_ptr<Tratador> tratador, string nome_batismo, double tamanho_do_bico,
			double envergadura_das_asas, string autorizacao_ibama, string uf_origem);
	~AveNativa();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif