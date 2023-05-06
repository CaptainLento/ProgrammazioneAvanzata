/*
 * Ingrediente.h
 *
 *  Created on: 10 dic 2022
 *      Author: 39345
 */

#ifndef INGREDIENTE_H_
#define INGREDIENTE_H_

#include <iostream>
#include <math.h>
using namespace std;



template <typename T> class Ingrediente {
	private:
		T id;

	public:
		string descrizione;
		double costo;

		Ingrediente(T i,string n, double x){
			descrizione = n;
			id = i;
			costo = x;
		}

		string getNome(){
			return descrizione;
		}

		string toString(){
			string s = descrizione + ":" + to_string(costo) + "$ ";
			return s;
		}

};


#endif /* INGREDIENTE_H_ */
