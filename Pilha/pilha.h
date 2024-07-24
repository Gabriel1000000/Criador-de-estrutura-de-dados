/*Esse arquivo declara a interface da classe "pilha". 
A implementação da interface está no arquivo "pilha.cpp"*/
typedef int TipoValor;
// O "typedef" permite selecionar uma tipo de de variavel e cria um metodo para ela, dessa forma se quiser mundar o tipo da pilha para "float" basta alterar nesse metodo"typedef int TipoValor" tirando o "int" pelo tipo que desejar e assim será passado para o resto da pilha.
const int max_itens =100;
class pilha{
    private:
    int tamanho;
    // Esse mostrará o tamanho da pilha.
    TipoValor* estrutura;
    // verificar o seria o int*

    public:
    pilha();//Construtor
    ~pilha();//Desconstutor
    bool estaCheia();
    bool estaVazia();
    void inserir(TipoValor intem);
    TipoValor remover();
    void imprimir();
    int qualTamnho();

};