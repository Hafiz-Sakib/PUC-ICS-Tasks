/* Write a C program to input the electricity unit charge and calculate the total
        electricity bill according to the given condition :

        For the first 50 units Bdt.0.50 /
    unit
        For the next 100 units Bdt.0.75 /
    unit
        For the next 100 units Bdt.1.20 /
    unit
        For units above 250 Bdt.1.50 /
    unit
        An additional surcharge of 20 %
    is added to the bill.How to calculate electricity bills using if else in C programming.Program to
        find electricity bill using if else in C.Logic to find net electricity bill in C
            program.
 */

#include <stdio.h>

int main()
{
    int unit;
    float amount, total_amount, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    /* Calculate electricity bill according to given conditions */
    if (unit <= 50)
    {
        amount = unit * 0.50;
    }
    else if (unit <= 150)
    {
        amount = 25 + ((unit - 50) * 0.75);
    }
    else if (unit <= 250)
    {
        amount = 100 + ((unit - 150) * 1.20);
    }
    else
    {
        amount = 220 + ((unit - 250) * 1.50);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amount * 0.20;
    total_amount = amount + sur_charge;

    printf("Electricity Bill = BDT. %.2f", total_amount);

    return 0;
}

/* For 100 Unit :
amount = {25 + (50 * 0.75)}
total amount = amount + {amount * 20%} */