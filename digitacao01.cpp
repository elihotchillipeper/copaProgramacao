#include <iostream>
using namespace std;

//Função que imprime a mensagem de escolha
void opcaoUm(){
    cout << "Você escolheu a opção 1." << endl;
}
void opcaoDois(){
    cout << "Você escolheu a opção 2." << endl;
}
void opcaoTres(){
    cout << "Você escolheu a opção 3." << endl;
}

int main(){
    int escolha;

    do{
        //Menu
        cout << "=== Menu ===" << endl;
        cout << "1. Opção 1" << endl;
        cout << "2. Opção 2" << endl;
        cout << "3. Opção 3" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> escolha;
        //switch case para as opções do menu

        switch (escolha)
        {
        case 1:
            opcaoUm();
            break;
        case 2:
            opcaoDois();
            break;
        case 3:
            opcaoTres();
            break;
        case 4:
            cout << "Programa encerrado." << endl;
            break;
        default:
            cout << "Operação inválida. Tente novamente." <<endl;
            break;
      }
    } while (escolha != 4);
    return 0;
}