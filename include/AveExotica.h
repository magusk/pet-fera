#ifndef _AVEEXOTICA_H
#define _AVEEXOTICA_H

#include "Ave.h"
#include "AnimalExotico.h"

using namespace std;

class AveExotica : public Ave, public AnimalExotico {
public:
	AveExotica();
	AveExotica(int id, string nome_cientifico, char sexo,
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario,
			shared_ptr<Tratador> tratador, string nome_batismo, double tamanho_do_bico,
			double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem);
	~AveExotica();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif