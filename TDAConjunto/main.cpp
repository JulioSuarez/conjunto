#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif

#include <stdio.h>

#include "ConjuntoJCST.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	CSMemoria* myMemoria = new CSMemoria();
	ConjuntoS* aJCST = new ConjuntoS(myMemoria);

	aJCST->inserta(3);
	aJCST->inserta(7);
	aJCST->inserta(5);

	cout << "Conjunto A" << endl;
	cout << aJCST->to_str() << endl;

	system("pause");
	return 0;
}
