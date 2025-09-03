#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

void firstPoint();
void secondPoint();
void thirdPoint();
void fourthPoint();

int main(){

    int option=0;

    cout<<"=====Taller #1 - IP====="<<endl;
    cout<<"1. Punto uno."<<endl;
    cout<<"2. Punto dos."<<endl;
    cout<<"3. Punto tres."<<endl;
    cout<<"4. Punto cuatro."<<endl;
    cout<<"0. Salir."<<endl;
    cout<<"\nDigite la opcion a la que desea ingresar: ";
    cin>>option;
    cout<<"========================"<<endl;

    switch (option){
    case 1:
        firstPoint();
        break;

    case 2:
        secondPoint();
        break;

    case 3:
        thirdPoint();
        break;

    case 4:
        fourthPoint();
        break;

    case 0:
        cout<<"Saliendo del programa."<<endl;
        break;
    
    default:
        cout<<"Digite una opcion valida."<<endl;
    }

    return 0;
    //Nota: cuando ejecuto una opción no vuelve al menú para elegir los puntos.
}

void firstPoint(){
    /*Escriba un programa que lea tres notas de un alumno y
    calcule la nota final de dicho alumno.*/
        
        double gradeOne, gradeTwo, gradeThree, finalGrade;
        
        cout<<"Digite su primera nota: ";
        cin>>gradeOne;
        cout<<"Digite su segunda nota: ";
        cin>>gradeTwo;
        cout<<"Digite su tercera nota: ";
        cin>>gradeThree;
    
        finalGrade=(gradeOne+gradeTwo+gradeThree)/3;
    
        cout<<"\nSu nota final es: "<<finalGrade<<endl;
    
        //Nota: el rango de las notas tiene que ir entre 1.0 y 5.0.
    }
    
    void secondPoint(){
    /*La calificación final de un estudiante es la media
    ponderada de tres notas: la nota de prácticas que
    cuenta con un 30% del total, la nota teórica que cuenta
    con un 60% y la nota de participación que cuenta con
    el 10% restante. Escriba un programa que lea de la
    entrada estándar las tres notas de un alumno y escriba
    en la salida su nota final. Se debe indicar
    por pantalla cual nota se debe ingresar (Practica, teórica y participación) y mostrar el
    nombre del alumno y la nota final.*/
    
        string studentName;
        double practicalGrade, theoricalGrade, participationGrade, finalGrade;
        
        cout<<"Digite su nombre: ";
        cin>>studentName;
        fflush(stdin);
    
        cout<<"\nDigite su nota de practica: ";
        cin>>practicalGrade;
        cout<<"Digite su nota teorica: ";
        cin>>theoricalGrade;
        cout<<"Digite su nota de participacion: ";
        cin>>participationGrade;
    
        finalGrade=(practicalGrade*0.3)+(theoricalGrade*0.6)+(participationGrade*0.1);
    
        cout<<"\nNombre del alumno: "<<studentName<<endl;
        cout<<"Nota final: "<<finalGrade<<endl;
    
        //Nota: el rango de las notas tiene que ir entre 1.0 y 5.0.
        //Nota: no me deja escribir el nombre completo (no toma los espacios).
    }
    
    void thirdPoint(){
    /*Escriba un programa que lea de la entrada estándar los
    dos catetos de un triángulo rectángulo y escriba en la
    salida estándar su hipotenusa.*/
    
        double firstLeg, secondLeg, hypotenuse;

        cout<<"Digite la medida del primer cateto: ";
        cin>>firstLeg;
        cout<<"Digite la medida del segundo cateto: ";
        cin>>secondLeg;

        hypotenuse=sqrt(pow(firstLeg,2)+pow(secondLeg,2));

        cout<<"\nLa hipotenusa del triangulo mide: "<<hypotenuse<<endl;

        //Nota: la medida de los catetos debe ser positiva.
    }
    
    void fourthPoint(){
    /*Se requiere implementar una calculadora con la siguiente operación suma, resta, división,
    multiplicación, potencia y raíz. Para cada operación aritmética el programa debe solicitar
    dos números enteros. Y mostrar en pantalla un cuadro de la siguiente manera. Cabe
    aclarar que la raíz cuadrada solicita solo un número entero.*/

        
    
    }