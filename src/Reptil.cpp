#include "Reptil.h"

Reptil::Reptil(){

}
Reptil::Reptil(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, bool venenoso,
			string tipo_veneno):
	Animal(id, "Reptilia", nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, nome_batismo),
	m_venenoso(venenoso), m_tipo_veneno(tipo_veneno){

}
Reptil::~Reptil(){

}

void Reptil::set_venenoso(bool venenoso){
	m_venenoso = venenoso;
}
void Reptil::set_tipo_veneno(string tipo_veneno){
	m_tipo_veneno = tipo_veneno;
}
bool Reptil::get_venenoso(){
	return m_venenoso;
}
string Reptil::get_tipo_veneno(){
	return m_tipo_veneno;
}

string Reptil::write(){
	ostringstream str;
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	//Autorização do Ibama
	str<<"NVF;";
	// País de origem
	str<<"NVF;";
	// Cidade de origem
	str<<"NVF;";
	// UF de origem
	str<<"NVF;";
	// Total de Mudas
	str<<"NVF;";
	// Última muda
	str<<"NVF;";
	// Tamanho do bico
	str<<"NVF;";
	// Envergadura das Asas
	str<<"NVF;";
	// Cor dos pelos
	str<<"NVF;";
	// Se é venenoso
	str<<m_venenoso<<";";
	// Tipo de veneno
	str<<m_tipo_veneno<<endl;

	return str.str();
};

string Reptil::Tipo(){
	return "Reptil";
};

ostream& Reptil::print(ostream& os)const{
	os<<"Campo \t\t\t\tTipo de Dados \t\tValores"<<endl;
	os<<"Identificador Do animal   \tInteiro \t\t"<<m_id<<endl;
	os<<"Classe do animal \t\tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \t\t\tCaractere \t\t"<<m_sexo<<endl;
	os<<"Tamanho média em métros \tDecimal \t\t"<<m_tamanho<<endl;
	os<<"Dieta predominante \t\tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \t\tInteiro \t\t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \t\tInteiro \t\t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \t\tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Venenoso \t\t\tbooleano \t\t"<<m_venenoso<<endl;
	os<<"Tipo de veneno \t\t\tCadeia de caracteres \t"<<m_tipo_veneno<<endl;
	return os;
}

void Reptil::inicializar_reptil(int id){
	this->inicializar("Reptilia", id);

	bool venenoso;
	string tipo_veneno;

	cout << "O Réptil é venenoso?" << endl;
	cout << "\t0 - Não" << endl << "\t1 - Sim" << endl;
	venenoso = input.inputInt();

	if(venenoso){
		cout << "Digite o tipo de veneno do réptil: " << endl;
		tipo_veneno = input.inputString();
	}
	else 
		tipo_veneno = " - ";

	this->set_venenoso(venenoso);
	this->set_tipo_veneno(tipo_veneno);
};

void Reptil::alterar_reptil(string atributo){
	bool venenoso;

	if(!atributo.compare("venenoso")){
		cout << "O Réptil é venenoso?" << endl;
		cout << "\t0 - Não" << endl << "\t1 - Sim" << endl;
		venenoso = input.inputInt();

		if(!venenoso){ 
			this->set_tipo_veneno(" - ");
		}
		this->set_venenoso(venenoso);
	}
	else if(!atributo.compare("tipo de veneno")){
		cout << "Digite o tipo de veneno do réptil: " << endl;
		atributo = input.inputString();
		this->set_tipo_veneno(atributo);
	}
	else{
		alterar(atributo);
	}
};