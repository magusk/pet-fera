#include "Peixe.h"

Peixe::Peixe(){

}
Peixe::Peixe(int id, string classe, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, string tipo_agua):
			Animal(id, "Gnathostomata", nome_cientifico, sexo, tamanho, 
			dieta, veterinario, tratador, nome_batismo), m_tipo_agua(tipo_agua){

}
Peixe::~Peixe(){

}

void Peixe::set_tipo_agua(string tipo_agua){
	m_tipo_agua = tipo_agua;
}
string Peixe::get_tipo_agua(){
	return m_tipo_agua;
}

string Peixe::write(){
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
	str<<"NVF;";
	// Tipo de veneno
	str<<"NVF";
	// Tipo de agua
	str<<m_tipo_agua<<endl;

	return str.str();
};

string Peixe::Tipo(){
	return "Peixe";
};

ostream& Peixe::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros \tDecimal \t"<<m_tamanho<<endl;
	os<<"Dieta redominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInteiro \t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \tInteiro \t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Tipo de água \tCadeia de caracteres \t"<<m_tipo_agua<<endl;

	return os;
}

void Peixe::inicializar_peixe(int id){
	this->inicializar("Gnathostomata", id);

	string tipo_agua;

	cout << "Digite o tipo de água do peixe: " << endl;
	tipo_agua = input.inputString();

	this->set_tipo_agua(tipo_agua);
};

void Peixe::alterar_peixe(string atributo){
	if(!atributo.compare("tipo de agua")){
		cout << "Digite o tipo de água do peixe: " << endl;
		atributo = input.inputString();
		this->set_tipo_agua(atributo);
	}
	else{
		alterar(atributo);
	}
};