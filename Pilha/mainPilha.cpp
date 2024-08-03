#include "pilha.h"
#include <iostream>
using namespace std;

void menuPrincipal();

void mainPilha(){

    pilha Pilha1;
    TipoValor valor;
    int opcao;
    system("cls");
    cout<<"-------------------------Bem-vindo ao gerador de pilha-----------------------------\n";

    do
    {
        cout<<"\n***************************************************************************\n";
        cout<<"                              | Atencao!|\n";
        cout<<"   Digite apenas uma das opcoes abaxio!\n";
        cout<<"   Caso contrario sera solicitado novamente a escolha das opcoes...\n";
        cout<<"   Porem se digitar caracteres o progama sera finalizado!\n";
        cout<<"***************************************************************************\n";
        cout<<"\n Menu de navegacao! \n";
        cout<<"Digite 0 para sair! \n";
        cout<<"Digite 1 para ver a introducao da estrutura pilha! \n";
        cout<<"Digite 2 para inserir um elemento!\n";
        cout<<"Digite 3 para remover um elemento!\n";
        cout<<"Digite 4 para imprimir a pilha!\n";
        cout<<"Digite 5 para ver o tamanho da pilha!\n";
        cout<<"Digite 6 para volta ao menu do sitema!\n";
        cin>>opcao;
              
        switch (opcao){
        case 0:
            cout << "saindo...\n";
            exit(0);
            break;
        case 1:
            system("cls");
            Pilha1.introducao();
            break;
        case 2:
            cout<<"Qual o elemento deve ser inserido na pilha?\n";
            cin>>valor;
            system("cls");
            Pilha1.inserir(valor);
            break;
        case 3:
            system("cls");
            valor=Pilha1.remover();
            cout<<"Elemento removido:"<<valor<<endl;
            break;
        case 4:
            system("cls");
            Pilha1.imprimir();
            break;
        case 5:
            system("cls");
            valor=Pilha1.qualTamnho();
            cout<<"O tamanho da pilha: "<<valor<<endl;
            break;
        case 6:
            cout << "Voltando ao menu principal...\n";
            system("cls");
            menuPrincipal();
            break;
        default:
            system("cls");
            cout<<"inseriu um valor inapropriado!\n";
            break;
        }
        
    } while (opcao!=0);

};