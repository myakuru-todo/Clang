#include <stdio.h>

main()
{
	int c;
	char  dumy[256];
	c = getchar();
	while (c != EOF) {/*�f�[�^�̓��͊��� ctrl + z*/
		putchar(c);
		putchar('\n');
			gets (dumy); /*���̓o�b�t�@�[�̃N���A*/
		c = getchar();
	}
	
}