#include <stdio.h>
#include <math.h>
int main() {

      float a,b,c,s,area;
      printf("Enter the Values of three edges: \n");
      scanf("%f%f%f",&a,&b,&c);

      s = (a + b + c) / 2 ;
      area = sqrt(s*(s-a)*(s-b)*(s-c));

      printf("Area of The Triangle is : %.3f",area); 

return 0;
}