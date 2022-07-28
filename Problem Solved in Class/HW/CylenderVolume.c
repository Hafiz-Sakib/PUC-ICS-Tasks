#include <stdio.h>
#include <math.h>
float main() {

     float height,radius,pi,volume;
     pi = acos(-1);
     printf("Enter the Height & Radius of the Cylinder : \n");
     scanf("%f%f",&height,&radius);
     volume = pi * radius * radius * height;

     printf("The Volume of The Cylinder is : %f",volume);

return 0;
}