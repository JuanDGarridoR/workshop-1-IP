#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

void firstPoint();
void secondPoint();
void thirdPoint();
void fourthPoint();

int main(){

    int option=-1;

    do{
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

    }while(option!=0);
    
    return 0;
    //Nota: debo traducir los enunciados de cada punto.
}

void firstPoint(){
    /*Escriba un programa que lea tres notas de un alumno y
    calcule la nota final de dicho alumno.*/
        
    double gradeOne=0.0, gradeTwo=0.0, gradeThree=0.0, finalGrade=0.0;
        
    cout<<"Digite su primera nota: ";
    cin>>gradeOne;
    cout<<"Digite su segunda nota: ";
    cin>>gradeTwo;
    cout<<"Digite su tercera nota: ";
    cin>>gradeThree;

    if(0.0<=gradeOne<=5.0 && 0.0<=gradeTwo<=5.0 && 0.0<=gradeThree<=5.0){
        
        finalGrade=(gradeOne+gradeTwo+gradeThree)/3;
        cout<<"\nSu nota final es: "<<finalGrade<<endl;
    }else{

        cout<<"\nLas notas no estan en el rango valido [0.0 - 5.0], digitelas de nuevo."<<endl;
        firstPoint();
    }
    

    
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
    
    string studentName="";
    double practicalGrade=0.0, theoricalGrade=0.0, participationGrade=0.0, finalGrade=0.0;
        
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
    
    double firstLeg=0.0, secondLeg=0.0, hypotenuse=0.0;

    cout<<"Digite la medida del primer cateto: ";
    cin>>firstLeg;
    cout<<"Digite la medida del segundo cateto: ";
    cin>>secondLeg;

    if(firstLeg>0 && secondLeg>0){

        hypotenuse=sqrt(pow(firstLeg,2)+pow(secondLeg,2));
        cout<<"\nLa hipotenusa del triangulo mide: "<<hypotenuse<<endl;
    }else{

        cout<<"\nLas medidas de los catetos no son validas, digitelas de nuevo."<<endl;
        thirdPoint();
    }
}
    
void fourthPoint(){
    /*Se requiere implementar una calculadora con la siguiente operación suma, resta, división,
    multiplicación, potencia y raíz. Para cada operación aritmética el programa debe solicitar
    dos números enteros. Y mostrar en pantalla un cuadro de la siguiente manera. Cabe
    aclarar que la raíz cuadrada solicita solo un número entero.*/

    int calculatorOption=-1;
    double firstAddend=0.0, secondAddend=0.0;
    double minuend=0.0, subtrahend=0.0;
    double firstFactor=0.0, secondFactor=0.0;
    double dividend=0.0, divisor=0.0;
    double base=0.0, exponent=0.0;
    double radicand=0.0;
    double result=0.0;

    do{
        cout<<"=====Calculadora====="<<endl;
        cout<<"1. Suma."<<endl;
        cout<<"2. Resta."<<endl;
        cout<<"3. Multiplicacion."<<endl;
        cout<<"4. Division."<<endl;
        cout<<"5. Potencia."<<endl;
        cout<<"6. Raiz."<<endl;
        cout<<"0. Salir."<<endl;
        cout<<"\nDigite la opcion a la que desea ingresar: ";
        cin>>calculatorOption;
        cout<<"========================"<<endl;
    
        switch(calculatorOption){
            case 1:
                cout<<"Digite el primer sumando: ";
                cin>>firstAddend;
                cout<<"Digite el segundo sumando: ";
                cin>>secondAddend;
    
                result=firstAddend+secondAddend;
    
                cout<<"\nEl resultado de la suma es: "<<result<<endl;
                break;
    
            case 2:
                cout<<"Digite el minuendo: ";
                cin>>minuend;
                cout<<"Digite el sustranedo: ";
                cin>>subtrahend;
    
                result=minuend-subtrahend;
    
                cout<<"\nEl resultado de la resta es: "<<result<<endl;
                break;
    
            case 3:
                cout<<"Digite el primer factor: ";
                cin>>firstFactor;
                cout<<"Digite el segundo factor: ";
                cin>>secondFactor;
    
                result=firstFactor*secondFactor;
    
                cout<<"\nEl resultado de la multiplicacion es: "<<result<<endl;
                break;
    
            case 4:
                cout<<"Digite el dividendo: ";
                cin>>dividend;
                cout<<"Digite el divisor: ";
                cin>>divisor;
    
                result=dividend/divisor;
    
                cout<<"\nEl resultado de la division es: "<<result<<endl;
                break;
    
            case 5:
                cout<<"Digite la base: ";
                cin>>base;
                cout<<"Digite el exponente: ";
                cin>>exponent;
    
                result=pow(base,exponent);
    
                cout<<"\nEl resultado de la potencia es: "<<result<<endl;
                break;
    
            case 6:
                cout<<"Digite el radicando: ";
                cin>>radicand;
    
                result=sqrt(radicand);
    
                cout<<"\nEl resultado de la raiz es: "<<result<<endl;
                break;
    
            case 0:
                cout<<"Saliendo del programa."<<endl;
                break;
        
            default:
                cout<<"Digite una opcion valida."<<endl;
        }
    }while(calculatorOption!=0);
}
