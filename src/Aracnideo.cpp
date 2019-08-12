#include "Aracnideo.h"

Aracnideo::Aracnideo() {

};
Aracnideo::Aracnideo(int id, string classe, string nome_cientifico, char sexo, 
		double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
		shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas, string tipo_veneno, 
		int day, int month, int year): Animal(id, "Arachnida", nome_cientifico, sexo, 
		tamanho, dieta, veterinario, tratador, nome_batismo),  m_total_de_mudas(total_de_mudas), 
		m_tipo_veneno(tipo_veneno) {
	m_ultima_muda.set_day(day);
	m_ultima_muda.set_month(month);
	m_ultima_muda.set_year(year);
};

Aracnideo::~Aracnideo() {

};

void Aracnideo::set_tipo_veneno(string tipo_veneno) {
	m_tipo_veneno = tipo_veneno;
};

void Aracnideo::set_total_de_mudas(int total_de_mudas) {
	m_total_de_mudas = total_de_mudas;
};

void Aracnideo::set_ultima_muda(date ultima_muda) {
	m_ultima_muda = ultima_muda;
};

string Aracnideo::get_tipo_veneno() {
	return m_tipo_veneno;
};

int Aracnideo::get_total_de_mudas() {
	return m_total_de_mudas;
};

date Aracnideo::get_ultima_muda() {
	return m_ultima_muda;
};

string Aracnideo::Tipo(){
	return "Aracnideo";
};

string Aracnideo::write(){

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
	// Tipo de veneno
	str<<m_tipo_veneno<<endl;
	return str.str();
};

ostream& Aracnideo::print(ostream& os)const{
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
	os<<"Total de mudas  \t\tInteiro \t\t\t"<<m_total_de_mudas<<endl;
	os<<"Data da última muda \t\tclasse date \t\t"<<m_ultima_muda<<endl;
	os<<"Tipo de veneno \t\t\tCadeia de caracteres \t"<<m_tipo_veneno<<endl;
	return os;
}

void Aracnideo::inicializar_aracnideo(int id){
	this->inicializar("Arachnida", id);

	int total_mudas;
	int day;
	int month;
	int year;
	string tipo_veneno;

	cout << "Digite o número total de mudas do aracnídeo: " << endl;
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

	cout << "Digite o tipo de veneno do aracnideo: " << endl;
	tipo_veneno = input.inputString();

	this->set_ultima_muda(ultima_muda);
	this->set_total_de_mudas(total_mudas);
	this->set_tipo_veneno(tipo_veneno);
};

void Aracnideo::alterar_aracnideo(string atributo){
	int day;
	int month;
	int year;

	if(!atributo.compare("total de mudas")){
		cout << "Digite o número total de mudas do anfíbio: " << endl;
		int total_mudas = input.inputInt();
		this->set_total_de_mudas(total_mudas);
	}
	else if (!atributo.compare("data")){
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

		this->set_ultima_muda(ultima_muda);
	}
	else if (!atributo.compare("tipo de veneno")){
		cout << "Digite o tipo de veneno do aracnideo: " << endl;
		atributo = input.inputString();
		this->set_tipo_veneno(atributo);
	}
	else{
		alterar(atributo);
	}

};