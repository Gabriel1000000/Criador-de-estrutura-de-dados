#include "pilhaDinamica.h"
#include <iostream>
using namespace std;

void mainPilhaDinamica(){
    pilhaDinamica pilhadinamicaa1;
    tipoValor valor;
    int opcao;
    cout<<"-------------------------Bem-vindo ao gerador de pilha dinamica-----------------------------\n";

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
        cout<<"Digite 4 para ver o tamanho da pilha!\n";
        
        cin>>opcao;
              
        switch (opcao){
        case 0:
            cout << "saindo...\n";
            exit(0);
            break;
        case 1:
            cout<<"Qual o elemento deve ser inserido na pilha?\n";
            cin>>valor;
            system("cls");
            pilhadinamicaa1.inserir(valor);
            break;
        case 2:
            system("cls");
            valor=pilhadinamicaa1.remover();
            cout<<"Elemento removido:"<<valor<<endl;
            break;
        case 3:
            system("cls");
            pilhadinamicaa1.imprimir();
            break;
        // case 4:
        //     cout << "Voltando ao menu principal...\n";
        //     // system("cls");
        //     menuPrincipal();
        //     break;
        default:
            system("cls");
            cout<<"inseriu um valor inapropriado!\n";
            break;
        }
        
        
    } while (opcao!=0);
};