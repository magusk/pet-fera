#include "TratamentoInput.h"

double TratamentoInput::is_number(char * number){
	int i = 0;
	string name = number;
	while(name.size() == 0 or number[i] != '\0'){
		if (!(number[i] == 46 or (int(number[i]) > 47 and int(number[i]) < 58))){
			i = 0;
			cout << "Isso não é um número, tente novamente: " << endl;
			cin.clear();
			cin.getline(number,300);
			name = number;
		}
		i++;
	}
	return stoi(number);
};

char * TratamentoInput::inputChar(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, 300);
	return auxiliar;
};


string TratamentoInput::inputString(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, 300);
	string definitive = static_cast<string>(auxiliar);
	delete[] auxiliar;
	return definitive;
};

int TratamentoInput::inputInt(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, 300);
	int result =  is_number(auxiliar);
	delete[] auxiliar;
	return result;
};

double TratamentoInput::inputDouble(){
	char * auxiliar = new char;
	cin.clear();
	cin.getline(auxiliar, 300);
	int result =  is_number(auxiliar);
	delete[] auxiliar;
	return result;
};

