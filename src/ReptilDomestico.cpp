#include "ReptilDomestico.h"

ReptilDomestico::ReptilDomestico(){

}
ReptilDomestico::ReptilDomestico(int id, string nome_cientifico, char sexo, 
			double tamanho, string dieta, shared_ptr<Veterinario> veterinario, 
			shared_ptr<Tratador> tratador, string nome_batismo, bool venenoso,
			string tipo_veneno):
	Reptil(id, "Reptilia", nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, venenoso, tipo_veneno){

}
ReptilDomestico::~ReptilDomestico(){

}

string ReptilDomestico::write(){

	ostringstream str;
	str<<"ReptilDomestico;";
	str<<m_id<<";";
	str<<m_classe<<";";
	str<<m_nome_cientifico<<";";
	str<<m_sexo<<";";
	str<<m_tamanho<<";";
	str<<m_dieta<<";";
	str<<m_veterinario->get_id()<<";";
	str<<m_tratador->get_id()<<";";
	str<<m_nome_batismo<<";";
	// Se é venenoso
	str<<m_venenoso<<";";
	// Tipo de veneno
	str<<m_tipo_veneno<<endl;

	return str.str();
};

string ReptilDomestico::Tipo(){
	return "ReptilDomestico";
};

ostream& ReptilDomestico::print(ostream& os)const{
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

void ReptilDomestico::inicializar_animal(int id){
	inicializar_reptil(id);
};

void ReptilDomestico::alterar_animal(string atributo){
	alterar_reptil(atributo);
};