#include <stdio.h>
#include <math.h>

int main () {
   int delta_as, delta_g; 
   int i;

   printf("Number of sides n | Number of monochromatic triangles (our forumla) | Goodman's formula \n");
   for (i=6;i<=100;i++) {
       
       /* Computing number of monochromatic triangles using our formula */
       delta_as = ceil(( i*ceil(((i-1)*(i-3))/4.0) -(i*(i-1)*(i-2) /6 )) / 2.0) ; 
       
       /* Computing number of monochromatic triangles using Goodman's formuula */
       delta_g = i*(i-1)*(i-2)/6 - floor(i/2.0*floor((i-1)*(i-1)/4.0));
       
       printf("%3d               |            %6d                               |                 %6d  \n", i, delta_as, delta_g);
       
       /* If there is a difference between our formula and Goodman's flag this */
       if (delta_as-delta_g > 0.0)
         printf("there is a difference for n= %d", i);
   }
   
   return 0;
}
