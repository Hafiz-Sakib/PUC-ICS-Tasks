#include <stdio.h>
int main() {
int a,b,c;
   printf("Enter the Values of Traingle edges Length\n");
   scanf("%d%d%d",&a,&b,&c);
      if((a + b > c) && (a + c > b) && (b + c > a)){
          printf("This Traingle is Valid");
        }
      else{
        printf("This Traingle is Invalid");
       }

getch();
return 0;
}