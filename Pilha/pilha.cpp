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
    
    void pilha::inserir(TipoValor intem){
        
        if (estaCheia()){
            system("cls");
            cout<<"A pilha esta cheia!\n";
            cout<<"Nao e possivel inserir esse numero na pilha!\n";
        }else{
            estrutura[tamanho]=intem;
            tamanho++;
        }
    };
    TipoValor pilha::remover(){
        
        if(estaVazia()){
            system("cls");
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
            system("cls");
            cout<<"A pilha esta vazia!\n";
            cout<<"Nao e possivel imprimir a pilha!\n";
        }else{
            system("cls");
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
    

