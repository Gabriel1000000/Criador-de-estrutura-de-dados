#include"Fila.h"
#include<iostream>
using namespace std;

void menuPrincipal();

void mainFila(){
    Fila fila1;
    int opcao;
    tipoValor valor;

    cout<<"-------------------------Bem-vindo ao gerador de fila!-------------------------";
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
        cout<<"Digite 1 para inserir um elemento!\n";
        cout<<"Digite 2 para remover um elemento!\n";
        cout<<"Digite 3 para imprimir a pilha!\n";
        cout<<"Digite 4 para voltar para o menu do sitema!\n";
        cin>>opcao;

        switch (opcao)
        {
        case 0:
            cout<<"Saindo...";
            exit(0);
            break;
        case 1:
            cout<<"Qual o elemento deve ser inserido na fila?\n";
            cin>>valor;
            system("cls");
            fila1.inserir(valor);
            break;
        case 2:
            system("cls");
            valor=fila1.remover();
            cout<<"Elemento removido:"<<valor<<endl;
            break;
        case 3:
            system("cls");
            fila1.imprimir();
            break;
        case 4:
            system("cls");
            menuPrincipal();
            break;
        default:
            break;
        }

    } while (opcao!=0);
    
};