#include <stdio.h>
int main() {

int a,b,temporaryVariable;

       printf("Enter Two Numbers For Swap! \n");
       scanf("%d%d",&a,&b);
       printf("Before Swap First Variable  a = %d & Second Variable  b = %d \n",a,b);
       temporaryVariable = a ;
       a = b;
       b = temporaryVariable;

       printf("After Swap First Variable  a = %d & Second Variable b = %d \n",a,b);

return 0;
}



//Swap TWo Variables Withou Using Third Variables