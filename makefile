CC := gcc
CFLAGS := -Wall -Werror

# Source files
OWN_PROGRAMS_SRC := $(wildcard own_programs/src/*.c)
C_BOOK_SRC := $(wildcard c_book/src/*.c)

# Object files
OWN_PROGRAMS_OBJ := $(patsubst own_programs/src/%.c,own_programs/bin/%,$(OWN_PROGRAMS_SRC))
C_BOOK_OBJ := $(patsubst c_book/src/%.c,c_book/bin/%,$(C_BOOK_SRC))

# Default target
all: $(OWN_PROGRAMS_OBJ) $(C_BOOK_OBJ)

# Compile own_programs .c files to executables
own_programs/bin/%: own_programs/src/%.c
	@mkdir -p own_programs/bin
	$(CC) $(CFLAGS) $< -o $@

# Compile c_book .c files to executables
c_book/bin/%: c_book/src/%.c
	@mkdir -p c_book/bin
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f own_programs/bin/* c_book/bin/*

.PHONY: all clean
