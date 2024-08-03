typedef int tipoValor;

struct No{
    tipoValor valor;
    No* proximo;
    
};

class pilhaDinamica{
    private:
        No* NoTopo;
    public:
        pilhaDinamica();
        ~pilhaDinamica();
        bool estaVazio();
        bool estaCheio();
        void inserir(tipoValor item);
        tipoValor remover();
        void imprimir();
  
};

