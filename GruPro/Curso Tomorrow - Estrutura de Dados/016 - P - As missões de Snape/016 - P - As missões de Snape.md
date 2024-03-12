# As missões de Snape
O professor Snape está mandando seus estudantes em missões pelos arredores de Hogwarts para adquirir experiência prática. Ele possui um livrinho que contém o registro do nível de habilidade de alguns de seus alunos da Grifinória e da Sonserina. Ele gostaria de combinar em cada missão duplas de modo que a distribuição ficasse equilibrada, juntando o aluno de maior nível da Grifinória com o de menor nível da Sonserina. A medida que os outros alunos passam a saber das missões, o interesse aumenta e pedem para Snape os colocar também nas missões. Você foi incumbido de juntar as duplas. Entrada Serão ‘N’ dias de aula, cujo inteiro ‘N’ (1 <= ‘N’ <= 500) será dado na primeira linha da entrada. A seguir, para cada dia de aula, na primeira linha serão dados três inteiros ‘G’, ‘S’ e ‘M’ (1 <= ‘G’, ‘S’, ‘M’ <= 200) informando respectivamente a quantidade de alunos da Grifinória e da Sonserina que podem ser enviados em missões, o inteiro ‘M’ que indica o número de missões e consequentemente o número de pares que você tentará formar. Nas próximas ‘G’ linhas serão informados os níveis de habilidade ‘H’ (1 <= ‘H’ <= 106) e os nomes dos ‘G’ alunos da Grifinória. Nas próximas ‘S’ linhas serão informados os níveis de habilidade ‘H’ (1 <= ‘H’ <= 106) e os nomes dos ‘S’ alunos da Sonserina. Atenção, se em dado dia de aula sobrarem alunos no livrinho, eles aguardarão o próximo dia de aula para tentar ir em missões. Se não for possível em dado dia formar duplas, simplesmente Snape cancela o restante das missões e aguarda a próxima aula para ver se aparecerem novos alunos. Não há níveis de habilidade iguais entre os alunos.

# Saída
Deverá ser impresso a cada missão, em uma única linha, os nomes dos alunos de cada dupla formada, primeiro o aluno da Grifinória e depois o da Sonserina, separados pela letra ‘e’.

# Entrada 1
2
3 2 1
10 Neville Longbottom
20 Harry Potter
15 Rony Weasley
5 Vincent Crabbe
8 Draco Malfoy
1 1 2
30 Hermione Granger
2 Gregory Goyle

# Saída 1
Harry Potter e Vincent Crabbe
Hermione Granger e Gregory Goyle
Rony Weasley e Draco Malfoy

# Entrada 2
1
2 1 3
10 Rony Weasley
20 Hermione Granger
10 Draco Malfoy

# Saída 2
Hermione Granger e Draco Malfoy