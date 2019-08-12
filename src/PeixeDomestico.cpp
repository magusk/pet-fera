#include "PeixeDomestico.h"

PeixeDomestico::PeixeDomestico(){

}
PeixeDomestico::PeixeDomestico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, string tipo_agua):
	Peixe(id, "Gnathostomata", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tipo_agua){

}
PeixeDomestico::~PeixeDomestico(){

}

string PeixeDomestico::write(){
	ostringstream str;
	str<<"PeixeDomestico;";
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	// Tipo de agua
	str<<m_tipo_agua<<endl;

	return str.str();

};

string PeixeDomestico::Tipo(){
	return "PeixeDomestico";
};

ostream& PeixeDomestico::print(ostream& os)const{
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

void PeixeDomestico::inicializar_animal(int id){
	inicializar_peixe(id);
};

void PeixeDomestico::alterar_animal(string atributo){
	alterar_peixe(atributo);
};