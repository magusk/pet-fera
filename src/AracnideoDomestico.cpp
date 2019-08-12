#include "AracnideoDomestico.h"

AracnideoDomestico::AracnideoDomestico() {

};
AracnideoDomestico::AracnideoDomestico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas, 
			string tipo_veneno, int day, int month, int year): 
	Aracnideo(id, "Arachnida", nome_cientifico, sexo, tamanho, dieta, veterinario,
	tratador, nome_batismo, total_de_mudas, tipo_veneno, day, month, year) {

};

AracnideoDomestico::~AracnideoDomestico() {

};

string AracnideoDomestico::write(){
	ostringstream str;
	str<<"AracnideoDomestico;";//0
	str<<m_id<<";"; //1
	str<<m_classe<<";";//2
	str<<m_nome_cientifico<<";";//3
	str<<m_sexo<<";";//4
	str<<m_tamanho<<";";//5
	str<<m_dieta<<";";//6
	str<<m_veterinario->get_id()<<";";//7
	str<<m_tratador->get_id()<<";";//8
	str<<m_nome_batismo<<";";//9
	// Total de Mudas
	str<<m_total_de_mudas<<";";//10
	// Tipo de veneno
	str<<m_tipo_veneno<<";";//11
	// Última muda
	str<<m_ultima_muda<<endl;//12
	
	return str.str();
};

string AracnideoDomestico::Tipo(){
	return "AracnideoDomestico";
};

ostream& AracnideoDomestico::print(ostream& os)const{
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
};

void AracnideoDomestico::inicializar_animal(int id){
	inicializar_aracnideo(id);
};

void AracnideoDomestico::alterar_animal(string atributo){
	alterar_aracnideo(atributo);
};