/*
 *  Created on: 10 dic 2022
 *      Author: 39345
 */


#include <iostream>
#include "Ingrediente.h"
using namespace std;
#include "Prodotto.h"
#include "Tipoacqua.h"
#include "Tipobibita.h"
#include "Panino.h"
#include "Acqua.h"
#include "bibita.h"
#include "Carrello.h"
#include <math.h>


int main() {

	// Creo il mio carrello
	Carrello carrello = Carrello();
	cout << endl;

	// Creo qualche ingredienti e panini (inizializer list)
	Ingrediente<int> i1 = Ingrediente<int>(1,"pane", 0.15);
	Ingrediente<int> i2 = Ingrediente<int>(2,"prosciutto", 0.6);
	Ingrediente<int> i3 = Ingrediente<int>(3,"insalata", 0.2);
	Ingrediente<int> i4 = Ingrediente<int>(4,"pomodoro", 0.3);
	Ingrediente<int> i5 = Ingrediente<int>(5,"cotoletta", 1.1);
	Ingrediente<int> i6 = Ingrediente<int>(6,"salsa", 0.1);
	Panino<int> p1 = {i1, i2, i4, i3};
	Panino<int> p2 = {i1, i5, i6};
	Panino<int> p3 = {i1, i5};
	Panino<int> p4 = {i1, i5};
	Panino<int> p5 = {i1, i5, i3};
	cout << endl;

	// Aggiungo i panini al mio carrello (p3 e p4 uguali quindi solo 1)
	carrello.nuovoProdotto(&p1);
	carrello.nuovoProdotto(&p2);
	carrello.nuovoProdotto(&p3);
	carrello.nuovoProdotto(&p4);
	carrello.nuovoProdotto(&p5);
	cout << endl;

	// Cancello p2 e aggiungo un ingrediente a p1
	delete &p2;
	p1.append({i6});

	// Stampo tutto il mio carrello e il suo size
	cout << p3.toString() << endl;
	cout << p4.toString() << endl;
	carrello.stampa();
	cout << "size: " << carrello.size();
	cout << endl;

	// Tolgo un panino dal carrello e ristampo
	delete &p2;
	cout << endl;
	carrello.stampa();
	cout << "size: " << carrello.size() << endl ;
	cout << endl;

	// Faccio 2 drink e testo il distruttore
	Bibita b1 = Bibita(1);
	Bibita b2 = Bibita(0);
	cout << b2.toString() << endl;
	cout << endl;

	// Faccio menu e vedo che secondo drink non messo
	carrello.nuovoProdotto(&b2);
	carrello.nuovoProdotto(&b1);
	cout << endl;
	carrello.stampa();
	cout << "size: " << carrello.size() << endl;
	cout << endl;

	// Testo le acqua per vedere se vanno gli enumerativi
	Acqua aF = Acqua(0);
	cout << aF.tipoacqua << endl;
	Acqua aN = Acqua(1);
	cout << aN.tipoacqua << endl;
	cout << endl;

	// Carrello intero
	cout << endl;
	carrello.stampa();
	cout << "size: " << carrello.size()<< endl ;

}
