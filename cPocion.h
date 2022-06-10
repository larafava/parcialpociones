#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"

using namespace std;
class cPocion
{
	friend class cPersona;
protected:
	cPocion();
	string desarrollador;
	void Serconsumida(cPersona* persona);
	virtual bool sielixirresurreccion()=0;
	static int cant;

public:
	static void inicializarpociones();



};

