#include "pilha.h"
#include <string.h>
#include <iostream>
using namespace std;

    
    pilha::pilha(){
        tamanho=0;
        estrutura = new TipoValor;
    };//Construtor
    
    pilha::~pilha(){
        delete [] estrutura;
    };//Desconstutor
    
    bool pilha::estaCheia(){
        
        return (tamanho==max_itens);
    };
    
    bool pilha::estaVazia(){
        
        return (tamanho==0);
    };
    
    void pilha::inserir(TipoValor item){
        
        if (estaCheia()){
            cout<<"A pilha esta cheia!\n";
            cout<<"Nao e possivel inserir esse numero na pilha!\n";
        }else{
            estrutura[tamanho]=item;
            tamanho++;
        }
    };
    TipoValor pilha::remover(){
        
        if(estaVazia()){
            cout<<"A pilha esta vazia!\n";
            cout<<"Nao e possivel remover nenhum numero!\n";
            // caso queira que o porgama pare quando estiver vazio ao tentar remover um elemento basta usar o "throw".
            return 0;
        }
            tamanho--;
            return estrutura[tamanho];
        
    };
    
    void pilha::imprimir(){
        if(estaVazia()){
            cout<<"A pilha esta vazia!\n";
            cout<<"Nao e possivel imprimir a pilha!\n";
        }else{
            cout << "Pilha: \n";
            for (int i=tamanho-1; i>=0; i--) {
                /*Para imprimir a pilha de modo que o elemento do topo seja o último que foi inserido, você precisa percorrer a pilha de trás para frente. Em vez de começar do índice 0, comece do índice tamanho - 1 e vá até 0.*/
                cout<<"|"<<estrutura[i]<<"|\n";
            }
        }
    };
    
    int pilha::qualTamnho(){
        return tamanho;
    };
    
    void pilha::introducao(){
        cout<<"\n-------------------------Introducao a estrutura pilha-------------------------\n";
        cout<<"Essa estrututa e chamada de pilha!\n";
        cout<<"As estruturas pilha no ingles ela conhecida como 'stack'.\n";
        cout<<"E uma estrutura de dados que assim como um array, e similar a uma lista.\n";
        cout<<"A estrutura pilha segue um paradigma:\n";
        cout<<"O 'LIFO' que vem do ingles 'Last in, first out'.\n";
        cout<<"Traduzindo 'Ultimo a entrar, primeiro a sair'.";
        cout<<"\n------------------------------------------------------------------------------\n";

    };

