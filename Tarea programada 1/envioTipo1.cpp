#include "envioTipo1.h"

envioTipo1::envioTipo1(float peso, float distancia, int clase)
{
	this->peso = peso;
	this->distancia = distancia;
	this->clase = clase;
}


float envioTipo1::CalculoEnvio()
{
	float totalMonto = 0;
	
	totalMonto = distancia*calculoPorKm();
	return totalMonto;
}


float envioTipo1::calculoPorKm()
{
	switch (clase)
	{
	case 1:
		if (peso>=1 && peso<4)
		{
			return 0.195;
		}
		else if (9 > peso && peso >= 4)
		{
			return 0.450;
		}
		else if(peso >= 9) {
			return 0.500;
		}
		break;
	case 2:
		if (peso >= 1 && peso < 4)
		{
			return 0.0195;
		}
		else if (9 > peso && peso >= 4)
		{
			return 0.0450;
		}
		else if(peso >= 9){
			return 0.0500;
		}
		break;
	case 3:
		if (peso >= 1 && peso < 4)
		{
			return 0.0150;
		}
		else if (9 > peso && peso >= 4)
		{
			return 0.0160;
		}
		else if (peso >= 9) {
			return 0.0170;
		}
		break;
	default:
		break;
	}
	return 0;
}