#include "Inseto.h"

Inseto::Inseto() {

};
Inseto::Inseto(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
		shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas, string tipo_metamorfose, 
		int day, int month, int year): Animal(id, "Insecta", nome_cientifico, sexo, 
		tamanho, dieta, veterinario, tratador, nome_batismo),  m_total_de_mudas(total_de_mudas), 
		m_tipo_metamorfose(tipo_metamorfose) {
	m_ultima_muda.set_day(day);
	m_ultima_muda.set_month(month);
	m_ultima_muda.set_year(year);
};

Inseto::~Inseto() {

};

void Inseto::set_tipo_metamorfose(string tipo_metamorfose) {
	m_tipo_metamorfose = tipo_metamorfose;
};

void Inseto::set_total_de_mudas(int total_de_mudas) {
	m_total_de_mudas = total_de_mudas;
};

void Inseto::set_ultima_muda(date ultima_muda) {
	m_ultima_muda = ultima_muda;
};

string Inseto::get_tipo_metamorfose() {
	return m_tipo_metamorfose;
};

int Inseto::get_total_de_mudas() {
	return m_total_de_mudas;
};

date Inseto::get_ultima_muda() {
	return m_ultima_muda;
};

string Inseto::Tipo(){
	return "Inseto";
};

string Inseto::write(){

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
	str<<m_total_de_mudas<<";";
	// Última muda
	str<<m_ultima_muda<<";";
	// Tamanho do bico
	str<<"NVF;";
	// Envergadura das Asas
	str<<"NVF;";
	// Cor dos pelos
	str<<"NVF;";
	// Se é venenoso
	str<<"NVF;";
	// Tipo de metamorfose
	str<<m_tipo_metamorfose<<endl;
	return str.str();
};

ostream& Inseto::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros\tDecimal\t"<<m_tamanho<<endl;
	os<<"Dieta predominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInteiro \t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \tInteiro \t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Total de mudas \tInteiro \t"<<m_total_de_mudas<<endl;
	os<<"Data da última muda \tclasse date \t"<<m_ultima_muda<<endl;
	os<<"Tipo de metamorfose \tCadeia de caracteres \t"<<m_tipo_metamorfose<<endl;
	return os;
}

void Inseto::inicializar_inseto(int id){
	this->inicializar("Insecta", id);

	int total_mudas;
	int day;
	int month;
	int year;
	string tipo_metamorfose;

	cout << "Digite o número total de mudas do inseto: " << endl;
	total_mudas = input.inputInt();

	cout<< "Digite a data da última muda (dd/mm/aa): " << endl;
	day = input.inputInt();
	month = input.inputInt();
	year = input.inputInt();

	date ultima_muda = date(day, month, year);

	while(!ultima_muda.valid()){
		cout<< "Data inválida, digite novamente: " << endl;
		cin.clear();
		cin >> day >> month >> year;
		ultima_muda.set_day(day);
		ultima_muda.set_month(month);
		ultima_muda.set_year(year);
	}

	cout << "Digite o tipo de metamorfose do inseto: " << endl;
	tipo_metamorfose = input.inputString();

	this->set_ultima_muda(ultima_muda);
	this->set_total_de_mudas(total_mudas);
	this->set_tipo_metamorfose(tipo_metamorfose);
};

void Inseto::alterar_inseto(string atributo){
	int total_mudas;
	int day;
	int month;
	int year;

	if(!atributo.compare("total de mudas")){
		cout << "Digite o total de mudas: " << endl;
		total_mudas = input.inputInt();
		this->set_total_de_mudas(total_mudas);
	}
	else if(!atributo.compare("data")){
		cout << "Digite a data da última muda (dd/mm/aa): " << endl;
		day = input.inputInt();
		month = input.inputInt();
		year = input.inputInt();

		date ultima_muda = date(day, month, year);

		while(!ultima_muda.valid()){
			cout<< "Data inválida, digite novamente: " << endl;
			cin.clear();
			cin >> day >> month >> year;
			ultima_muda.set_day(day);
			ultima_muda.set_month(month);
			ultima_muda.set_year(year);
		}

		this->set_ultima_muda(ultima_muda);
	}
	else if(!atributo.compare("tipo de metamorfose")){
		cout << "Digite o tipo de metamorfose do inseto: " << endl;
		atributo = input.inputString();
		this->set_tipo_metamorfose(atributo);
	}
	else{
		alterar(atributo);
	}
};