//jogo da forca
#include <iostream> 
//#include <stdlib.h>
using namespace std;
int main(){
    int chances = 6, acertos = 0, qLetras = 0, qLetras2 = 0;
    char letra, palavra[50], palavratraco[50];
    bool verdade = false;

    cin >> palavra;
    for(int i = 0; palavra[i] != '\0'; i++){
        qLetras++;
    }
    system("clear");
    for(int i = 0; i <= 49; i++){
        if(palavra[i]=='\0'){
            break;
        }
        palavratraco[i] = '#';
    }
    while(chances > 0){
        cout << "Chances: " << chances << endl << "Acertos: " << acertos << endl <<"Palavra: " << palavratraco << endl << "Digite uma letra: ";
        cout << qLetras << " " << qLetras2 << endl;
        verdade = false;
        cin >> letra;
        for(int i = 0; i <= 49; i++){
            if(palavratraco[i]==letra){
                cout << "você já digitou essa letra tente novamente." << endl;
                verdade = true;
                for(int c = 0; c <= 1000000000; c++){}
                break;
            }
            if(palavra[i]==letra){
                palavratraco[i]= letra;
                acertos++;
                verdade = true;
            }
        }
        if(!verdade){
            chances--;
        }else{
            verdade = false;
        }
        system("clear");
        qLetras2 = 0;
        for(int i = 0; palavratraco[i]!= '\0' && palavratraco[i]!='#'; i++){
            qLetras2++;
        }
        if(qLetras == qLetras2){
            cout << "Parabéns você ganhou!!! \n \n";
            break;
        }
    }
    if(chances == 0){
        cout << "Você perdeu, mas tente novamente!" << endl;
    }


    return 0;
}