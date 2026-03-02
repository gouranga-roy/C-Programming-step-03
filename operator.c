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
/*
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
*/
/*
    double x, y, x_plus_y, x_minus_y;

    printf("Enter the value of x + y : ");
    scanf("%lf", &x_plus_y);

    printf("Enter the value of x - y : ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("x = %0.2lf, y = %0.2lf\n", x, y );

    */

    /*
    double a1, a2, b1, b2, c1, c2, x, y;

    printf("a1 = ");
    scanf("%lf", &a1);
    printf("a2 = ");
    scanf("%lf", &a2);
    printf("b1 = ");
    scanf("%lf", &b1);
    printf("b2 = ");
    scanf("%lf", &b2);
    printf("c1 = ");
    scanf("%lf", &c1);
    printf("c2 = ");
    scanf("%lf", &c2);

    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);

    printf("x = %0.2lf, y = %0.2lf\n", x, y  );

    */
    /*
     double a1, a2, b1, b2, c1, c2, d, x, y;

    printf("a1 = ");
    scanf("%lf", &a1);
    printf("a2 = ");
    scanf("%lf", &a2);
    printf("b1 = ");
    scanf("%lf", &b1);
    printf("b2 = ");
    scanf("%lf", &b2);
    printf("c1 = ");
    scanf("%lf", &c1);
    printf("c2 = ");
    scanf("%lf", &c2);

    d = a1 * b2 - a2 * b1;

    if((int) d == 0) {
        printf("Value of X and y can not be determined. \n");
    } else {
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1);
    }

     printf("x = %0.2lf, y = %0.2lf\n", x, y  );

     */

    double loan_amount, interest_rat, number_of_years, total_amount,  monthly_amount;

    printf("Enter the loan amount: ");
    scanf("%lf", &loan_amount);
    printf("Enter the interest rate: ");
    scanf("%lf", &interest_rat);
     printf("Number of years: ");
    scanf("%lf", &number_of_years);

    total_amount = loan_amount + loan_amount * interest_rat / 100.00;
    monthly_amount = total_amount / (number_of_years * 12);

    printf("Total amount: %0.21f\n", total_amount);
    printf("Monthly amount: %0.21f\n", monthly_amount);

   return 0;
}
