/* 
   This program prompts the user for the radius of the circle, 
and then calculates those mentioned. 
*/ 

#include <stdio.h>
#include <math.h>

int main(void)
{
   double radius, circumference, circleArea;
   double sqrSide, sqrPerimeter, sqrArea;
   double triSide, triPerimeter, triArea;
   
   //Enter the radius and calculate the circumference and area of the circle
   printf("Enter the radius of the circle: ");
   scanf("%lf", &radius);
   circumference = 2 * M_PI * radius;
   circleArea = M_PI * pow(radius, 2.0);
   printf("The circle circumference: %.3lf\n", circumference);
   printf("The circle area: %.3lf\n", circleArea);
   
   /*Calculate the sidelength, perimeter and area of the square in the circle 
     Pythagoras's theorem: (2r)^2 = s^2 + s^2 
                         => 4(r^2) = 2(s^2) => s = sqrt(2) * r   
   */
   sqrSide = sqrt(2) * radius;
   sqrPerimeter = 4 * sqrSide;
   sqrArea = pow(sqrSide, 2.0);
   printf("\nThe square side length: %.3lf\n", sqrSide);
   printf("The square perimeter: %.3lf\n", sqrPerimeter);
   printf("The square area: %.3lf\n", sqrArea);   
   
   //Calculate the sidelength, perimeter and area of the triangle in the circle
   triSide = 2 * radius * (sqrt(3)/2);
   triPerimeter = 3 * triSide;
   triArea = (sqrt(3)/4) * pow(triSide, 2.0);
   printf("\nThe triangle side length: %.3lf\n", triSide);
   printf("The triangle perimeter: %.3lf\n", triPerimeter);
   printf("The triangle area: %.3lf\n", triArea);      
  
   return 0;
}