TARGETS = a b c libd.so libe.so

all: $(TARGETS)

.PHONY: clean

clean:
	rm -f $(TARGETS)

%: %.c
	clang -o $@ $< -Wall -Wextra -fpie -fPIC

c: c.c libd.so libe.so
	clang -o $@ $< -Wall -Wextra -fpie -fPIC '-Wl,-rpath,$$ORIGIN' -L. -ld -le

lib%.so: %.c
	clang -o $@ $< -Wall -Wextra -fPIC -shared
