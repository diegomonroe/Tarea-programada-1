#include "envioTipo1.h"

EnvioTipo1::EnvioTipo1(float peso, float distancia, int clase)
{
	this->peso = peso;
	this->distancia = distancia;
	this->clase = clase;
}


float EnvioTipo1::CalculoEnvio()
{
	float totalMonto = 0;
	
	totalMonto = this->distancia*calculoPorKm();
	return totalMonto;
}


float EnvioTipo1::calculoPorKm()
{
	switch (clase)
	{
	case 1:
		if (peso>=1 && peso<4)
		{
			return 0.195f;
		}
		else if (9 > peso && peso >= 4)
		{
			return 0.450f;
		}
		else if(peso >= 9) {
			return 0.500f;
		}
		break;
	case 2:
		if (peso >= 1 && peso < 4)
		{
			return 0.0195f;
		}
		else if (9 > peso && peso >= 4)
		{
			return 0.0450f;
		}
		else if(peso >= 9){
			return 0.0500f;
		}
		break;
	case 3:
		if (peso >= 1 && peso < 4)
		{
			return 0.0150f;
		}
		else if (9 > peso && peso >= 4)
		{
			return 0.0160f;
		}
		else if (peso >= 9) {
			return 0.0170f;
		}
		break;
	default:
		break;
	}
	return 0;
}