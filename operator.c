#include <stdio.h>

int main ()
{
    /*
    char ch = 'z';

    if(ch >= 'a' && ch <= 'z') {
        printf("%c is lower case\n", ch);
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("%c is upper case\n", ch);
    }
    */
/*
    int num = 50;

    if(num >= 1 || num <= 10) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    */
/*
    char ch = 'f';

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is vowel\n", ch);
    } else {
        printf("%c is consonat\n", ch);
    }
    */
/*
    int n = 1;

    while(n <= 100) {
        n++;

        if(n % 2 == 0) {
            continue;
        }
        printf("%d\n", n);
    }
    */
/*
    int n, i;

    printf("Inter your first number: ");
    scanf("%d", &n);
    printf("Inter your second number: ");
    scanf("%d", &i);

    while(i <= 10) {
        printf("%d X %d = %d\n", n, i, n*i);
        i = i + 1;
    }
    */

    /*
    int m, n;
    int i;

    n = 5;
    m = 0;
    for(i = 1; i <= 10; i = i+1) {
        m = m + n;
        printf("%d X %d = %d\n", n, i, m);
    }
    */

    int n, i;

    for(n = 1; n <= 20; n = n + 1) {
        for(i = 1; i <= 10; i = i + 1) {
            printf("%d X %d = %d\n", n, i, n*i );
        }
        printf("\n");
    }

   return 0;
}
