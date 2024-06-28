#include <stdio.h>

main()
{
	char s[19];
	int i;

	printf("ƒ‚ƒWƒŒƒc‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s);

	for (i=0;s[i] != '\0';i++) 
	{
		s[i] = s[i] + 1;
		
	}
	printf("ˆÃ†‰»•¶š—ñ%s‚ğ•\¦", s);
}