#include <stdio.h>
#include <stdlib.h>

int hookme(void) {
	return 2;
}

int main(void) {
	fprintf(stderr, "b start\n");
	system("./c");
	fprintf(stderr, "b hookme(): %d\n", hookme());
	fprintf(stderr, "b finish\n");
	return 0;
}
