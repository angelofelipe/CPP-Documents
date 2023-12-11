**beecrowd | 1312**
## Empilhamento de Bolas
### Por Vinicius Santos Brasil
_Timelimit: 2 _
---

O canal de TV XYZ está desenvolvendo uma novo game show, onde o competidor tem que fazer algumas escolhas de modo a obter um prêmio. O jogo consiste de uma pilha triangular de bolas, cada uma delas tendo um valor inteiro, como mostrado no exemplo a seguir.

~~FOTO NO DIRETÓRIO~~

O competidor deve escolher quais bolas ele irá levar e seu prêmio é a soma dos valores destas bolas. Entretanto, o competidor pode levar uma bola apenas se ele também levar todas as bolas diretamente acima dela. Isto pode requerer levar bolas adicionais usando a mesma regra. Note que o competidor pode escolher não levar bola alguma, caso no qual o prêmio é zero.

O diretor do programa de TV está preocupado a respeito do prêmio máximo que um competidor pode obter dada uma pilha. Como ele é seu chefe e ele não sabe como responder essa questão, ele atribuiu esta tarefa a você.

# Entrada

Cada caso de teste é descrito usando várias linhas. A primeira linha contém um inteiro N representando o número de linhas da pilha (1 = N = 1000).

A i-ésima das próximas N linhas contém i inteiros B_{ij}(-10^5 ​≤ B_{ij} ≤ 10^5 e 1 ≤ j ≤ i ≤ N); o número B_{ij} é o valor da j-ésima bola na i-ésima linha da pilha (a primeira linha é a mais ao topo, e em cada linha a primeira bola é a mais a esquerda).

O último caso de teste é seguido por uma linha contendo um zero.

# Saída

Para cada caso de teste imprima uma linha com um inteiro representando o prêmio máximo que um competidor pode fazer a partir da pilha.

## Exemplo de Entrada

```
4
3
-5 3
-8 2 -8
3 9 -2 7
2
-2
1 -10
3
1
-5 3
6 -4 1
0
```

## Exemplo de Saída

```
7
0
6
```
