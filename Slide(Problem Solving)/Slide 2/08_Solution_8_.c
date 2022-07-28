#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter X : ");
scanf("%d",&x);
printf("Enter Y : ");
scanf("%d",&y);
z = x%y;
printf("value of %d modulo %d = %d \n",x,y,z);
return 0 ;
}