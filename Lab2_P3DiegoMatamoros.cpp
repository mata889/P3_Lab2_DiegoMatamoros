#include <iostream>

using namespace std;

int ejercicio1(int);
int ejercicio2(int,int,int);
int ejercicio3(int);
bool primos(int);

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
          }break;
    case 2:{
           int n;
           int a;
           int b;
           cout<<"Cantidad de veces(n)"<<endl;
            cin>>n;
            cout<<"ingrese a"<<endl;
            cin>> a;
            cout<<"ingrese b"<<endl;
            cin>>b;
            cout<<"Suma de los numeros:"<<ejercicio2(a,b,n)<<endl;
           }break;
    case 3:{
       int numero2;
       cout<<"introduzca un numero"<<endl;
       cin>>numero2;
      if(numero2<150 && numero2%2==0 && numero2!=2){
        ejercicio3(numero2); 
        }else{
          cout<<"Porfavor introduzca un numero menor de 150"<<endl;
          }
           }break;
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

int ejercicio2(int a, int b,int n){
int suma;
  for(int i=2;i<=n;i++){
    if(i%a==0 && i%b!=0 ){
      suma+=i;
    }
    if(i%a!=0 && i%b==0 ){
      suma+=i;
    }
    if(i%a==0 && i%b==0 ){
      suma+=i;
    }
  }
  return suma;
}





int ejercicio3(int y){
  int impar1;
  int impar2;
  for(int i=0;i<y;i++){
    if(primos(i)==true){
      for (int j=0;j<y;j++ ){
        if(primos(j)==true && i!=j && (j)+(i)==y && i!=1 && j!=1){
          cout<<"la combinacion de los numeros son:"<<i<< " y :"<<j<<endl;
        }
      }

    }
  }
}
 

bool primos(int numero){
  int aux;
  for(int cont=2;cont<numero;cont++)
  {
    aux=numero%cont;
    if(aux==0)
      return false;
  }
  return true;

}

