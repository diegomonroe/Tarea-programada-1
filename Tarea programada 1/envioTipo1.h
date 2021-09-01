#ifndef ENVIOTIPO1_H
#define ENVIOTIPO1_H

#include "envio.h"
#include <string>

class EnvioTipo1 : public Envio {

    float peso=0;
    float distancia = 0;
    int clase = 0;
    float calculoPorKm();
public:
    EnvioTipo1(float, float, int);
    virtual float CalculoEnvio();
    
};

#endif