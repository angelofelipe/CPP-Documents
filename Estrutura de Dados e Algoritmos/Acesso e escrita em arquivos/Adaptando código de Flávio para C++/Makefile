# Nome dos executáveis
EXECUTABLES = criararquivo inseredados inserirfinal lerarquivo truncararquivo

# Compilador e flags
CC = g++
CFLAGS = -Wall -Wextra -g

# Regras de compilação para cada executável
all: $(EXECUTABLES)

criararquivo: criararquivo.cpp tiposArquivo.h
	$(CC) $(CFLAGS) -o criararquivo.bin criararquivo.cpp

inseredados: inseredados.cpp tiposArquivo.h
	$(CC) $(CFLAGS) -o inseredados.bin inseredados.cpp

inserirfinal: inserirfinal.cpp tiposArquivo.h
	$(CC) $(CFLAGS) -o inserirfinal.bin inserirfinal.cpp

lerarquivo: lerarquivo.cpp tiposArquivo.h
	$(CC) $(CFLAGS) -o lerarquivo.bin lerarquivo.cpp

truncararquivo: truncararquivo.cpp tiposArquivo.h
	$(CC) $(CFLAGS) -o truncararquivo.bin truncararquivo.cpp

# Limpar os executáveis gerados
clean:
	rm -f $(addsuffix .bin, $(EXECUTABLES))
	rm dados.db

# Fazer o 'clean' automaticamente antes de recompilar
rebuild: clean all
