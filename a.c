#include <stdio.h>
#include <stdlib.h>

int hookme(void) {
	return 1;
}

int main(void) {
	fprintf(stderr, "a start\n");
	// fgetc(stdin);
	system("./b");
	fprintf(stderr, "a hookme(): %d\n", hookme());
	fprintf(stderr, "a finish\n");
	return 0;
}
