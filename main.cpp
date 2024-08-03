
#include<iostream>
using namespace std;

void mainPilha();
void mainFila();
void mainPilhaDinamica();

void menuPrincipal(){
    int op;

    cout<<"-------------------------Bem-vindo ao gerador de pilha-----------------------------\n";

    do
    {
        cout<<"\n***************************************************************************\n";
        cout<<"                              | Atencao!|\n";
        cout<<"   Digite apenas uma das opcoes abaxio!\n";
        cout<<"   Caso contrario sera solicitado novamente a escolha das opcoes...\n";
        cout<<"   Porem se digitar caracteres o progama sera finalizado!\n";
        cout<<"***************************************************************************\n";
        cout<<"\n Menu de navegacao: \n";
        cout<<"digite 0 para sair do sitemas!\n";
        cout<<"digite 1 para ir ao criador de pilha!\n";
        cout<<"digite 2 para ir ao criador de fila!\n";
        cout<<"digite 3 para ir ao criador de pilhas dinamicas!\n";
        cin>>op;
        switch (op)
        {
        case 1:
            system("cls");
            mainPilha();
            break;
        case 2:
            system("cls");
            mainFila();
            break;
        case 3:
            system("cls");
            mainPilhaDinamica();
            break;
        default:
            cout << "saindo...\n";
            exit(0);
            break;
        }
    } while (op!=0);
    
};

int main(){
    menuPrincipal();
    return 0;
};