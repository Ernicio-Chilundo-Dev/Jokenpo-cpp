#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int escolhaJogador,escolhaComputador;
    char jogarNovamente;

    do{
        cout << "===================Pedra, Papel e Tesoura==================================="<<endl;
        cout << "Por favor faca a sua escolha: "<<endl;
        cout << "1 - PEDRA"<<endl;
        cout << "2 - PAPEL"<<endl;
        cout << "3 - TESOURA"<<endl;
        cin >> escolhaJogador;

        escolhaComputador = srand(time(0));

        
    }

    return 0;
}