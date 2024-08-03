/* O "typedef" permite selecionar uma tipo de de variavel e cria um metodo para ela, dessa forma se quiser mundar o tipo da fila para "float" basta alterar nesse metodo"typedef int TipoValor" tirando o "int" pelo tipo que desejar e assim será passado para o resto da fila.*/
typedef int tipoValor;
// Define o tamnho maximo da fila.
const int max_itens = 10;
class Fila {
private:
    // Essas duas variaveis irão armazena o primiero e último index da fila.
    int primeiro, ultimo;
    tipoValor* estruturaFila;
public:
    // Cria a estrutura fila.
    Fila();
    // Destroi a estrutura fila.
    ~Fila();
    // verifica se a fila está cheia.
    bool estaCheio();
    // Verifica se a fila está vazia.
    bool estaVazio();
    // Insere um  item na fila.
    void inserir(tipoValor item);
    // Remove os itens da fila.
    tipoValor remover();
    // Imprime a fila na tela.
    void imprimir();
    
};