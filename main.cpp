#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int escolhaJogador,escolhaComputador;
    char jogarNovamente;

    srand(time(0));
    do{
        cout << "===================Pedra, Papel e Tesoura==================================="<<endl;
        cout << "Por favor faca a sua escolha: "<<endl;
        cout << "1 - PEDRA"<<endl;
        cout << "2 - PAPEL"<<endl;
        cout << "3 - TESOURA"<<endl;
        cin >> escolhaJogador;

        escolhaComputador = rand()%3 +1;

        cout <<"Voce escolheu: ";
        switch(escolhaJogador){
            case 1:
                cout << "PEDRA"<<endl;break;
            case 2:
                cout << "PAPEL"<<endl;break;
            case 3:
                cout << "TESOURA"<<endl;break;
        }

        cout << "Computador escolheu: ";
        switch (escolhaComputador)
        {
        case 1:
           cout <<"PEDRA"<<endl;break;
        case 2:
            cout << "PAPEL"<<endl;break;
        case 3:
            cout << "TESOURA"<<endl;break;
        
        default:
            cout << "Jogada invalida!"<<endl;
            continue;
        }

        if(escolhaJogador == escolhaComputador){
            cout << "Empate"<<endl;
        }else if((escolhaJogador == 1 && escolhaComputador == 3)||
                (escolhaJogador == 2 && escolhaComputador == 1)||
                (escolhaJogador == 3 && escolhaComputador == 2)){
                    cout << "Voce venceu parabens!"<<endl;
                }else{
                    cout << "Computador venceu !"<<endl;
                }

        cout << "Vai continuar jogado? (s/n): "<<endl;
        cin >> jogarNovamente;
        
    }while(jogarNovamente == 's' || jogarNovamente =='S');

    cout << "Obrigado por jogar ate mais!"<<endl;

    return 0;
}