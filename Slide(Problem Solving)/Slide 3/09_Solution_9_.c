#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter value of three edges X Y Z :");
scanf("%d%d%d",&x,&y,&z);
  if (x+y>z && x+z>y && y+z>x){
    printf("it's a Triangle");
}
  else printf("Not a Triangle");

return 0 ;
}