#include <stdio.h>
int main() {

int n,r,sum = 0;
printf("Enter a 4 Digit Value \n");
scanf("%d",&n);

r = n % 10;
sum = sum + r ;
n = n / 10;

r = n % 10;
sum = sum + r;
n = n / 10;


r = n % 10;
sum = sum + r;
n = n / 10;

sum = sum + n;

printf("Sum of Your 4 Digit is %d\n",sum);

return 0;
}