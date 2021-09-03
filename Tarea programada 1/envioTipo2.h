#pragma once

#ifndef ENVIOTIPO2_H
#define ENVIOTIPO2_H

#include "envio.h"

class EnvioTipo2 : public Envio {

    float peso = 0;
    float distancia = 0;
private:
    float montoAdicional();
public:
    EnvioTipo2(float, float);
    virtual float CalculoEnvio();
};

#endif