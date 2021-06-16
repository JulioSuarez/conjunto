// ---------------------------------------------------------------------------

#pragma hdrstop

#include "ConjuntoJCST.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)

ConjuntoS::ConjuntoS() {
	cant = 0;
	ptr_conj = NULO;
	mem = new CSMemoria();
	srand(time(NULL));
}

ConjuntoS::ConjuntoS(CSMemoria* m) {
	cant = 0;
	ptr_conj = NULO;
	mem = m;
	srand(time(NULL));
}

bool ConjuntoS::vacio() {
	return cant == 0; // ptr_conj == NULO;
}

bool ConjuntoS::pertenece(int e) {
	int pc = ptr_conj;
	while (pc != NULO) {
		if (mem->obtener_dato(pc, datoCJ) == e) // pc->dato == e
				return true;
		pc = mem->obtener_dato(pc, linkCJ); // pc = pc->sig
	}
	return false;
}

void ConjuntoS::inserta(int e) {
	if (!pertenece(e)) { // al insertar se asegura que no entre repetidos
		int dir = mem->new_espacio(datosCJ);
		if (dir != NULO) {
			mem->poner_dato(dir, datoCJ, e); // dir->dato = e;
			mem->poner_dato(dir, linkCJ, ptr_conj); // dir->link = ptr_conj;
			ptr_conj = dir;
			cant++;
		}
		else
			cout << "ERROR NO EXISTE ESPACIO MEMORIA\n";
	}
	else
		cout << "ERROR YA EXISTE EL ELEMENTO\n";
}

string ConjuntoS::to_str() {
	string s = "{";
	int p = ptr_conj;
	int c = 0;
	while (p != NULO) {
		c++;
		int ele = mem->obtener_dato(p, datoCJ); // p->dato;
		s += lexical_cast<string>(ele);
		if (c < cant)
			s = s+",";
		p = mem->obtener_dato(p, linkCJ); // p->sig;
	}
	return s + "}";
}

