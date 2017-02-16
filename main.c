#include <stdio.h>
#include <stdlib.h>
void check(int srok, long int summa)
{   
    if ((srok < 0) || (srok > 365) || (summa < 10000)) printf("incorrect data entry");
	return;
}
int main() {
        int srok = 0;
		long int summa = 0;
		printf("enter the term of the deposit\n");
	    scanf("%d", & srok);
        printf("enter the deposit bag\n");
	    scanf("%d", & summa);
		check(srok, summa);
	    return 0;
}
