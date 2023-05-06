/*
 *  Created on: 10 dic 2022
 *      Author: 39345
 */

#ifndef TIPOBIBITA_H_
#define TIPOBIBITA_H_

enum Tipobibita { coca, fanta};
ostream &operator << ( ostream& stringa, Tipobibita t )
{
   const string tipologia[] = { "Naturale", "Frizzante" };
   return stringa << tipologia[t];
}

#endif
