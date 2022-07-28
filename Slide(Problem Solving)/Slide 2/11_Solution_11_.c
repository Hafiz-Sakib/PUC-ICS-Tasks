#include<stdio.h>
int main()
{
double base,height,area_of_triangle;
printf ("Enter the Base :");
scanf ("%lf",&base);
printf ("Enter the Height :");
scanf ("%lf",&height);

area_of_triangle = (1/(double)2) * base * height ;
printf ("Area og Triangle : %.2lf",area_of_triangle);

return 0 ;
}