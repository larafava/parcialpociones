#include "cPersona.h"

/*void cPersona::Consumir(cPocion* pocion)
{
	if (this->estado == eEstado::Muerto) {
		if (pocion->sielixirresurreccion()) {
			exilirresurreccion* elixir = dynamic_cast<exilirresurreccion*>(pocion);
			elixir->Serconsumida(this);
			delete elixir;
		}
		
	}
	if(this->estado==eEstado::Vivo)
}*/

void cPersona::revivir() {
	this->vidaactual = this->vidamax;
	this->estado = eEstado::Vivo;
}