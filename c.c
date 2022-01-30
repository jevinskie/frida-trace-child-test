#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int hookme(void) {
	return 3;
}

int main(void) {
	fprintf(stderr, "c start\n");
	fprintf(stderr, "c hookme(): %d\n", hookme());
	fprintf(stderr, "c finish\n");
	return 0;
}
