/*--------------------------------------------------------------------*/
/* circle1.c                                                          */
/* Author: Bob Dondero                                                */
/*--------------------------------------------------------------------*/

#include <stdio.h>

/*--------------------------------------------------------------------*/

/* Read a circle's radius from stdin, and compute and write its
   diameter and circumference to stdout.  Return 0. */

int main(void)
{
   int iRadius;
   int iDiam;
   double dCircum;

   printf("Enter the circle's radius:\n");
   scanf("%d", &iRadius);

   iDiam = 2 * iRadius;
   dCircum = 3.14159 * (double)iDiam;

   printf("A circle with radius %d has diameter %d\n",
          iRadius, iDiam);
   printf("and circumference %f.\n", dCircum);
   return 0;
}
