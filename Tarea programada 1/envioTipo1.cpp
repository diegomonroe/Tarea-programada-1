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
	float montoPorKm = 0;
	switch (clase)
	{
	case 1:
		if (1 <= peso < 3)
		{
			montoPorKm = 0.195;
		}
		else if (3 <= peso < 8)
		{
			montoPorKm = 0.450;
		}
		else {
			montoPorKm = 0.500;
		}
	case 2:
		if (1 <= peso < 3)
		{
			montoPorKm = 0.0195;
		}
		else if (3 <= peso < 8)
		{
			montoPorKm = 0.0450;
		}
		else {
			montoPorKm = 0.0500;
		}
	case 3:
		if (1 <= peso < 3)
		{
			montoPorKm = 0.0150;
		}
		else if (3 <= peso < 8)
		{
			montoPorKm = 0.0160;
		}
		else {
			montoPorKm = 0.0170;
		}
	default:
		break;
	}
	return montoPorKm;
}