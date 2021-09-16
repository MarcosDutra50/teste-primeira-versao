#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()
{
    double altura;
    double peso;
    altura=0;
    cout <<"Digite sua altura: " <<endl;
    cin>>altura;
    cout<<"Digite seu peso: " <<endl;
    cin>>peso;
    
    double alturaxaltura;
    alturaxaltura=altura*altura;
    double imc;
    imc=peso/alturaxaltura;
    
    cout <<"Seu Imc e: " <<imc <<endl;
    
    if(imc<18){
        cout <<"Esta abaixo do peso" <<endl;
    }
    if(imc=24>18){
        cout <<"Esta com o peso ideal, parabens" <<endl;
    }
    if(imc>24){
        cout <<"Estas acima do peso"<<endl;
        cout <<"Vamos fazer uma dieta meu camarada"<<endl;
        cout <<"Se nao a moita vai fechar"<<endl;
        
        }
    
    
system ("pause");
return 0;
}
