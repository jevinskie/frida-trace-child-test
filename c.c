#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int hookme(void) {
	return 3;
}

extern void d(void);
extern void e(void);

int main(void) {
	fprintf(stderr, "c start\n");
	fprintf(stderr, "c hookme(): %d\n", hookme());
	fprintf(stderr, "c d()\n");
	d();
	fprintf(stderr, "c e()\n");
	e();
	fprintf(stderr, "c finish\n");
	return 0;
}
