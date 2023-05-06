
#ifndef PRODOTTO_H_
#define PRODOTTO_H_

#include <iostream>
using namespace std;

class Prodotto{
	private:
		const int ID = 0;

		int getID(){
			return ID;
		}

	public:
		string nome;
		double costo;

		Prodotto(){
			costo = getCosto();
		}
		double getCosto(){
			return 0;
		}
		virtual string toString(){
			return nome;
		}
		virtual string check(){
			return to_string(ID);
		}
		virtual ~Prodotto(){
			costo = 0;
			nome = "";
		}
};

#endif
