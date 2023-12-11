**beecrowd | 1396**
## Hoje tem Prova da Cris!
### Por Wanderley Guimarães, IME-USP Brasil
_Timelimit: 1_
---



A Profa. Cristina é muito exigente. Sua fama de maquiavélica já é conhecida fora da universidade e ela até gosta disso... Mas, parece que agora ela exagerou... Na última prova de sua disciplina, a professora exigiu que os alunos formassem fila indiana para entrar na sala de aula. Eles formaram. Quando eles iam entrar, ela gritou: "Mas, vocês não estão em ordem lexicográfica crescente!!!???"

Os alunos revoltados formaram uma comissão e foram conversar com a professora dizendo que aquilo já era demais. Para não parecerem intransigentes eles disseram que permitiriam no máximo um número k de trocas de posição entre pessoas consecutivas na fila. A professora gostou da idéia, e colocou como um problema extra da prova.

Dada uma sequência de nomes e um inteiro k, devolver a menor sequência (em ordem lexicográfica) que pode ser obtida a partir da original com no máximo k trocas de elementos vizinhos. Sua tarefa é resolver este exercício para os alunos da Profa. Cristina a fim de que eles consigam entrar na sala e começar a prova.

# Entrada

A entrada é composta de diversas instâncias. Cada instância começa com dois inteiros **n** e **k**, onde 1 ≤ **n** ≤ 100 e 0 ≤ **k** ≤ **n**, indicando a quantidade nomes e a quantidade máxima de trocas, respectivamente. A próxima linha contém uma sequência de **n** nomes. Cada nome possui tamanho máximo de 20 caracteres, e letras de '_a_' a '_z_'.

O programa deve parar de processar a entrada quando **n** = **k** = 0.

# Saída

Para cada instância, você deverá imprimir um identificador "_Instancia **c**_", onde **c** é o número da instância atual. Na linha seguinte você deve imprimir a lista de nomes resultante do processo. Após cada nome, seu programa deve imprimir um espaço em branco, inclusive após o último nome (por exemplo, na saída do primeiro caso de teste abaixo: wanderley**b**thadeu**b**chegado**b**, onde **b** representa um espaço em branco. Após cada instância, seu programa deve imprimir uma linha em branco, inclusive após a última.

## Exemplo de Entrada

```
3 0
wanderley thadeu chegado
3 1
wanderley thadeu chegado
3 2
wanderley thadeu chegado
3 3
wanderley thadeu chegado
0 0
```

## Exemplo de Saída

```
Instancia 1
wanderley thadeu chegado

Instancia 2
thadeu wanderley chegado

Instancia 3
chegado wanderley thadeu

Instancia 4
chegado thadeu wanderley
```