#include <stdio.h>

main(int argc, char* argv[])
{
	int i;
	if (argc == 3) {
		i = atoi(argv[1]) + atoi(argv[2]);
		printf("%s + %s = %d\n", argv[1], argv[2], i);
	}
	else {
		printf("2�̐������w�肵�Ď��s");
	}
}