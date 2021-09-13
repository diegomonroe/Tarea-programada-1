# Tarea-programada-1
Se requiere construir un conjunto de clases que permitan calcular el costo de diferentes tipos de envio.

El proyecto se realizó con Visual Studio 2019, en Windows.

Para lograr correr las pruebas en VS 2019, se agregó tanto los .cpp, como los .h, ya que fue la unica solución para correr las pruebas.


Si aparece un error de inclusión de (#include "gtest/gtest.h") en el pch.h , la forma en la que lo soluciono es:

-Borrar el *Proyecto pruebas unitarias*
-Crear nuevo proyecto Google Test y enlazarlo con el proyecto *Tarea Programada 1*
-Agregar archivo existente y seleccionar los dos .cpp de pruebas unitarias (test_Tipo1.cpp y test_Tipo1.cpp).

Y con eso soluciono el problema de inclusión.
