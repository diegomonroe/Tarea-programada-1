#include "envioTipo2.h"

EnvioTipo2::EnvioTipo2(float peso, float distancia)
{
	this->peso = peso;
	this->distancia = distancia;
}


float EnvioTipo2::CalculoEnvio()
{
	float totalMonto = 20;

	totalMonto += montoAdicional();
	return totalMonto;
}

float EnvioTipo2::montoAdicional() {
	float montoAdicional = 0;

	if (distancia > 500) {
		montoAdicional += 5;
	}
	if (peso > 4) {
		montoAdicional += 3;
	}
	return montoAdicional;
}