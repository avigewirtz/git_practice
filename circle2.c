/*--------------------------------------------------------------------*/
/* circle2.c                                                          */
/* Author: Bob Dondero                                                */
/*--------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

/* Read a circle's radius from stdin, and compute and write its
   diameter and circumference to stdout.  Return 0 if successful. */

int main(void)
{
   int iRadius;
   int iDiam;
   double dCircum;
   const double PI = 3.14159;  /* or (4.0 * atan(1.0)) */

   printf("Enter the circle's radius:\n");
   if (scanf("%d", &iRadius) != 1)
   {
      fprintf(stderr, "Error: Not a number\n");
      exit(EXIT_FAILURE);
   }

   iDiam = 2 * iRadius;
   dCircum = PI * (double)iDiam;

   printf("A circle with radius %d has diameter %d\n",
          iRadius, iDiam);
   printf("and circumference %f.\n", dCircum);
   return 0;
}
