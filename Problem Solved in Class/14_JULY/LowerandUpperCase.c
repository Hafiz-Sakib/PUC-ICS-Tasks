#include <stdio.h>
int main() {
     char letter;
     printf("Enter a Charcter\n");
     scanf("%c",&letter);
 if(letter >= 'A' && letter<= 'Z') {
    printf("Input is in UpperCase");
 }
 else if (letter >=48 && letter <=57) {
    printf("Your Inpurt is a number");
 }
 else{
    printf("Input is in LowerCase\n");
 }


 getch();
 return 0;

 
}