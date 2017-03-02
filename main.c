#include <stdio.h>
#include <stdlib.h>

long int  percent(int srok, long int summa) {
    long int dohod = 0;
    if (srok < 31) dohod = summa - (summa * 10) / 100;
    if ((srok > 30) && (srok < 121)) {
        if (summa > 100000) dohod = summa + (summa * 3) / 100; 
        else dohod = summa + (summa * 2) / 100;
    }     
    if ((srok > 120) && (srok < 241)) {
        if (summa > 100000) dohod = summa + (summa * 8) / 100;
	else dohod = summa + (summa * 6) / 100;
    }
    if (srok > 242) { 
        if (summa > 100000)
            dohod = summa + (summa * 15) / 100; 
	else dohod = summa + (summa * 12) / 100; 
    }
    return dohod;
}

int check(int srok, long int summa) {   
    int k = 0;
    if ((srok < 0) || (srok > 365) || (summa < 10000))  k = 0;
    else k = 1;							  
    return k;
}

int main() {
    int srok = 0, l = 0;
    long int summa = 0;
    printf("enter the term of the deposit\n");
    scanf("%d", &srok);
    printf("enter the deposit bag\n");
    scanf("%ld", &summa);
    l = check(srok, summa);
    if (l == 1) printf("your income %ld\n", percent(srok, summa));
    else printf("incorrect data entry\n");
    return 0;
}
