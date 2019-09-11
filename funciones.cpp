#include <iostream>

using namespace std;

void ImprimirDigitos(int numero){
  int d1=numero%10;
  numero=numero/10;
  int d2=numero%10;
  numero=numero/10;
  int d3=numero%10;
  numero=numero/10;
  int d4=numero%10;
  int d5=numero/10;
  cout<<d5<<'\t'<<d4<<'\t'<<d3<<'\t'<<d2<<'\t'<<d1<<endl;
}

int ContarDigitos(int numero){
  int cont=0;
  while(numero>0){
    numero/=10;
    cont++;
  }
  return cont;
}

bool EsPalindrome(int numero){
  int d1=numero%10;
  numero=numero/10;
  int d2=numero%10;
  numero=numero/10;
  int d3=numero%10;
  numero=numero/10;
  int d4=numero%10;
  int d5=numero/10;
  return (d1==d5 and d2==d4);
}

int Fibonacci(int numero){
  int f1=1;
  int f2=1;
  if (numero==0){
    return f1;

  }else if(numero==1){
    return f1;
  }else{
    while(numero>1){
      int guar=f2;
      f2=f1+f2;
      f1=guar;
      numero=numero-1;
    }
    return f2;
  }

}

bool EsNumero(char caracter){
  int n=static_cast<int>(caracter);
  return (n>=48 and n<=57);
}

bool EsLetra(char caracter){
  int n=static_cast<int>(caracter);
  return ((n>=65 and n<=90)or(n>=97 and n<=122));
}

char ConvertirMin(char caracter){
  int n=static_cast<int>(caracter);
  char c=static_cast<char>(n+32);
  return c;
}

char ConvertirMay(char caracter){
  int n=static_cast<int>(caracter);
  char c=static_cast<char>(n-32);
  return c;
}

int main(){
  while (true){

    int num;
    char cara;
    int opcion;
    cout<<"Que desea hacer?:"<<endl<<" 1.Imprimir Digitos"<<endl<<" 2.Contar Digitos"
    <<endl<<" 3.Palindrome"<<endl<<" 4.Fibonacci"<<endl<<" 5.Test numero"<<endl<<" 6.Test letra"<<endl;
    cin>>opcion;
    

    if (opcion==1){
      cout<<"ingrese un numero de 5 digitos: ";
      cin>>num;
      ImprimirDigitos(num);
    }else if(opcion==2){
      cout<<"ingrese un numero: ";
      cin>>num;
      cout<<ContarDigitos(num);
    }else if(opcion==3){
      cout<<"Ingrese un numero de 5 digitos que crea que es palindrome: ";
      cin>>num;
      if (EsPalindrome(num)){
        cout<<"Si es palindrome";
      }else{
        cout<<"No es palindrome";
      }
    }else if(opcion==4){
      cout<<"Ingrese la posicion de la secuencia Fibonacci que desee obtener: ";
      cin>>num;
      cout<<Fibonacci(num);
    }else if(opcion==5){
      cout<<"Ingrese el caracter: ";
      cin>>cara;
      if (EsNumero(cara)){
        cout<<"Es un numero";
      }else{
        cout<<"No es un numero";
      }
    }else if(opcion==6){
      cout<<"Ingrese el caracter: ";
      cin>>cara;
      if (EsLetra(cara)){
        cout<<"Es una letra y ";
        if (static_cast<int>(cara)>=65 and static_cast<int>(cara)<=90){
          cout<<"su minuscula es: "<<ConvertirMin(cara);
        }else{
          cout<<"su mayuscula es: "<<ConvertirMay(cara);
        }

      }else{
        cout<<"No es una letra";
      }
    }

  system("cls");
  }
  return 0;
}
