#include "envio.h"
#include "envioTipo1.h"
#include <iostream>
#include <vector>
#include "envioTipo2.h"

using namespace std;

int main() {
	float totalMontoEnvios = 0;

	//se crea envio con variables peso, distancia, clase
	envioTipo1* envio1 = new envioTipo1(2, 100, 1);
	envioTipo1* envio2 = new envioTipo1(15, 100, 2);

	envioTipo2* envio3 = new envioTipo2(3, 490);
	envioTipo2* envio4 = new envioTipo2(10, 520);

	vector<Envio*> coleccionEnvios;
	coleccionEnvios.push_back(envio1);
	coleccionEnvios.push_back(envio2);
	coleccionEnvios.push_back(envio3);
	coleccionEnvios.push_back(envio4);

	for (Envio* envio : coleccionEnvios)
	{
		cout << envio->CalculoEnvio()<<endl;
		totalMontoEnvios += envio->CalculoEnvio();
	}
	cout << "El monto total de los env�os es de " << totalMontoEnvios << endl;
	

	delete envio1;
	delete envio2;
	delete envio3;
	delete envio4;
	return 0;
}
