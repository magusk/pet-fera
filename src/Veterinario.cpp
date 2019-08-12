#include "Veterinario.h"
 
using namespace std;

Veterinario::Veterinario(){

};

Veterinario::Veterinario (int id, string nome, string cpf, short int idade, 
			string tipo_sanguineo, char fator_rh, 
			string especialidade, string crmv): Funcionario(id,nome,cpf,idade,tipo_sanguineo,fator_rh,especialidade), m_crmv(crmv){

};

Veterinario::Veterinario(Veterinario &Veterinario_){
	m_id = Veterinario_.get_id();
	m_nome = Veterinario_.get_nome();
	m_cpf = Veterinario_.get_cpf();
	m_idade = Veterinario_.get_idade();
	m_tipo_sanguineo = Veterinario_.get_tipo_sanguineo();
	m_fator_rh = Veterinario_.get_fator_rh();
	m_especialidade = Veterinario_.get_especialidade();
	m_crmv = Veterinario_.get_crmv();
};


Veterinario::~Veterinario(){

};

void Veterinario::set_crmv (string crmv){
	m_crmv = crmv;
};

string Veterinario::get_crmv (){
	return m_crmv;
};

string Veterinario::write(){
	ostringstream str;
	str<<"Veterinario;";
	str<<m_id<<";";
	str<<m_nome<<";";
	str<<m_cpf<<";";
	str<<m_idade<<";";
	str<<m_tipo_sanguineo<<";";
	str<<m_fator_rh<<";";
	str<<m_especialidade<<";";
	str<<m_crmv<<endl;

	return str.str();
};

string Veterinario::Tipo(){
	return "Veterinario";
}

ostream& Veterinario::print(ostream& os)const{
	os<<"Campo \t\t\t\t\tTipo de dado \tValores"<<endl;
	os<<"Identificador do funcionário \tCadeia de caracteres \t"<<m_id << endl;
	os<<"Função \t\t\tCadeia de Caracteres \tVeterinário" << endl;
	os<<"Nome do funcionário \t\tCadeia de caracteres \t"<<m_nome << endl;
	os<<"CPF do funcionário \t\tCadeia de caracteres \t"<<m_cpf << endl;
	os<<"Idade do funcionário \t\tInteiro \t\t"<<m_idade << endl;
	os<<"Tipo sanguíneo \t\tCadeia de caracteres \t"<<m_tipo_sanguineo << endl;
	os<<"Fator RH \t\t\tCaractere \t\t"<<m_fator_rh << endl;
	os<<"Especialidade \t\t\tCadeia de caracteres \t"<<m_especialidade << endl;
	os<<"Código CRMV \t\t\tCadeia de caracteres \t"<<m_crmv << endl;
	return os;
}

void Veterinario::inicializar_funcionario(int id){
	inicializar(id);
	TratamentoInput input;
	string crmv;

	cout<<"Digite o crmv do veterinário: " << endl;
	crmv = input.inputString();
	this->m_crmv = crmv;
};

void Veterinario::alterar_funcionario(){
	TratamentoInput input;
	string atributo;

	cout<<"Digite o atributo a ser alterado." << endl;
	cout<< "-nome" << endl;
	cout<< "-cpf" << endl;
	cout<< "-idade" << endl;
	cout<< "-tipo sanguineo" << endl;
	cout<< "-fator rh" << endl;
	cout<< "-especialidade" << endl;
	cout<< "-código crmv (crmv)" << endl;

	atributo = input.inputString();

	if(!atributo.compare("crmv")){
		cout<<"Digite o crmv do veterinário: " << endl;
		atributo = input.inputString();
		this->m_crmv = atributo;
	}
	else{
		alterar(atributo);
	}
};