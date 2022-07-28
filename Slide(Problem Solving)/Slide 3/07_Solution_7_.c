#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter Numbers X Y Z :");
scanf("%d%d%d",&x,&y,&z);
  if (x<y && x<z){
    printf("%d is the smallest one",x);
} 
  else if (y<z && y<x) 
    printf("%d is the smallest one",y);
  
  else printf("%d is the smallest one",z);

return 0 ;
}