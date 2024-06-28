#include<stdio.h>
#include <stdio.h>
#include <string.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile pdat[5]={{"ataoka",{2000,10,3},"A"},
	                       {"itaoka",{2000,10,3},"Ab"}, 
		                   {"ptaoka",{2000,2,3},"A"},
		                   {"qtaoka",{2000,10,3},"A"},
						    {"gtaoka",{2000,2,3},"A"}
	};
	struct profile* p = pdat;
	int i;
	for (i = 0; i < 5; i++) 
	{
		if (p->birth.tuki == 2) {
			printf("%s--", p->name);
			printf("%d”N02dŒŽ%02d“ú¶‚Ü‚ê", p->birth.nen,
				p->birth.tuki, p->birth.hi);
			printf("ŒŒ‰tŒ^--%s\n", p->blood);
		}
		p++;
	}

		                    
}
   
   