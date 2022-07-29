/**
 * C program to calculate profit or loss
 */

/* Logic to find profit or loss
In primary mathematics classes, you all have learned about profit and loss. If cost price is greater than selling price then there is a loss otherwise profit.

Formula to calculate profit and loss
Profit = S.P - C.P (Where S.P is Selling Price and C.P is Cost Price)
Loss = C.P - S.P

After quick recap of profit and loss let us code solution for the program */

#include <stdio.h>

int main()
{
    int cp, sp, amt;

    /* Input cost price and selling price of a product */
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        /* Calculate Profit */
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if (cp > sp)
    {
        /* Calculate Loss */
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No Profit No Loss.");
    }

    return 0;
}