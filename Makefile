# Makefile para compilar o analisador

# Compilador C
CC = gcc

# Flags do compilador
CFLAGS = -Wall -g

# Ficheiros fonte do Bison e Flex
BISON_SRC = sintatico.y
FLEX_SRC = lexico.l

# Ficheiros fonte C
C_SRCS = symbol_table_scoped.c func_table.c semantica.c

# Nome do executável final
TARGET = compilador

# Ficheiros gerados
BISON_GEN_C = y.tab.c
BISON_GEN_H = y.tab.h
FLEX_GEN_C = lex.yy.c

# Alvo principal
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(BISON_GEN_C) $(FLEX_GEN_C) $(C_SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(BISON_GEN_C) $(FLEX_GEN_C) $(C_SRCS) -lfl

# Regra para gerar o parser do Bison
$(BISON_GEN_C) $(BISON_GEN_H): $(BISON_SRC)
	bison -d -y $(BISON_SRC)

# Regra para gerar o scanner do Flex
$(FLEX_GEN_C): $(FLEX_SRC) $(BISON_GEN_H)
	flex $(FLEX_SRC)

# Regra para limpar os ficheiros gerados
clean:
	rm -f $(TARGET) $(BISON_GEN_C) $(BISON_GEN_H) $(FLEX_GEN_C) *.o

.PHONY: all clean