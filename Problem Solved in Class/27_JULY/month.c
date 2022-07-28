#include <stdio.h>
int main() {
    int month;
printf("Enter a month Numer \n");
scanf("%d",month);
if  (month == 1 || month == 3 || month == 5
        || month == 7 || month == 8 || month == 10
        || month == 12)
        {
           printf("It Contain 31 days\n");
        }
else if (month == 2) {
        printf("It Contains 28/29 Days.");
        }
else{
    printf("It Contain 30 days\n");
}

return 0;
}
