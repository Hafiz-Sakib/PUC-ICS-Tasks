#include<stdio.h>
#include<math.h>
int main()
{
int n,x;
float z;
printf("Enter The Number : ");
scanf("%d",&n);
z = sqrt((double)n); //Type casting
x = z;
if (x == z){
    printf("%d is a Sqaure Number",n);
} else printf("%d is not a Sqaure Number",n); 


return 0 ;
}