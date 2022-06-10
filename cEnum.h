#pragma once
#include <string>

using namespace std;

enum class eEstado{Vivo,Muerto};
string estadostring(eEstado estado);

enum class eTamaniopocion{Chico,Mediano,Grande};
string stringtamaniopocion(eTamaniopocion tampocion);