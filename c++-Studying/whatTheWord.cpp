#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    char palavra[30] , letra[1] , secreto[30];
    int tam , i , chances , acertos ;
    bool acerto;
    
    chances = 6;
    tam = 0;
    i = 0;
    acertos = 0;
    acerto = false;
    
    cout << "Enter a secret word for someone try do ask : ";
    cin >> palavra;
    system("clear");
    
    while (palavra[i] != '\0'){
        i++;
        tam++;
    }
    
    for (i = 0; i < 30; i++){
        secreto[i] = '-';
    }
    
    while (chances > 0 && acertos < tam){
        cout << "Chances restantes = " << chances << "\n\n";
        cout << "Palavra Secreta! ";
        
        for (i = 0; i<tam ; i++){
            cout << secreto[i];
        }
        
        cout << "\n\nDigite um letra: ";
        cin >> letra[0];
        
        for (i = 0; i < tam ; i++){
            if (palavra[i] == letra[0] && secreto[i] == '-'){
                acerto = true;
                secreto[i] = palavra[i];
                acertos++;
            }
        }
        
        if (!acerto){
            chances -= 1;
        }
        
        acerto = false;
        system("clear");
    }
    if (acertos == tam){
        cout << "Vc venceu!";
    }else{
        cout << "Vc perdeu!" << " a palavra era : " << palavra;
    }
    return 0;
}