#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "***************************************" << endl;
    cout << "* Bem vindo ao jogo da adivinhacao *" << endl;
    cout << "***************************************" << endl;
    cout << "Escolha seu nivel de dificuldade:" << endl;
    cout << "Facil (F), Medio(M), Difil(D)" << endl;
    char dificuldade;
    cin >> dificuldade;
    int num_tentativa;

    if(dificuldade == 'F'){
        num_tentativa = 15;
        
    }
    else if(dificuldade = 'M'){
        num_tentativa = 10;

    }
    else{
         num_tentativa = 5;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    bool nao_acertou = true;
    int tentativas;
    double pontuacao = 1000;
    for(tentativas = 1; tentativas <= num_tentativa;tentativas++)
    {
        int chute;
        cout << "Tentativa: " << tentativas << endl;
        cout <<"Qual o seu chute ?"<< endl;
        cin >> chute;
        cout <<"Seu chute: "<< chute << endl;
        double pontos_perdidos = abs(chute - NUMERO_SECRETO )/2.0;
        pontuacao = pontuacao - pontos_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou){
            cout <<"Parabens voce acertou"<< endl;
            nao_acertou = false;
            break;

        }
        else if(maior){
            cout <<"Chutou muito alto"<< endl;
        }

        else {
            cout <<"Chutou muito baixo"<< endl;
        }
    }

    cout << "Fim de Jogo" << endl;
    if(nao_acertou){
        cout << "Voce perdeu ! Tente novamente" << endl;
    }
    else{
        cout << "Numero de tentativas ate acertar " << tentativas << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao foi de: " << pontuacao;

    }
    
    
}