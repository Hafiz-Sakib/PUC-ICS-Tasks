#include<stdio.h>
int main (){
int x,y;

//printf("Enter Two Numbers For Calculation\n");

scanf("%d%d",&x,&y);

//ans = x+y;

printf("%d + %d = %d\n",x,y,x+y);
printf("%d - %d = %d\n",x,y,x-y);
printf("%d * %d = %d\n",x,y,x*y);
printf("%d / %d = %d\n",x,y,x/y);
printf("%d %% %d = %d\n",x,y,x%y);

return 0;
}
