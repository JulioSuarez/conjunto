//---------------------------------------------------------------------------

#ifndef ConjuntoJCSTH
#define ConjuntoJCSTH
//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "CSMemJCST.h"
#include <stdlib.h>
#include <time.h>
#include "boost/lexical_cast.hpp"

using namespace std;

using namespace boost;
const string datosCJ = "dato,link";
const string datoCJ = "->dato";
const string linkCJ = "->link";

class ConjuntoS {
private:
	CSMemoria* mem;
	int ptr_conj;
	int cant;

public:
	ConjuntoS();
	ConjuntoS(CSMemoria* m);
	bool vacio();
	bool pertenece(int e);
	void inserta(int e);
	int cardinal();
	int ordinal(int e);
	void suprime(int e);
	int muestrea();
	int obtenerElemento(int posicion);
	string to_str();
};
#endif
