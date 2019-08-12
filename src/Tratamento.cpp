#include "Tratamento.h"

string * Tratamento::Tratamento_Data(string line){
	string auxiliar;
	string * data = new string[3];

	int contador = 0;

	for (int i = 0; i < 3; i++){
		while (contador < (int)line.size() && (line.at(contador) != '/' && line.at(contador) != '\0' && line.at(contador) != '\n' )){
			auxiliar.push_back(line.at(contador));
			contador+=1;
		}
		contador += 1;
		data[i] = auxiliar;
		auxiliar.clear();
	}
	return data;
};

shared_ptr<Animal> Tratamento::Tratamento_Construtor_Animal(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar;

	int contador = 0;
	while(line[contador] != '\n' and line[contador] != ';'){
		auxiliar.push_back(line.at(contador));
		contador++;
	}

	if (auxiliar == "AnfibioDomestico"){
		return Tratamento_AnfibioDomestico(line, funcionarios);
	}
	if (auxiliar == "AnfibioExotico"){
		return Tratamento_AnfibioExotico(line, funcionarios);
	}
	if (auxiliar == "AnfibioNativo"){
		return Tratamento_AnfibioNativo(line, funcionarios);
	}
	if (auxiliar == "AracnideoDomestico"){
		return Tratamento_AracnideoDomestico(line, funcionarios);
	}
	if (auxiliar == "AracnideoNativo"){
		return Tratamento_AracnideoNativo(line, funcionarios);
	}
	if (auxiliar == "AracnideoExotico"){
		return Tratamento_AracnideoExotico(line, funcionarios);
	}
	if (auxiliar == "AveDomestica"){
		return Tratamento_AveDomestica(line, funcionarios);
	}
	if (auxiliar == "AveNativa"){
		return Tratamento_AveNativa(line, funcionarios);
	}
	if (auxiliar == "AveExotica"){
		return Tratamento_AveExotica(line, funcionarios);
	}
	if (auxiliar == "InsetoDomestico"){
		return Tratamento_InsetoDomestico(line, funcionarios);
	}
	if (auxiliar == "InsetoExotico"){
		return Tratamento_InsetoExotico(line, funcionarios);
	}
	if (auxiliar == "InsetoNativo"){
		return Tratamento_InsetoNativo(line, funcionarios);
	}
	if (auxiliar == "MamiferoDomestico"){
		return Tratamento_MamiferoDomestico(line, funcionarios);
	}
	if (auxiliar == "MamiferoExotico"){
		return Tratamento_MamiferoExotico(line, funcionarios);
	}
	if (auxiliar == "MamiferoNativo"){
		return Tratamento_MamiferoNativo(line, funcionarios);
	}
	if (auxiliar == "ReptilDomestico"){
		return Tratamento_ReptilDomestico(line, funcionarios);
	}
	if (auxiliar == "ReptilExotico"){
		return Tratamento_ReptilExotico(line, funcionarios);
	}
	if (auxiliar == "ReptilNativo"){
		return Tratamento_ReptilNativo(line, funcionarios);
	}
	if (auxiliar == "PeixeDomestico"){
		return Tratamento_PeixeDomestico(line, funcionarios);
	}
	if (auxiliar == "PeixeExotico"){
		return Tratamento_PeixeExotico(line, funcionarios);
	}
	if (auxiliar == "PeixeNativo"){
		return Tratamento_PeixeNativo(line, funcionarios);
	}
	return NULL;
};

shared_ptr<Animal> Tratamento::Tratamento_AnfibioDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[12];
	int contador = 0;

	for (int i =0; i < 12; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[11]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );
	char sexo = char(auxiliar[4][0]);

	shared_ptr<AnfibioDomestico> anfibio(new AnfibioDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, auxiliar[9]
		, stoi(auxiliar[10]), stoi(data[0]), stoi(data[1]), 
		stoi(data[2])));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibio);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AnfibioExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[15];
	int contador = 0;

	for (int i =0; i < 15; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[11]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );
	char sexo = char(auxiliar[4][0]);

	shared_ptr<AnfibioExotico> anfibio(new AnfibioExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[12], auxiliar[13], auxiliar[14]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibio);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AnfibioNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[14];
	int contador = 0;

	for (int i =0; i < 14; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[11]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );
	char sexo = char(auxiliar[4][0]);

	shared_ptr<AnfibioNativo> anfibio(new AnfibioNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[12], auxiliar[13]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(anfibio);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AveDomestica(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[12];
	int contador = 0;

	for (int i =0; i < 12; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<AveDomestica> ave(new AveDomestica(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), stoi(auxiliar[11])));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(ave);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AveExotica(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[15];
	int contador = 0;

	for (int i =0; i < 15; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<AveExotica> ave(new AveExotica(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), stoi(auxiliar[11]), auxiliar[12],
		auxiliar[13], auxiliar[14]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(ave);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AveNativa(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[14];
	int contador = 0;

	for (int i =0; i < 14; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<AveNativa> ave(new AveNativa(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), stoi(auxiliar[11]), auxiliar[12],
		auxiliar[13]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(ave);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_InsetoDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[13];
	int contador = 0;

	for (int i =0; i < 13; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[12]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );
	char sexo = char(auxiliar[4][0]);

	shared_ptr<InsetoDomestico> inseto(new InsetoDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], stoi(data[0])
		, stoi(data[1]), stoi(data[2])));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(inseto);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_InsetoExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[16];
	int contador = 0;

	for (int i =0; i < 16; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[12]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );
	char sexo = char(auxiliar[4][0]);

	shared_ptr<InsetoExotico> inseto(new InsetoExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[13], auxiliar[14], auxiliar[15]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(inseto);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_InsetoNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[15];
	int contador = 0;

	for (int i =0; i < 15; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[12]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );
	char sexo = char(auxiliar[4][0]);

	shared_ptr<InsetoNativo> inseto(new InsetoNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[13], auxiliar[14]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(inseto);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_MamiferoDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[11];
	int contador = 0;

	for (int i =0; i < 11; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<MamiferoDomestico> mamifero(new MamiferoDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], auxiliar[10]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_MamiferoExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[14];
	int contador = 0;

	for (int i =0; i < 14; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<MamiferoExotico> mamifero(new MamiferoExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], auxiliar[10], auxiliar[11], auxiliar[12], auxiliar[13]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_MamiferoNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[13];
	int contador = 0;

	for (int i =0; i < 13; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<MamiferoNativo> mamifero(new MamiferoNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], auxiliar[10], auxiliar[11], auxiliar[12]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(mamifero);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_ReptilDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[12];
	int contador = 0;

	for (int i =0; i < 12; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<ReptilDomestico> reptil(new ReptilDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(reptil);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_ReptilExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[15];
	int contador = 0;

	for (int i =0; i < 15; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<ReptilExotico> reptil(new ReptilExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], auxiliar[12],
		auxiliar[13], auxiliar[14]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(reptil);
 
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_ReptilNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[14];
	int contador = 0;

	for (int i =0; i < 14; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<ReptilNativo> reptil(new ReptilNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], auxiliar[12],
		auxiliar[13]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(reptil);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AracnideoDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[13];
	int contador = 0;

	for (int i =0; i < 13; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[12]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );
	char sexo = char(auxiliar[4][0]);

	shared_ptr<AracnideoDomestico> aracnideo(new AracnideoDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], stoi(data[0]), stoi(data[1]), 
		stoi(data[2])));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(aracnideo);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AracnideoExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[16];
	int contador = 0;

	for (int i =0; i < 16; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[12]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );
	char sexo = char(auxiliar[4][0]);

	shared_ptr<AracnideoExotico> aracnideo(new AracnideoExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[13], auxiliar[14], auxiliar[15]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(aracnideo);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_AracnideoNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[15];
	int contador = 0;

	for (int i =0; i < 15; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	string * data = Tratamento_Data(auxiliar[12]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );
	char sexo = char(auxiliar[4][0]);

	shared_ptr<AracnideoNativo> aracnideo(new AracnideoNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], stoi(auxiliar[10]), auxiliar[11], stoi(data[0]), stoi(data[1]), 
		stoi(data[2]), auxiliar[13], auxiliar[14]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(aracnideo);

	delete[] data;
	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_PeixeDomestico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[11];
	int contador = 0;

	for (int i =0; i < 11; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<PeixeDomestico> peixe(new PeixeDomestico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], auxiliar[10]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(peixe);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_PeixeExotico(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[14];
	int contador = 0;

	for (int i =0; i < 14; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<PeixeExotico> peixe(new PeixeExotico(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], auxiliar[10], auxiliar[11], auxiliar[12], auxiliar[13]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(peixe);

	return bicho;
};

shared_ptr<Animal> Tratamento::Tratamento_PeixeNativo(string line, map<int , shared_ptr<Funcionario>> &funcionarios){
	string auxiliar[13];
	int contador = 0;

	for (int i =0; i < 13; i++){
		while(contador < (int)line.size() and (line[contador] != ';')){
			auxiliar[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char sexo = char(auxiliar[4][0]);
	shared_ptr<Veterinario> vet = dynamic_pointer_cast<Veterinario>( funcionarios[stoi(auxiliar[7])] );
	shared_ptr<Tratador> trat = dynamic_pointer_cast<Tratador>( funcionarios[stoi(auxiliar[8])] );

	shared_ptr<PeixeNativo> peixe(new PeixeNativo(stoi(auxiliar[1]), 
		auxiliar[3], sexo, stoi(auxiliar[5]), auxiliar[6], vet, trat, 
		auxiliar[9], auxiliar[10], auxiliar[11], auxiliar[12]));

	shared_ptr<Animal> bicho = dynamic_pointer_cast<Animal>(peixe);

	return bicho;
};



shared_ptr<Funcionario> Tratamento::Tratamento_Construtor_Funcionario(string line){
	string auxiliar;

	int contador = 0;
	while(contador < (int)line.size() and line[contador] != '\n' and line[contador] != ';'){
		auxiliar.push_back(line.at(contador));
		contador++;
	}

	if (auxiliar == "Tratador"){
		return Tratamento_Tratador(line);
	}
	if (auxiliar == "Veterinario"){
		return Tratamento_Veterinario(line);
	}
	return NULL;
};

shared_ptr<Funcionario> Tratamento::Tratamento_Tratador(string line){
	string atributos[9];
	int contador = 0;

	for(int i = 0; i < 9; i++){
		while(contador < (int)line.size() and line[contador] != ';'){
			atributos[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char fator_rh = static_cast<char>(atributos[6][0]);

	shared_ptr<Tratador> tratador(new Tratador(stoi(atributos[1])
		, atributos[2],atributos[3], stoi(atributos[4]), atributos[5]
		, fator_rh, atributos[7], stoi(atributos[8])));

	shared_ptr<Funcionario> funcionario = dynamic_pointer_cast<Funcionario>(tratador);
	return funcionario;
};

shared_ptr<Funcionario> Tratamento::Tratamento_Veterinario(string line){
	string atributos[9];
	int contador = 0;

	for(int i = 0; i < 9; i++){
		while(contador < (int)line.size() and line[contador] != ';'){
			atributos[i].push_back(line[contador]);
			contador++;
		}
		contador++;
	}

	char fator_rh = static_cast<char>(atributos[6][0]);

	shared_ptr<Veterinario> veterinario(new Veterinario(stoi(atributos[1])
		, atributos[2],atributos[3], stoi(atributos[4]), atributos[5]
		, fator_rh, atributos[7], atributos[8]));

	shared_ptr<Funcionario> funcionario = dynamic_pointer_cast<Funcionario>(veterinario);
	return funcionario;
};