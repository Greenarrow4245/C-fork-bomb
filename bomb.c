#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {

	while (true) {fork();
	printf ("hello world\n");}
	return 0;
}
