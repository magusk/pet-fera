#ifndef _PEIXEEXOTICO_H
#define _PEIXEEXOTICO_H

#include "Peixe.h"
#include "AnimalExotico.h"

class PeixeExotico : public Peixe, public AnimalExotico {
  public:
	PeixeExotico();
	PeixeExotico(int id, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, string tipo_agua, 
				string autorizacao_ibama, string pais_origem, string cidade_origem);
	~PeixeExotico();

	void set_autorizacao_ibama(string autorizacao_ibama);
	string write();
	string Tipo();
	void inicializar_animal(int id);
	void alterar_animal(string atributo);
  private:
	ostream& print(ostream& os)const;
};

#endif