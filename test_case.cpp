
#include "catch.hpp"
#include "calc.cpp"


#include <string>


TEST_CASE("Clase Calc","") {
    string fileName = "Input.txt";
    unsigned  int intervals = 4;
    unsigned int expectedItemsCount = 50;


    SECTION("Debe crearse recibiendo un nombre de archivo y el numero de intervalos") {

        // Arrange Local

        // Act
        Calc* calc= new Calc(fileName,intervals);
        // Assert

        // TODO: Calcular el total de items leidos del archivo
        unsigned  int actualItemsCount = 0;
        actualItemsCount = calc->ContarPersona();
        REQUIRE(expectedItemsCount ==  actualItemsCount);
        delete calc;
    }


    SECTION("Debe obtener el peso mayor") {
        // Arrange
        Calc* calc= new Calc(fileName,intervals);
        float expectedMax = 4.5;
        // Act
        // TODO: Obtener el mayor
        float actualMax = 0;
        actualMax = calc->ObtenerMayor();
        // Assert
        REQUIRE(expectedMax == actualMax);

        delete calc;
    }

    SECTION("Debe obtener el nombre del recien nacido con mayor peso") {
        // Arrange
        Calc* calc= new Calc(fileName,intervals);
        string expectedMax = "Beatriz";
        // Act
        // TODO: Obtener el nombre del mayor
        string actualMax = "";
        actualMax = calc->ObtenerMayorNombre();
        // Assert
        REQUIRE(expectedMax == actualMax);

        delete calc;
    }

    SECTION("Debe obtener el peso menor") {
        // Arrange
        Calc* calc= new Calc(fileName,intervals);
        float expectedMin = 2.5;
        // Act
        // TODO: Obtener el menor
        float actualMin = 0.0;
        actualMin = calc->MenorPeso();
        // Assert
        REQUIRE(expectedMin == actualMin);

        delete calc;

    }

    SECTION("Debe obtener el nombre del recien nacido con menor peso") {
        // Arrange
        Calc* calc= new Calc(fileName,intervals);
        string expectedMin = "David";
        // Act
        // TODO: Obtener el nombre del mayor
        string actualMin = "";
        actualMin = calc->ObtenerMenorNombre();
        // Assert
        REQUIRE(expectedMin == actualMin);

        delete calc;
    }


    SECTION("Debe calcular el promedio") {
        // Arrange
        Calc* calc= new Calc(fileName,intervals);
        // TODO: Preparar dato de prueba
        float expectedAvg = 0.0;
        // Act
        // TODO: Obtener el promedio
        float actualAvg = 0.1;

        // Assert
        REQUIRE(expectedAvg == actualAvg);
        delete calc;
    }

    SECTION("Debe calcular la mediana") {
        // Arrange
        Calc* calc= new Calc(fileName,intervals);
        // TODO: Preparar dato de prueba
        float expectedMediana = 0.0;
        // Act
        // TODO: Obtener la mediana
        float actualMediana = 0.1;

        // Assert
        REQUIRE(expectedMediana == actualMediana);
        delete calc;
    }

    SECTION("Debe obtener el intervalo modal"){
        // Arrange
        Calc* calc= new Calc(fileName,intervals);
        // TODO: Preparar dato de prueba
        auto expectedInterval = 0.0;
        // Act
        // TODO: Obtener el intervalo modal
        auto actualInteval = 0.1;

        // Assert
        REQUIRE(expectedInterval == actualInteval);
        delete calc;
    }

    SECTION("Debe guardar la tabla de frecuencia"){
        // Arrange
        Calc* calc= new Calc(fileName,intervals);
        // TODO: Preparar dato de prueba
        string fileResult= "output.txt";
        // Act
        // TODO: Guardar la tabla de frecuencia y comprobar que existe
        bool existFile = false;

        // Assert
        REQUIRE(existFile);
        delete calc;
    }
}
