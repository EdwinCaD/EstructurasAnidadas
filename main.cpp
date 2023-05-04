///EDWIN CAMPOS DRAGUSIN
///LICENCIATURA EN CIENCIAS COMPUTACIONALES
///ESTRUCTURA DE DATOS

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <locale>
#include <stdio.h>

using namespace std;

struct Direccion{///DECLARACI�N DE LA ESTRUCTURA DIRECCION
    string calle;
    int numero;
    string colonia;

};

struct persona{ ///DELCARACI�N DE LA ESTRUCTURA PERSONA
    string nombre;
    Direccion vivienda;
}sujeto;    ///DECLARACION DE LA VARIABLE TIPO PERSONA, SUJETO

int main()
{
    setlocale(LC_CTYPE,"Spanish"); ///PERMITE USAR ACENTOS
    system("title EJERCICIO PLANTEADO EN LA PLATAFORMA GARZA");///CAMBIA EL TITULO DE LA VENTANA
    system("color 0a");///CAMBIA EL COLOR DE LA LETRA


    cout<<"\t\t\t"<<"INTRODUCIR LA INFORMACI�N QUE SE REQUIERE: "<<endl<<endl;
    cout<<"\t"<<"INGRESE EL NOMBRE DE LA PERSONA A REGISTRAR: ";getline(cin,sujeto.nombre); ///PERMITE INGRESAR ESPACIOS
    cout<<endl;
    cout<<"\t\t"<<"Registrando la direcci�n de: "<<sujeto.nombre<<"..."<<endl<<endl;
    cout<<"\t"<<"INGRESE EL NOMBRE DE LA CALLE: ";getline(cin,sujeto.vivienda.calle);cout<<endl; ///REGISTRA CON ESPACIOS LA CALLE DEL SUJETO
    cout<<"\t"<<"INGRESE EL N�MERO: ";cin>>sujeto.vivienda.numero; ///USO CIN PORQUE ES S�LAMENTE UN ENTERO

    while(cin.fail())///EN CASO DE QUE NO SEA UN ENTERO...
          {
              cin.clear(); ///LIMPIA EL BUFFER DE ENTRADA
              cin.ignore(std::numeric_limits<int>::max(),'\n');///IGNORA LO QUE SE HAYA REGISTRADO ANTES
              cout<<"EL N�MERO DE LA CALLE QUE HA INGRESADO NO ES V�LIDO..."<<endl;
              cout<<"FAVOR DE INGRESAR DE NUEVO EL N�MERO DE LA CASA: ";cin>>sujeto.vivienda.numero;///VUELVE A PEDIR EL DATO
          }

    cin.clear(); ///COMO CAMBIAMOS TIPO DE DATO A LEER, LIMPIAMOS EL BUFFER DE ENTRADA
    cin.ignore(std::numeric_limits<int>::max(),'\n');///Y LO IGNORAMOS, PARA QUE EL SISTEMA NO TENGA FALLOS
    cout<<endl;
    cout<<"\t"<<"INGRESE EL NOMBRE DE LA COLONIA: ";getline(cin,sujeto.vivienda.colonia);///PIDE CON ESPACIOS LA COLONIA

    system("pause");///PAUSA EL SISTEMA
    system("cls");///LIMPIA LA PANTALLA
    system("color 0b");///CAMBIA EL COLOR
    system("title IMPRIMIENDO DATOS GUARDDOS DENTRO DE LAS ESTRUCTURAS");///CAMBIA EL TITULO

    cout<<"\t\t\t"<<"IMPRIMIENDO DATOS GUARDADOS ANTERIORMENTE..."<<endl<<endl; ///DE AQU� PARA ABAJO COMIENZA A IMPRIMIR LOS DATOS

    cout<<"\t\t"<<"NOMBRE DEL USUARIO REGISTRADO: "<<sujeto.nombre<<endl<<endl;
    cout<<"\t\t\t"<<"DIRECCI�N DE SU VIVIENDA "<<endl<<endl;
    cout<<"\t\t"<<"CALLE: "<<sujeto.vivienda.calle<<endl<<endl;
    cout<<"\t\t"<<"N�MERO: "<<sujeto.vivienda.numero<<endl<<endl;
    cout<<"\t\t"<<"COLONIA: "<<sujeto.vivienda.colonia<<endl<<endl;
    return 0;
}
