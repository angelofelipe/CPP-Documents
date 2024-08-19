# Modos de abertura de arquivo em C

[![Logo C][1]]

> A função fopen em C permite abrir arquivos em diferentes modos, dependendo do que você deseja fazer com o arquivo (leitura, escrita, adição, etc.). Aqui estão todos os modos de abertura de arquivo disponíveis:

### Modos de Abertura de Arquivo com fopen

* Leitura (r):
    * "r": Abre um arquivo para leitura. O arquivo deve existir; caso contrário, a função retornará NULL.

* Escrita (w):
    * "w": Abre um arquivo para escrita. Se o arquivo já existir, seu conteúdo será apagado. Se não existir, ele será criado.

* Adição (a):
    * "a": Abre um arquivo para adição de dados no final. Se o arquivo não existir, ele será criado. A posição do ponteiro de gravação é sempre no final do arquivo.

* Leitura e Atualização (r+):
    * "r+": Abre um arquivo para leitura e escrita. O arquivo deve existir; caso contrário, a função retornará NULL. Permite ler e modificar o conteúdo.

* Escrita e Atualização (w+):
    * "w+": Abre um arquivo para leitura e escrita. Se o arquivo já existir, seu conteúdo será apagado. Se não existir, ele será criado.

* Adição e Atualização (a+):
    * "a+": Abre um arquivo para leitura e escrita. Os dados são sempre adicionados ao final. Se o arquivo não existir, ele será criado.

### Modos Binários

>Todos os modos acima também têm versões binárias, onde o arquivo é tratado como uma sequência de bytes (útil para arquivos que não são de texto, como imagens ou áudio):

* Leitura Binária (rb):
    * "rb": Abre um arquivo binário para leitura.

* Escrita Binária (wb):
    * "wb": Abre um arquivo binário para escrita.

* Adição Binária (ab):
    * "ab": Abre um arquivo binário para adição de dados no final.

* Leitura e Atualização Binária (r+b ou rb+):
    * "r+b" ou "rb+": Abre um arquivo binário para leitura e escrita.

* Escrita e Atualização Binária (w+b ou wb+):
    * "w+b" ou "wb+": Abre um arquivo binário para leitura e escrita.

* Adição e Atualização Binária (a+b ou ab+):
    * "a+b" ou "ab+": Abre um arquivo binário para leitura e escrita.

---

|   Modo            |	Descrição   |
|   :---            |   :---:       |
|   "r"             |	Leitura (arquivo deve existir) |
|   "w"	            |   Escrita (arquivo é apagado se já existir, ou criado se não existir) |
|   "a"             |	Adição (os dados são adicionados ao final do arquivo)
|   "r+"	        |   Leitura e escrita (arquivo deve existir)|
|   "w+"            |	Leitura e escrita (arquivo é apagado se já existir, ou criado se não existir)   |
|   "a+"	        |   Leitura e escrita (os dados são adicionados ao final do arquivo)    |
|   "rb"            |	Leitura binária     |
|   "wb"            |	Escrita binária     |
|   "ab"	        |   Adição binária      |
|   "r+b" ou "rb+"  |   Leitura e escrita binária   |
|   "w+b" ou "wb+"	|   Leitura e escrita binária   |
|   "a+b" ou "ab+"	|   Leitura e escrita binária   |

___

P.S.: **[```Sintaxe básica markdown```][2]**

[Voltar para o início](#modos-de-abertura-de-arquivo-em-c)

[1]: <https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg> "Logo C"
[2]: <https://markdown.net.br/sintaxe-basica/> "Markdow Tutor"
