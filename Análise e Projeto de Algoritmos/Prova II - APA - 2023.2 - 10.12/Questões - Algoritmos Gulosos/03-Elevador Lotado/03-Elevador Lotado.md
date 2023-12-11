**beecrowd | 1611**
# Elevador Lotado
## Por Bruno Adami, Universidade de São Paulo - São Carlos BR Brazil
_Timelimit: 1_
---

Em um prédio de N andares temos um elevador com capacidade para até C pessoas. Os andares são numerados de 0 a N-1. Há um grupo de M pessoas querendo usar o elevador, todas no andar 0. Cada uma deseja ir a um andar específico. Você deve decidir a ordem em que as pessoas devem usar o elevador de forma que a energia utilizada seja a menor possível.

Inicialmente um grupo de tamanho no máximo C pessoas decidido por você entra no elevador no andar 0. Depois você deve decidir a ordem em que os andares são visitados. Logicamente, os andares de todas as pessoas dentro do elevador devem ser visitados. O custo de energia do elevador é apenas no deslocamento, ou seja, a cada andar em que ele sobe ou desce você gasta uma unidade de energia. O processo é repetido até que não se tenha mais pessoas no andar 0. No fim o elevador deve voltar ao andar 0.

Dado o tamanho do prédio, a capacidade do elevador e os andares das pessoas que querem utilizar o elevador, monte a melhor estratégia que minimize a energia utilizada. Imprima o valor desta energia.

# Entrada

Na primeira linha você terá um inteiro **T** (**T** = 100) indicando o número de casos de teste.

Na primeira linha de cada caso teremos os números inteiros **N** (1 ≤ **N** ≤ 104), **C** (1 ≤ **C** ≤ **M**) e **M** (1 ≤ **M** ≤ 1000* ou 1 ≤ **M** ≤ 5*104**). Na próxima linha teremos **M** inteiros indicando os andares a serem visitados pelas pessoas. Os inteiros indicando os andares vão de 1 até **N**-1, inclusive.

*Ocorre em aproximadamente 90% dos casos de teste;

**Ocorre nos demais casos de teste.
# Saída

Para cada caso, imprima em uma única linha o valor da mínima energia necessária.


## Exemplo de Entrada

```
3
10 1 3
1 2 3
100 2 4
10 10 10 3
100 2 5
100 1 100 1 100
```

## Exemplo de Saída

```
12
40
402
```