# Criador-de-estrutura-de-dados
 Projeto que fornece orientação para o entendimento de estruturas de dados.

 Criei um sistema básico que o usuário pode escolher qual estrutura de dados ele gostaria de usar.
aprincipio ele esta com três estruturas de dados basicas, `Pilha, Fila e Pilha dinamica`.
## Como copilar?

primeiro tem que baixar esse exe na internet `mingw-get-setup` em seguida execute ele e marque essas duas opções: 

````
mingw32-base
````
````
mingw32-gcc-g++
````

Em seguida abra as configurações do computador e acesse o a opção `Proteção de sistema` ele vai abrir uma janela que contem as propriedades do sistema, nessa janela selecione o `Avançado` e depois em `Variavel de ambiente` clique nos de `Variáveis de usuário conta e Variáveis do  sistema` `Path` e aperte o botão `Editar` e coloque o caminho da pasta onde estão os arquivos que você selecionou anteriormente peque o caminho da pasta `bin`.

Depois use o comando :

````
g++ main.cpp Pilha\mainPilha.cpp Pilha\pilha.cpp Fila\mainFila.cpp Fila\fila.cpp PilhaDinamica\mainPilhaDinamica.cpp PilhaDinamica\pilhaDinamica.cpp -o nomeDoExecutavel.exe
````