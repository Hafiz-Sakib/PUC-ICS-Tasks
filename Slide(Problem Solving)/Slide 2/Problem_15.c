
// Given the radius(r) of a sphere, determine its volume.
//  [N.B. Print the answer up to two decimal points.]

#include <stdio.h>
#include <math.h>
int main()
{
    float radius, volume;
    float pi = acos(-1);
    printf("Enter The Radius : \n");
    scanf("%f", &radius);

    //যেহেতু আমি ফ্লোট দিয়ে ভেরিয়েবল নিয়েছি তাই আমাকে  ৪/৩ বসালে হবেনা ,যেকোনো একটা সংখ্যার সাথে দশমিক বসাতে হবে
    volume = (4.0 / 3) * pi * radius * radius * radius;
    printf("Volume of The Sphere is : %.2f", volume);
    return 0;
}
