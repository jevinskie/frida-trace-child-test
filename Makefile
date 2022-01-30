TARGETS = a b c

all: $(TARGETS)

.PHONY: clean

clean:
	rm -f $(TARGETS)

%: %.c
	clang -o $@ $< -Wall -Wextra -fpie -fPIC
