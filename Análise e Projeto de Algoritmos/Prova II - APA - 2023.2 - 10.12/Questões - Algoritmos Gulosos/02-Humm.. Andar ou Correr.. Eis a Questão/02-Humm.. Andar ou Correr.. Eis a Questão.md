**beecrowd | 1595**
# Humm.. Andar ou Correr.. Eis a Questão
## Por Bruno Adami, Universidade de São Paulo - São Carlos BR Brazil
_Timelimit: 1_
---



Você está andando por São Carlos e percebeu que há momentos que anda mais rápido ou mais devagar, tudo depende se você está subindo ou descendo algum morro.

O trajeto total feito por você tem S metros. Podemos separar o trajeto em partes de 1 metro, e na i-ésima dessas partes você anda a uma velocidade constante de Vi metros por segundo. Com essas informações e um pouco de Física básica você consegue calcular o tempo que levou até chegar no fim (tempo = distancia/velocidade).

Agora, você resolveu correr! Para não cansar muito, você pode escolher correr em apenas C das S partes do trajeto. Ao correr, sua velocidade no trajeto é somada de R metros por segundo! Assuma que sua aceleração seja instantânea. Escolhendo a melhor estratégia de corrida possível, calcule o menor tempo que se leva para chegar ao destino.

# Entrada

Na primeira linha você terá um inteiro **T** (**T** = 100) indicando o número de casos de teste.

Na primeira linha de cada caso teremos os números inteiros S (1 ≤ **S** ≤ 100* ou 1 ≤ **S** ≤ 10^5**), **C** (0 ≤ **C** ≤ **S**) e **R** (0 ≤ **R** ≤ 100). Na linha seguinte, **S** inteiros seguirão separados por espaços em branco indicando a velocidade em cada parte do percurso. Para todos os casos considere 1 ≤ **Vi** ≤ 100. Sabemos que esta velocidade é grande, mas imagine que você é primo do The Flash.

*ocorrerá em 90% dos casos;
**ocorrerá nos casos restantes.
# Saída

Imprima para cada caso o menor tempo necessário para se chegar ao fim em segundos, arredondado de duas casas decimais.


## Exemplo de Entrada

```
3
2 0 20
10 5
2 1 20
10 10
4 3 1
100 100 100 50
```

## Exemplo de Saída

```
0.30
0.13
0.05
```
