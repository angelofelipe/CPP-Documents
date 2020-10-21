#include <iostream> 
using namespace std;
int main(){
    int valor = 0, animal = 0;
    cout << "\nEscolha uma Cor: [1] Verde, [2] Azul, [3] Vermelho. \n";
    cin >> valor;
    switch(valor){
        case 1: 
            cout << "Verde é a cor da grama! \n\n";
            break;
        case 2: 
            cout << "Azul é a cor do céu! \n\n";
            break;
        case 3: 
            cout << "Vermelho é a cor do fogo! \n\n";    
            break;
        default:
            cout << "Pelo visto você gosta de todas as cores! \n\n";
    }

    cout << "Escolha um animal: [1] Gato, [2] Leão, [3] Cachorro, [4] Lobo.";
    cin >> animal;
    switch(animal){
        case 1:
        case 2:
            cout << "Seu animal é um felino \n";
            switch(animal){
                case 1: 
                    cout << "Seu animal é doméstico \n";
                    break;
                case 2: 
                    cout << "Seu animal é selvagem \n";
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "Seu animal é um canídeo \n";
            switch(animal){
                case 3: 
                    cout << "Seu animal é doméstico \n";
                break;
                case 4: 
                cout << "Seu animal é selvagem \n";
                break;
            }
            break;
    }
}