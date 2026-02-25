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
/*
    int n, i;

    for(n = 1; n <= 20; n = n + 1) {
        for(i = 1; i <= 10; i = i + 1) {
            printf("%d X %d = %d\n", n, i, n*i );
        }
        printf("\n");
    }
*/

// 1-20 print Namota
/*
int n,i,j;
for(n = 1; n <= 20; n++) {
   j = 1;
    for(i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i , n+j);
    }

}

*/
/*
int n,i;
n = 5;
for(i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n",i, n, i*n);
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

    /*
int n,i,j;

for(n = 1; n <= 20; n++) {
   j = 0;

    for(i = 1; i <= 10; i++) {
        j = j + n;
        printf("%d X %d = %d\n", n, i , j);
    }

}
*/
/*
int a,b,c;

for(a = 1; a <= 3; a++) {
    for(b =1; b <= 3; b++) {
        for(c = 1; c <=3; c++ ) {
            printf("%d %d %d\n", a, b, c);
        }
    }
}
*/
/*
int i, n, m;

n = 2;
m = 0;

for(i = 1; i <= 10; i++) {
     m = m + n;
    printf("%d X %d = %d\n", n , i, m);
}
*/

/*
int n, i, m;

for(n = 1; n <= 20; n++) {
    m = 0;
    for(i = 1; i <= 10; i++) {
        m += n;
        printf("%d X %d = %d\n", n, i, m);
    }
    printf("\n");

    */
    /*
    int a, b, c;

    for(a = 1; a <= 3; a++) {
        for(b = 1; b <= 3; b++) {
            if(b != a) {
                for(c = 1; c <= 3; c++) {
                        if(c != b && c != a) {
                            printf("%d, %d, %d\n", a, b, c);
                        }
                }
            }
        }
    }
    */

   int a, b, c;

    for(a = 1; a <= 3; a++) {
        for(b = 1; b <= 3; b++) {
                for(c = 1; c <= 3; c++) {
                        if(b != c && c != a && a != b) {
                            printf("%d, %d, %d\n", a, b, c);
                        }
                }
        }
    }


   return 0;
}
