#pragma once

#ifndef ENVIOTIPO1_H
#define ENVIOTIPO1_H

#include "envio.h"
#include <string>

class envioTipo1 : public Envio {

    float peso=0;
    float distancia = 0;
    int clase = 0;
private:
    float calculoPorKm();
public:
    envioTipo1(float, float, int);
    virtual float CalculoEnvio();

    //virtual std::string ObtenerNombre();
};

#endif