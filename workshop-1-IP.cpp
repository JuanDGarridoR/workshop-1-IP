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
}

void firstPoint(){
    /*Statement: write a program that reads three grades from a student and
    calculates that student's final grade.*/
        
    double gradeOne=0.0, gradeTwo=0.0, gradeThree=0.0, finalGrade=0.0;
        
    cout<<"Digite su primera nota: ";
    cin>>gradeOne;
    cout<<"Digite su segunda nota: ";
    cin>>gradeTwo;
    cout<<"Digite su tercera nota: ";
    cin>>gradeThree;

    if(gradeOne<=5.0 && gradeTwo<=5.0 && gradeThree<=5.0 && 0.0<=gradeOne && 0.0<=gradeTwo && 0.0<=gradeThree){
        
        finalGrade=(gradeOne+gradeTwo+gradeThree)/3;
        cout<<"\nSu nota final es: "<<finalGrade<<endl;
    }else{

        cout<<"\nLas notas no estan en el rango valido [0.0 - 5.0], digitelas de nuevo."<<endl;
        firstPoint();
    }
}
    
void secondPoint(){
    /*Statement: a student's final grade is the weighted average of three grades: the 
    practical grade, which accounts for 30% of the total, the theoretical 
    grade, which accounts for 60%, and the participation grade, which accounts
    for the remaining 10%. Write a program that reads a student's three grades 
    from the standard input and writes their final grade as output. 
    The screen should indicate which grade to enter (practical, theoretical, 
    and participation) and display the student's name and final grade.*/
    
    string studentName="";
    double practicalGrade=0.0, theoricalGrade=0.0, participationGrade=0.0, finalGrade=0.0;
        
    cout<<"Digite su nombre: ";
    fflush(stdin);
    getline(cin, studentName);
    
    cout<<"\nDigite su nota de practica: ";
    cin>>practicalGrade;
    cout<<"Digite su nota teorica: ";
    cin>>theoricalGrade;
    cout<<"Digite su nota de participacion: ";
    cin>>participationGrade;
    

    if(practicalGrade<=5.0 && theoricalGrade<=5.0 && participationGrade<=5.0 && 0.0<=practicalGrade && 0.0<=theoricalGrade && 0.0<=participationGrade){
        
        finalGrade=(practicalGrade*0.3)+(theoricalGrade*0.6)+(participationGrade*0.1);
        cout<<"\nNombre del alumno: "<<studentName<<endl;
        cout<<"Nota final: "<<finalGrade<<endl;
    }else{

        cout<<"\nLas notas no estan en el rango valido [0.0 - 5.0], digitelas de nuevo."<<endl;
        secondPoint();
    }
}
    
void thirdPoint(){
    /*Statement: write a program that reads the two legs of a right
    triangle from standard input and writes its 
    hypotenuse to standard output.*/
    
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
    /*Statement: a calculator needs to be implemented with the following operations: addition, 
    subtraction, division, multiplication, exponentiation, and root. For each 
    arithmetic operation, the program must request two integers. It should be 
    noted that the square root requests only one integer.*/

    int calculatorOption=-1;
    int firstAddend=0, secondAddend=0;
    int minuend=0, subtrahend=0;
    int firstFactor=0, secondFactor=0;
    int dividend=0, divisor=0;
    int base=0, exponent=0;
    int radicand=0;    
    int result=0;

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
