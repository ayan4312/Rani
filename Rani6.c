#include <stdio.h>
double square (double num)
{
    return (num*num);
    int main () {
        int num;
        double n;
        printf("\n\nfunction;find square of any number:\n");
        printf("--------------------\n");
        printf("input any number for square :");
        scanf("%d",& num);
        n=square(num);
        printf("the square of %dis:%;2f\n",num,n);
        return 0;
    }
}
