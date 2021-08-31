#include "envio.h"
#include "envioTipo1.h"
#include <iostream>

using namespace std;

int main() {
	float totalMontoEnvios = 0;

	//se crea envio con variables peso, distancia, clase
	envioTipo1* envio1 = new envioTipo1(2, 100, 1);

	totalMontoEnvios = envio1->CalculoEnvio();

	cout << totalMontoEnvios;

	/*for (Envio* envio : arregloEnvios)
	{
		totalMontoEnvios += envio->CalculoEnvio();
	}
	cout << "El monto total de los envíos es de " << totalMontoEnvios << std::endl;
	*/

	return 0;
}
