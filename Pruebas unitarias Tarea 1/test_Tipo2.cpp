#include "pch.h"
#include "..\Tarea programada 1\envioTipo2.h"
#include "..\Tarea programada 1\envioTipo2.cpp"


//Envio menor a 500 y menor a 4kg
TEST(EnvioTipo2, Calcular_Tipo2_SinMontoAdicional) {
    EnvioTipo2 envio(3,100);
    EXPECT_EQ(20, envio.CalculoEnvio());
}
    
//Envio mayor a 500 y menor a 4kg
TEST(EnvioTipo2, Calcular_Tipo2_DistMayor) {
    EnvioTipo2 envio(3,520);
    EXPECT_EQ(25, envio.CalculoEnvio());
}

//Envio menor a 500 y mayor a 4kg
TEST(EnvioTipo2, Calcular_Tipo2_PesoMayor) {
    EnvioTipo2 envio(5, 300);
    EXPECT_EQ(23, envio.CalculoEnvio());
}

//Envio mayor a 500 y mayor a 4kg
TEST(EnvioTipo2, Calcular_Tipo2_DistPesoMayor) {
    EnvioTipo2 envio(10,520);
    EXPECT_EQ(28, envio.CalculoEnvio());
}