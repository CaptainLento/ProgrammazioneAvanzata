
#ifndef BIBITA_H_
#define BIBITA_H_

#include <iostream>
#include "Prodotto.h"
#include "Tipobibita.h"
using namespace std;

class Bibita : public Prodotto{
	private:
		int ID = 12;
		int getID(){
			return ID;
		}
	public:
		Tipobibita tipobibita;
		Bibita(int t) : Prodotto(){
			nome = "bibita";
			costo = getCosto();
			if(t == 0)
				tipobibita = coca;
			else
				tipobibita = fanta;
		}
		double getCosto(){
			return 6.00;
		}
		string toString(){
			return "{ ID:" + to_string(ID) + "." + nome + " --> " + to_string(costo) + " $ }";
		}
		string check(){
			return to_string(ID);
		}
		~Bibita(){
			ID = 0;
		}
};

#endif
