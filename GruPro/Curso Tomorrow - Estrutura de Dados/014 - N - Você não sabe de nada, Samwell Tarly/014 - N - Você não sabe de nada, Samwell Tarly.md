# Você não sabe de nada, Samwell Tarly
Samwell Tarly é um jovem candidato a meistre da Cidadela e gosta de ir à biblioteca com sua companheira Gilly, onde eles podem desfrutar do maior acervo do mundo conhecido. Ultimamente Sam tem se interessado em táticas para derrotar os caminhantes brancos. Por conta da iminente invasão, Sam precisa da ajuda de Gilly para ler a maior quantidade de textos, a fim de encontrar alguma maneira de derrotá-los. Gilly, entretanto, só conhece a língua comum de westeros.

## Tarefa
Sua missão é ajudar Gilly a traduzir os textos para a língua comum de Westeros. Dado um
dicionário e um trecho a ser traduzido, retorne o trecho na língua comum de Westeros.

## Entrada
A primeira linha da entrada terá um inteiro ‘N’ (1 <= ‘N’ <= 1000) que representa a quantidade de palavras no dicionário. Em cada uma das próximas ‘N’ linhas serão dadas duas strings, a alavra em uma língua estrangeira e a sua tradução para a língua comum. Em seguida será dado um inteiro‘M’ (1 <= ‘M’ <= 1000), que representa a quantidade de palavras a serem traduzidas. Na linha seguinte será dada uma frase com ‘M’ palavras a serem traduzidas.

## Saída
Seu programa deve deve produzir uma única linha com o texto traduzido para a língua comum. Se alguma palavra não estiver no dicionário, imprima a mesma palavra.

## Exemplos
### Entrada 1
5
iksis is
daor not
rovegrie great
zaldrizes dragon
buzdari slave
5
Kingslayer iksis a rovegrie band

### Saída 1
Kingslayer is a great band

### Entrada 2
5
iksis is
daor not
rovegrie great
zaldrizes dragon
buzdari slave
6
a zaldrizes iksis daor a buzdari

### Saída 2
a dragon is not a slave