#include "envio.h"
#include "envioTipo1.h"
#include "envioTipo2.h"
#include <iostream>
#include <vector>


using namespace std;

int main() {
	float totalMontoEnvios = 0;

	//se crea envio con variables peso, distancia, clase
	EnvioTipo1* envio1 = new EnvioTipo1(2, 100, 1);
	EnvioTipo1* envio2 = new EnvioTipo1(15, 100, 2);

	EnvioTipo2* envio3 = new EnvioTipo2(3, 490);
	EnvioTipo2* envio4 = new EnvioTipo2(10, 520);

	vector<Envio*> coleccionEnvios;
	coleccionEnvios.push_back(envio1);
	coleccionEnvios.push_back(envio2);
	coleccionEnvios.push_back(envio3);
	coleccionEnvios.push_back(envio4);

	for (Envio* envio : coleccionEnvios)
	{
		cout << envio->CalculoEnvio() << endl;
		totalMontoEnvios += envio->CalculoEnvio();
	}
	cout << "El monto total de los envíos es de " << totalMontoEnvios << endl;


	delete envio1;
	delete envio2;
	delete envio3;
	delete envio4;
	return 0;
}

