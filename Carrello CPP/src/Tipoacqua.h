

#ifndef TIPOACQUA_H_
#define TIPOACQUA_H_

enum Tipoacqua { Naturale, Frizzante };
ostream &operator << ( ostream& stringa, Tipoacqua t )
{
   const string tipologia[] = { "Naturale", "Frizzante" };
   return stringa << tipologia[t];
}

#endif
