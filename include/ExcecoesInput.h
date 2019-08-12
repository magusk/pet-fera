#include <stdexcept>
#include <iostream>

using namespace std;

class NaoENumero: public invalid_argument{
	public:
		NaoENumero() : invalid_argument("Isso não é um número"){};
};