/*
 * Prodotto.h
 *
 *  Created on: 10 dic 2022
 *      Author: 39345
 */

#ifndef MENU_H_
#define MENU_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include "Prodotto.h"
using namespace std;

class Carrello{
	public:
		vector<Prodotto*> elenco;

		void nuovoProdotto(Prodotto *p){
			string newid = p->check(); //Controlliamo se è un prodotto valido con ID > 0
			if(!trova(p) and  newid != "0"){
				elenco.push_back(p);
				sort(elenco.begin(), elenco.end()); //ordiniamoli da ID più alto al più basso...
				reverse(elenco.begin(), elenco.end()); // e quindi al contrario, dal più alto al più basso.
			}else{
				if(p->toString() != ""){
					cout << "prodotto già esistente:" << p->toString() << endl;
					delete p; // il prodotto già esistente viene cancellato
				}
				else
					cout << "prodotto nullo"<<endl; // il prodotto è già stato cancellato
			}
		}

		//controlla se lo stesso prodotto è già presente
		bool trova(Prodotto *p){
			string s1 = p->check();
			for(unsigned i = 0; i < elenco.size(); ++i){
				string s = elenco.at(i)->check();
				if(s1 == s) return true;
			}
			return false;
		}

		int size(){
			return elenco.size();
		}

		/*
		 * Stampa tutti i prodotti contenuti...
		 * se un prodotto è vuoto, lo rimuove dal menu
		 */
		void stampa(){
			cout << "[-------MENU------]" << endl;
			for(unsigned i = 0; i < elenco.size(); ++i){
				string s = elenco.at(i)->toString();
				if(s!=""){
					cout << ">> "<< s << endl;
				}else{
					elenco.erase(elenco.begin()+i);
					i--;
				}
			}
			cout << "[-------END-------]" << endl;
		}
};


#endif /* MENU_H_ */
