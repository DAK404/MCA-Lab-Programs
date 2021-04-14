/*

Develop a program to read the name of a user, number of units consumed, and print the charges.

Rates are as follows:
200 Units  = Rs. 0.80/unit
+100 Units = + Rs. 0.90/unit
>300 Units = + Rs. 1/unit
Meter Charges = Rs. 100

If the total amount is greater than Rs. 400, additional surcharge of 15% is added to the total amount.

Author : Deepak Anil Kumar (https://github.com/DAK404/)
Date   : 14-April-2021

*/

#include<stdio.h>

int main()
{
    char name[100];
    double units_consumed, meter_charges=100.0, gross_charges, net_charges , total_charges;

    printf("Enter Customer Name : ");
    scanf("%s", name);
    printf("Enter Units consumed : ");
    scanf("%lf", &units_consumed);

    if(units_consumed < 0)
    {
        printf("Invalid Input.");
        return 0;
    }
    else if( units_consumed < 200 )
        gross_charges = 0.80 * units_consumed;
    else if( units_consumed > 200 && units_consumed < 300 )
        gross_charges = 0.90 * units_consumed;
    else if( units_consumed > 300 )
        gross_charges = units_consumed;
    
    printf("Customer Name  : %s\n", name);
    printf("Units Consumed : %lf\n", units_consumed);
    printf("Gross Charges  : %lf\n", gross_charges);
    printf("Meter Charges  : %lf\n", meter_charges);
    net_charges = gross_charges + meter_charges;
    printf("Net Charges    : %lf\n", net_charges);
    if( net_charges > 400 )
    {
        total_charges = ( net_charges * 0.15 ) + net_charges;
        printf("Surcharge Rate : 15%%\n");
    }
    else
        total_charges = net_charges;
    printf("Total Charges  : %lf\n", total_charges);

    return 0;
}