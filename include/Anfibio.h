#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "Animal.h"
#include "date.h"

using namespace std;

class Anfibio : public Animal {
	protected:
		int m_total_de_mudas;
		date m_ultima_muda;
	public:
		Anfibio();
		Anfibio(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas,
				int day, int month, int year);
		~Anfibio();

		void set_total_de_mudas(int total_de_mudas);
		void set_ultima_muda(date ultima_muda);

		int get_total_de_mudas();
		date get_ultima_mudas();

		string Tipo();
		string write();

		void inicializar_anfibio(int id);
		void alterar_anfibio(string atributo);
	private:
		ostream& print(ostream& os)const;

};

#endif