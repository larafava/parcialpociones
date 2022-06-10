#include "cEnum.h"

string estadostring(eEstado estado) {
	switch (estado)
	{
	case eEstado::Vivo:
		return "Vivo";
		break;
	case eEstado::Muerto:
		return "Muerto";
		break;
	}
}
string stringtamaniopocion(eTamaniopocion tampocion) {
	switch (tampocion)
	{
	case eTamaniopocion::Chico:
		return "Chico";
		break;
	case eTamaniopocion::Mediano:
		return "Mediano";
		break;
	case eTamaniopocion::Grande:
		return "Grande";
		break;
	}
}