#include "pch.h"

#include "..\Tarea programada 1\envioTipo1.cpp"

 //Primer tracto, primera clase
TEST(EnvioTipo1, Calcular_Tipo1_PrimerTracto_Clase1) {
    EnvioTipo1 envio1(2,100,1);
    EXPECT_FLOAT_EQ(float(19.5), envio1.CalculoEnvio());
}

//Segundo tracto, primera clase
TEST(EnvioTipo1, Calcular_Tipo1_SegundoTracto_Clase1) {
    EnvioTipo1 envio1(5,100,1);
    EXPECT_FLOAT_EQ(float(45), envio1.CalculoEnvio());
}
   
//Tercer tracto, primera clase
TEST(EnvioTipo1, Calcular_Tipo1_TercerTracto_Clase1) {
    EnvioTipo1 envio3(10,100,1);
    EXPECT_FLOAT_EQ(float(50), envio3.CalculoEnvio());
}

//Primer tracto, segunda clase
TEST(EnvioTipo1, Calcular_Tipo1_PrimerTracto_Clase2) {
    EnvioTipo1 envio4(2,200,2);
    EXPECT_FLOAT_EQ(float(3.9), envio4.CalculoEnvio());
}

//Segundo tracto, segunda clase
TEST(EnvioTipo1, Calcular_Tipo1_SegundoTracto_Clase2) {
    EnvioTipo1 envio5(5,100,2);
    EXPECT_FLOAT_EQ(float(4.5), envio5.CalculoEnvio());
}

//Tercer tracto, segunda clase
TEST(EnvioTipo1, Calcular_Tipo1_TercerTracto_Clase2) {
    EnvioTipo1 envio6(10,100,2);
    EXPECT_FLOAT_EQ(float(5), envio6.CalculoEnvio());
}

//Primer tracto, Tercera clase
TEST(EnvioTipo1, Calcular_Tipo1_PrimerTracto_Clase3) {
    EnvioTipo1 envio7(2,100,3);
    EXPECT_FLOAT_EQ(float(1.5), envio7.CalculoEnvio());
}

//Segundo tracto, Tercera clase
TEST(EnvioTipo1, Calcular_Tipo1_SegundoTracto_Clase3) {
    EnvioTipo1 envio8(7,200,3);
    EXPECT_FLOAT_EQ(float(3.2), envio8.CalculoEnvio());
}

//Tercer tracto, Tercera clase
TEST(EnvioTipo1, Calcular_Tipo1_TercerTracto_Clase3) {
    EnvioTipo1 envio9(10,200,3);
    EXPECT_FLOAT_EQ(float(3.4), envio9.CalculoEnvio());
}