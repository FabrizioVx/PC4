#include <iostream>
#include <fstream>
#include <vector>
#include <functional>
#include <string>
#include <thread>
#include <sstream>
#include <future>

using namespace std;
                        /*https://github.com/FabrizioVx/PC4.git*/
class Calc{
private:
    string fileName;
    fstream archivo;
    unsigned  int intervals;
public:
    Calc(string fileName, unsigned int intervals) : fileName(fileName), intervals(intervals) {

    }

    int ContarPersona(){
        int contador_persona=0;
        string persona;
        archivo.open(fileName,ios::in);
        while(getline(archivo,persona)){
            contador_persona++;
        }
        archivo.close();
        return contador_persona;
    }

    float ObtenerMayor(){
        float mayor = 0.0;
        string n_sirve;
        string sirve;
        archivo.open(fileName);
        while(!archivo.eof()){
            getline(archivo,n_sirve,',');
            getline(archivo,sirve);
            if(mayor < stof(sirve)){
                mayor = stof(sirve);
            }
        }
        archivo.close();
        return mayor;
    }

    string ObtenerMayorNombre(){
        float mayor = 0.0;
        string nombre;
        string max_nombre;
        string n1_sirve;
        string n2_sirve;

        archivo.open(fileName);
        while(!archivo.eof()){
            archivo>>nombre;
            getline(archivo,n1_sirve,',');
            getline(archivo,n2_sirve);
            if(mayor < stof(n2_sirve)){
                mayor = stof(n2_sirve);
                max_nombre = nombre;
                ;
            }
        }
        archivo.close();
        return max_nombre;
    }

    float MenorPeso(){
        float menor = 9999.99;
        string n_sirve;
        string sirve;
        archivo.open(fileName);
        while(!archivo.eof()){
            getline(archivo,n_sirve,',');
            getline(archivo,sirve);
            if(menor > stof(sirve)){
                menor = stof(sirve);
            }
        }
        archivo.close();
        return menor;
    }

    string ObtenerMenorNombre(){
        float menor = 9999.99;
        string nombre;
        string menor_nombre;
        string n1_sirve;
        string n2_sirve;

        archivo.open(fileName);
        while(!archivo.eof()){
            archivo>>nombre;
            getline(archivo,n1_sirve,',');
            getline(archivo,n2_sirve);
            if(menor > stof(n2_sirve)){
                menor = stof(n2_sirve);
                menor_nombre = nombre;
                ;
            }
        }
        archivo.close();
        return menor_nombre;
    }

    float ObtenerPromedio(){

    }


    ~Calc(){
   }


};
