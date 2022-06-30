#include <stdio.h>
#include <math.h>
int main() {

        float radius,pi,volume;
        pi = 2*asin(1.0);
        
        printf("Enter the Radius of the Sphere : \n");
        scanf("%f",&radius);
        volume = (4.0/3) * pi * radius * radius * radius;

        printf("The Volume of the Sphere is :%0.2f",volume);
        
        return 0;
}