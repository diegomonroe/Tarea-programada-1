#include "envioTipo2.h"

envioTipo2::envioTipo2(float peso, float distancia)
{
	this->peso = peso;
	this->distancia = distancia;
}


float envioTipo2::CalculoEnvio()
{
	float totalMonto = 20;

	totalMonto += montoAdicional();
	return totalMonto;
}

float envioTipo2::montoAdicional() {
	float montoAdicional = 0;
	
	if (distancia>500) {
		montoAdicional += 5;
	}
	if (peso>4) {
		montoAdicional += 3;
	}
	return montoAdicional;
}