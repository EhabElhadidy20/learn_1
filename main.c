/*
************************************
** @file :  main.c
** @name :  EhabMagdyElhadidy
** @brief:
************************************
*/

#include <stdio.h>
#include <stdlib.h>
unsigned int Number , sum , counter;
int main()
{
    printf ("Enter the Number  : ");
    scanf ("%i", &Number );
    if (Number<=0)
    {
        printf ("Error !!");
    }
    else
    {
        for (counter =1 ; counter <=Number ; counter ++)
    {
        sum+= 2*counter-1;
        printf ("%i \t",2*counter-1);
    }
    printf ("\n summing = %i", sum);
    }

    return 0;
}
