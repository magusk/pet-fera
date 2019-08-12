#ifndef _REPTIL_H
#define _REPTIL_H

#include "Animal.h"

using namespace std;

class Reptil : public Animal{
protected:
	bool m_venenoso;
	string m_tipo_veneno;
public:
	Reptil();
	Reptil(int id, string classe, string nome_cientifico, char sexo, 
				double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
				shared_ptr<Tratador> tratador, string nome_batismo, bool venenoso,
				string tipo_veneno);
	~Reptil();

	void set_venenoso(bool venenoso);
	void set_tipo_veneno(string tipo_veneno);
	bool get_venenoso();
	string get_tipo_veneno();
	string write();
	string Tipo();

	void inicializar_reptil(int id);
	void alterar_reptil(string atributo);
private:
	ostream& print(ostream& os)const;
};

#endif