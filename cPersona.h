#pragma once
#include <string>
#include <iostream>
#include "cFecha.h"
#include "cEnum.h"
#include "cPocion.h"
#include "exilirresurreccion.h"

using namespace std;

class cPersona
{
	friend class cPocion;
	friend bool cPocion::sielixirresurreccion();
private:
	string fuerza;
int inteligencia;
	string vidaactual;
	string vidamax;
	eEstado estado;
public:
	
	cPersona();
	~cPersona();

	void Consumir(cPocion* pocion);
	void revivir();
	
};

