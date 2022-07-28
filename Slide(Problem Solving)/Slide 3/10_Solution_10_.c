#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter value of three edges X Y Z :");
scanf("%d%d%d",&x,&y,&z);
  if ((x*x)+(y*y)==(z*z) || (x*x)+(z*z)==(y*y) || (y*y)+(z*z)==(x*x))
       /*c square = a square + b square */
        printf("It's a right triangle");
  else if (x+y>z && x+z>y && y+z>x) /* c < a + b */
    printf("it's a Triangle");
  else printf("Not a Triangle");


return 0 ;
}