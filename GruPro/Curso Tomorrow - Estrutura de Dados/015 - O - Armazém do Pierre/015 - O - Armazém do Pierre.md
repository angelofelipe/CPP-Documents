# Armazém do Pierre
Pierre é um aldeão, que mora na Vila Pelicanos, dono e gerente do famoso
Armazém do Pierre. Pierre pode ser encontrado gerenciando seu armazém
todos os dias entre 9:00 e 17:00 (exceto quarta-feira quando a loja está fechada).
A clientela está sempre ávida pelas sementes sazonais e por isso, ele precisa
implementar uma forma manter controle sobre seus atendimentos. Visto que os
moradores mais velhos da vila têm prioridade no atendimento e sabendo
que Pierre vai atender ‘X’ pessoas por dia com as sementes sazonais, organize a fila de atendimento durante ‘D’ dias.

# Entrada
A primeira linha contém um inteiro ‘D’ (1 <= ‘D’ <= 50), representando o número de dias de atendimento e um inteiro ‘X’ (1 <= ‘X’ <= 10), representando o número de pessoas que serão atendidas por dia. Para cada dia de atendimento, na primeira linha da entrada será dado um inteiro ‘N’ (1 <= ‘N’ <= 1000) que indica o número de moradores que serão inseridos na fila de atendimento. Nas próximas ‘N’ linhas serão dados os nomes e a idade de cada um dos moradores que aguardam para serem atendidos. Lembre-se que os moradores não perdem a vez na fila se não forem atendidos em dado dia, porém, continuam respeitando as regras de distribuição. Os moradores tem idades diferentes.

# Saída
Você deverá imprimir a lista de nomes por ordem de atendimento, um por linha.

# Entrada 1
2 2
4 
George 80
Lewis 55
Vincent 6
Abigail 19
2
Jorge 70
Maria 30

# Saída 1
George
Lewis
Jorge
Maria

# Entrada 2
2 1
3
Clint 35
Marnie 42
Alex 21
2
Jone 48
Andre 71

# Saída 2
Marnie
Andre