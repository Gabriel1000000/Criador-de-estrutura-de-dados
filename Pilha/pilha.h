/*Esse arquivo declara a interface da classe "pilha". 
A implementação da interface está no arquivo "pilha.cpp"*/
// O "typedef" permite selecionar uma tipo de de variavel e cria um metodo para ela, dessa forma se quiser mundar o tipo da pilha para "float" basta alterar nesse metodo"typedef int TipoValor" tirando o "int" pelo tipo que desejar e assim será passado para o resto da pilha.
typedef int TipoValor;
// Define o tamnho maximo da pilha.
const int max_itens = 10;
class pilha{
    private:
    // Esse mostrará o tamanho da pilha.
    int tamanho;
    // Criando um ponteiro que ao char na função "pilha()'Construtor' " se tornará uma estrutura do tipo pilha.
    TipoValor* estrutura;

    public:
    // Cria a estrutura pilha.
    pilha();//Construtor
    // Destroi a estrutura pilha.
    ~pilha();//Desconstutor
    // verifica se a pilha está cheia.
    bool estaCheia();
    // Verifica se a pilha está vazia.
    bool estaVazia();
    // Insere um  item na pilha.
    void inserir(TipoValor item);
    // Remove os itens da pilha.
    TipoValor remover();
    // Imprime a pilha na tela.
    void imprimir();
    // Imprime o tanho da pilha.
    int qualTamnho();
    // Explica sobre a estrutura.
    void introducao();

};