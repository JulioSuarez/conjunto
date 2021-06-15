#include <iostream>
#include <string>

using namespace std;
#include "JConjS.h"
#include <stdio.h>
using namespace boost;
//El complemento de una intersección de conjuntos es igual a la unión de los complementos de los conjuntos.

//aqui utilice otra clase memoria que no es la mia
int main(){

	 // no puede aumentar metodos a la claes CConjunto, debe desarrollar la solucion en esta seccion.
	 //osea no crear un metodo myConjunto->complementoInterseccion()


	CSMemoria* myMemoria = new CSMemoria();
	myMemoria->new_espacio("grupo,sd"); //m.new_espacio("grupo,sd")


	ConjuntoS* aJCST = new ConjuntoS(myMemoria);
	ConjuntoS* bJCST = new ConjuntoS(myMemoria);
	ConjuntoS* cJCST = new ConjuntoS(myMemoria);
//NOTA:
//SE CREARON 3 CONJUNTOS DISTINTOS CADA UNO DE ELLOS TIENEN TODOS LOS METODOS DE "ConjuntoS"


	//  Ejemplo 1
	// aJCST->inserta(10);//a???.inserta(10)

	// bJCST->inserta(10);//b???.inserta(10)

	// aJCST->inserta(20);//a.???inserta(20)


	// Ejemplo 2
	 aJCST->inserta(3);
	 aJCST->inserta(7);
	 aJCST->inserta(5);

	 bJCST->inserta(3);

	 // A con B
	 //Respuesta deberia ser: 7, 5

	 for(int i = 0; i < aJCST->cardinal(); i++){
		 int elementoA =  aJCST->obtenerElemento(i);  //sacar un elemento del conjunto A

		 //verificar si ese elemento de A pertenece en B (interseccion)
		 //por falso entrarian los que no son (interseccion) de A y B, en otras palabras el Complemento
		 if(bJCST->pertenece(elementoA) == false){
			cJCST->inserta(elementoA);
		 }
	 }

	cout<< "Conjunto A"<<endl;
	cout<< aJCST->to_str()<<endl;

	cout<< "Conjunto B"<<endl;
	cout<< bJCST->to_str()<<endl;

	cout<< "Conjunto C"<<endl;
	cout<< cJCST->to_str()<<endl; ///c???.mostrar

	myMemoria->mostrar(); /// m.mostrar

	//todo Perfecto, era eso
system("pause");
}
