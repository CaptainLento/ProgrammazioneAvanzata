/*
 *  Created on: 10 dic 2022
 *      Author: 39345
 */

#ifndef ACQUA_H_
#define ACQUA_H_

#include <iostream>
#include "Prodotto.h"
#include "Tipoacqua.h"
using namespace std;

class Acqua : private Prodotto{
	private:
		const int ID = 20;
	public:
		Tipoacqua tipoacqua;
		Acqua(int t){
			nome = "Acqua";
			costo = getCosto();
			if(t == 0)
				tipoacqua = Frizzante;
			else
				tipoacqua = Naturale;
		}
		string check(){
			return "0";
		}
};

#endif
