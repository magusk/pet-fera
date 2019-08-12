#ifndef _MAMIFERO_H_
#define _MAMIFERO_H_

#include <Animal.h>

using namespace std;

class Mamifero : public Animal {
	protected:
		string m_cor_do_pelo;

	public:
		Mamifero();
		Mamifero(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, string cor_do_pelo);
		~Mamifero();

		void set_m_cor_do_pelo(string cor_do_pelo);
		string get_m_cor_do_pelo();
		string write();
		string Tipo();

		void inicializar_mamifero(int id);
		void alterar_mamifero(string atributo);
	private:
		ostream& print(ostream& os)const;
};

#endif