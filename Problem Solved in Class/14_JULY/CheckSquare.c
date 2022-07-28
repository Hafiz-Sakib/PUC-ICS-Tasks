#include <stdio.h>
#include <math.h>
int main() {
       int x,a;
       printf("Enter a Number for identify SquareRoot\n");
       scanf("%d",&x);
       a=(int) sqrt(x);
       if(x == a*a) {
          printf("\n %d is a square number",x);
       }
       else {
          printf("%d is  not a square number\n",x);
       }
getch();
}