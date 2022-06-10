#pragma once
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

class cFecha
{
#pragma region Atributos

	tm fecha;

#pragma endregion	

#pragma region Constructor y Destructor

public:
	//Constructor por default, inicia en la fecha de hoy
	cFecha();

	//Constructor inicia en dia, mes, año
	cFecha(int d, int m, int a);

	cFecha(int dia, int mes, int anio, int hora, int minutos);

	~cFecha();

#pragma endregion

#pragma region Metodos
	static int DiasEntreFechas(cFecha* inicio, cFecha* fin);
	//Cambia la fecha a la fecha actual
	void SetHoy();

	//Verifica que la fecha esté completa
	bool FechaCompleta();

	//Devuelve la fecha actual en forma de string
	string To_string();

	// Imprime fecha
	void ImprimirFecha();
#pragma endregion
};

