#include <iostream>

using namespace std;

int ejercicio1();
int ejercicio2();
int ejercicio3();

int main(){
int menu;
bool ciclo=true;
do{
  cout<<"----MENU----"<<endl
      <<"1.Ejercicio#1"<<endl
      <<"2.Ejercicio#2"<<endl
      <<"3.Ejercicio#3"<<endl
      <<"4.Salir"<<endl
      <<"Introduzca opcion:";
      cin>>menu;

  switch(menu){
    case 1: {
       int numero1; 
       cout<<"Ingrese un Numero:";
       cin>>numero1;
       ejercicio1(numero1);
           }
    case 2:{}
    case 3:{}
  }      
    }while(menu!=4);
return 0;  
}



int ejercicio1(int x){
  int numeroSuma;
  for(int i=0;i<x;i++){
      if(i%2!=0 ){
       numeroSuma=+i;  
      }
  }
  return numeroSuma;
}



