#include "Mamifero.h"

using namespace std;

Mamifero::Mamifero(){};

Mamifero::Mamifero(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
		shared_ptr<Tratador> tratador, string nome_batismo, string cor_do_pelo): Animal(id
		, "Mammalia", nome_cientifico, sexo, tamanho, dieta, veterinario
		, tratador, nome_batismo), m_cor_do_pelo(cor_do_pelo) {/*  */};

Mamifero::~Mamifero(){};

void Mamifero::set_m_cor_do_pelo(string cor_do_pelo){
	m_cor_do_pelo = cor_do_pelo;
};

string Mamifero::get_m_cor_do_pelo(){
	return m_cor_do_pelo;
};

string Mamifero::write(){
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
	str<<m_cor_do_pelo<<";";
	// Se é venenoso
	str<<"NVF;";
	// Tipo de veneno
	str<<"NVF"<<endl;

	return str.str();
};

string Mamifero::Tipo(){
	return "Mamifero";
};

ostream& Mamifero::print(ostream& os)const{
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
	os<<"Cor do pelo \tCadeia de caracteres \t"<<m_cor_do_pelo<<endl;
	return os;
}

void Mamifero::inicializar_mamifero(int id){
	this->inicializar("Mammalia", id);

	string cor_do_pelo;

	cout << "Digite a cor do pêlo do mamífero: " << endl;
	cor_do_pelo = input.inputString();

	this->set_m_cor_do_pelo(cor_do_pelo);
};

void Mamifero::alterar_mamifero(string atributo){
	if(!atributo.compare("cor do pelo")){
		cout << "Digite a cor do pêlo do mamífero: " << endl;
		atributo = input.inputString();
		this->set_m_cor_do_pelo(atributo);
	}
	else{
		alterar(atributo);
	}
};