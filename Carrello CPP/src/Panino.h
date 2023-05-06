/*
 * Panino.h
 *
 *  Created on: 10 dic 2022
 *      Author: 39345
 */

#ifndef PANINO_H_
#define PANINO_H_

#include <iostream>
#include <list>
#include "Prodotto.h"
#include "initializer_list"
#include "Ingrediente.h"
using namespace std;

template <typename T> class Panino : public Prodotto {
	private:
		int ID;

		//ELENCO DI INGREDIENTI CON IL COSTO TOTALE

		string getIngredients(){
			string s = " --> ";
			typename list<Ingrediente<T>>::iterator i;
			for(i = ingr.begin(); i!=ingr.end(); ++i){
				s += i->getNome();
				s += ", ";
			}
			s += "TOTALE:" + to_string(costo) + " $ }";
			return  s;
		}

		int getID(){
			return ID;
		}

	public:
		list <Ingrediente<T>> ingr;

	    Panino(initializer_list<Ingrediente<T>> l) : ingr(l) {
			static int IDcount = 100; //ID crescente condiviso tra tutti i panini
			ID = IDcount; // assegniamo un ID
			IDcount = IDcount+1;
			costo = getCosto();
	    }

	    void append(initializer_list<Ingrediente<T>> l) {
	        ingr.insert(ingr.end(), l.begin(), l.end());
	    	costo = getCosto();
	    }

		// costo di tutti gli ingredienti + 1
		double getCosto(){
			double costo = 1;
			typename list<Ingrediente<T>>::iterator i;
			for(i = ingr.begin(); i!=ingr.end(); ++i){
				costo += i->costo;
			}
			return costo;
		}

		int numberofIngredients(){
			return ingr.size();
		}

		string toString(){
			string s = "{ ID:" + to_string(ID);
			s += getIngredients();
			return s;
		}

		// i panini non li controllo tramite ID, ma tramite ingredienti
		string check(){
			return getIngredients();
		}

		//svuoto anche gli ingredienti, oltre ad azzerare l'ID
		~Panino(){
			ID = 0;
			ingr.clear();
		}
};

#endif /* PANINO_H_ */
