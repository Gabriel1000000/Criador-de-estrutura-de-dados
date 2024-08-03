#include"pilhaDinamica.h"
#include<csetjmp>//NULL
#include<iostream>
using namespace std;

pilhaDinamica::pilhaDinamica(){
    NoTopo=NULL;
};

pilhaDinamica::~pilhaDinamica(){
    No* NoTemp;
    while (NoTopo!=NULL){
        NoTemp=NoTopo;
        NoTopo=NoTopo->proximo;
        delete NoTemp;
    }
    
};

void pilhaDinamica::inserir(tipoValor item){
    if (estaCheio()){
        cout<<"A pilha esta cheia!";
    }else{
        No* NoNovo = new No;
        NoNovo->valor=item;
        NoNovo->proximo=NoTopo;
        NoTopo=NoNovo;
    }
};

bool pilhaDinamica::estaCheio(){
       
    No* NoNovo;
    try{
        NoNovo = new No;
        delete NoNovo;
        return false;
    }
    catch(bad_alloc exception){
        return true;
    }
    
};

bool pilhaDinamica::estaVazio(){
    return (NoTopo==NULL);
};

tipoValor pilhaDinamica::remover(){
    if(estaVazio()){
        cout<<"A pilha esta vazia!\n";
        cout<<"Nao ha elemento na pilha!\n";
        return 0;
    }
    No* NoTemp;
    NoTemp = NoTopo;
    tipoValor item = NoTopo->valor;
    NoTopo = NoTopo->proximo;
    delete NoTemp;
    return item;
};

void pilhaDinamica::imprimir(){
    No* NoTemp=NoTopo;
    cout<<"Pilha:";
    while (NoTemp!=NULL){
        cout<<"|"<<NoTemp->valor<<"|\n";
        NoTemp=NoTemp->proximo;
    }
    cout<<endl;
    
};