#include "InsetoDomestico.h"

InsetoDomestico::InsetoDomestico() {

};
InsetoDomestico::InsetoDomestico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta,shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, int total_de_mudas, 
			string tipo_metamorfose, int day, int month, int year): 
	Inseto(id, "Insecta", nome_cientifico, sexo, tamanho, dieta, veterinario,
	tratador, nome_batismo, total_de_mudas, tipo_metamorfose, day, month, year) {

};

InsetoDomestico::~InsetoDomestico() {

};

string InsetoDomestico::write(){
	ostringstream str;
	str<<"InsetoDomestico;";//0
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
	//Tipo de Metamorfose
	str<<m_tipo_metamorfose<<";";//11
	// Última muda
	str<<m_ultima_muda<<endl;//12

	return str.str();
};

string InsetoDomestico::Tipo(){
	return "InsetoDomestico";
};

ostream& InsetoDomestico::print(ostream& os)const{
	os<<"Campo \tTipo de Dados \tValores"<<endl;
	os<<"Identificador Do animal \tInteiro \t"<<m_id<<endl;
	os<<"Classe do animal \tCadeia de caracteres \t"<<m_classe<<endl;
	os<<"Nome científico do animal \tCadeia de caracteres \t"<<m_nome_cientifico<<endl;
	os<<"Sexo do animal \tCaractere \t"<<m_sexo<<endl;
	os<<"Tamanho média em métros\tDecimal\t"<<m_tamanho<<endl;
	os<<"Dieta Predominante \tCadeia de caracteres \t"<<m_dieta<<endl;
	os<<"Veterinário associado \tInteiro \t"<<m_veterinario->get_id()<<endl;
	os<<"Tratador responsável \tInteiro \t"<<m_tratador->get_id()<<endl;
	os<<"Nome de batismo \tCadeia de caracteres \t"<<m_nome_batismo<<endl;
	os<<"Total de mudas \tInteiro \t"<<m_total_de_mudas<<endl;
	os<<"Data da última muda \tclasse date \t"<<m_ultima_muda<<endl;
	os<<"Tipo de metamorfose \tCadeia de caracteres \t"<<m_tipo_metamorfose<<endl;
	return os;
};

void InsetoDomestico::inicializar_animal(int id){
	inicializar_inseto(id);
};

void InsetoDomestico::alterar_animal(string atributo){
	alterar_inseto(atributo);
};