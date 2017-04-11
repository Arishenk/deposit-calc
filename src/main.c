#include "deposit.h"

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
