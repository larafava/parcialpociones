// parcialpociones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "cPocion.h"

int main()
{
	try {
		cPocion::inicializarpociones();

	}
	catch (...) {
		cout << "Excepcion" << endl;
	}
}

