# Nome dos executáveis
EXECUTABLES = criararquivo inseredados inserirfinal lerarquivo truncararquivo

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Regras de compilação para cada executável
all: $(EXECUTABLES)

criararquivo: criararquivo.c tiposArquivo.h
	$(CC) $(CFLAGS) -o criararquivo.bin criararquivo.c

inseredados: inseredados.c tiposArquivo.h
	$(CC) $(CFLAGS) -o inseredados.bin inseredados.c

inserirfinal: inserirfinal.c tiposArquivo.h
	$(CC) $(CFLAGS) -o inserirfinal.bin inserirfinal.c

lerarquivo: lerarquivo.c tiposArquivo.h
	$(CC) $(CFLAGS) -o lerarquivo.bin lerarquivo.c

truncararquivo: truncararquivo.c tiposArquivo.h
	$(CC) $(CFLAGS) -o truncararquivo.bin truncararquivo.c

# Limpar os executáveis gerados
clean:
	rm -f $(addsuffix .bin, $(EXECUTABLES))
	rm dados

# Fazer o 'clean' automaticamente antes de recompilar
rebuild: clean all
