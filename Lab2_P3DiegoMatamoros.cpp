#include <iostream>

using namespace std;

int ejercicio1(int);
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
       cout<<"Su numero es:"<<ejercicio1(numero1)<<endl;
          }
    case 2:{}
    case 3:{
       int numero2;
       cout<<"introduzca un numero"<<endl;
       cin>>numero2;
      if(numero2<150 && numero2%2==0){
  
        }else{
          cout<<"Porfavor introduzca un numero menor de 150"<<endl;
          }
           }
  }      
    }while(menu!=4);
return 0;  
}




int ejercicio1(int x){
  int numeroSuma;
  int cont;
  for(int i=1;i<x;i++ ){
    cont=0;
    for(int j=2;j<=i;j++){
      if(i%j==0 ){
        cont++;
      }
      if(j==i && cont==1 ){
        numeroSuma+=j;
      }
    }
  }
  return numeroSuma;
}



