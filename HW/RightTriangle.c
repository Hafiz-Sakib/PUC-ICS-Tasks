#include <stdio.h>
int main() {
   int a,b,c;
   printf("Enter the Value of three edges");
   scanf("%d%d%d",&a,&b,&c);

   int aSquare = a * a;
   int bSquare = b * b;
   int cSquare = c * c;
   
   if((aSquare + bSquare = cSquare) || (aSquare + cSquare = bSquare) || (bSquare + cSquare = aSquare)){
    
       printf("ok");
   }
  
   else {
    printf("none");
   }
return 0;
}