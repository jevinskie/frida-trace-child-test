#include <stdio.h>

static void duplicate(void) {
	fprintf(stderr, "duplicate d\n");
}

void d() {
	fprintf(stderr, "d begin\n");
	duplicate();
	fprintf(stderr, "d end\n");
}
