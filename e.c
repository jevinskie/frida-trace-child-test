#include <stdio.h>

static void duplicate(void) {
	fprintf(stderr, "duplicate e\n");
}

void e() {
	fprintf(stderr, "e begin\n");
	duplicate();
	fprintf(stderr, "e end\n");
}
