#include"Fila.h"
#include<iostream>
using namespace std;

    Fila::Fila(){
        primeiro=0;
        ultimo=0;
        estruturaFila = new tipoValor[max_itens]; 

    };

    Fila::~Fila(){
        delete [] estruturaFila; 

    };

    bool Fila::estaCheio(){
        return (ultimo-primeiro==max_itens);

    };

    bool Fila::estaVazio(){
       return(primeiro==ultimo);

    };

    void Fila::inserir(tipoValor item){
        if (estaCheio()){
            cout<<"A fila esta cheia!";
            cout<<"Nao e possivel adicionar nenhum elemento na fila!";
        }else{
            estruturaFila[ultimo%max_itens]=item;
            ultimo++;
        }

    };

    tipoValor Fila::remover(){
        if (estaVazio()){
            cout<<"A fila esta vazia!";
            cout<<"Nenhum dado na fila!";
            return 0;
        }
        
        primeiro++;            
        return estruturaFila[(primeiro-1) % max_itens];
    
    };

    void Fila::imprimir(){
    
        cout<<"Fila: [";
        for(int i=primeiro; i < ultimo; i++){
            cout<<estruturaFila[i % max_itens]<<" ";
        }
        cout<<"]\n";

    };
