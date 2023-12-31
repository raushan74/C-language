       //@Author:  RAUSHAN RAJ
       //EmailId: raushanraj7156@gmail.com
       //Batch Code:CPLUS06SL1

/* C program to find diameter, circumference and 
      area of circle using functions */

#include <stdio.h>
#include <math.h> 


/* Function declaration */
double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);


int main() 
{
    float radius, dia, circ, area;
    
    /* Input radius of circle from user */
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    dia  = getDiameter(radius);       // Call getDiameter function
    circ = getCircumference(radius);  // Call getCircumference function
    area = getArea(radius);           // Call getArea function
    
    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);
    
    return 0;
}
   /**
 * Calculate diameter of circle whose radius is given
 */
double getDiameter(double radius) 
{
    return (2 * radius);
}


/**
 * Calculate circumference of circle whose radius is given
 */
double getCircumference(double radius) 
{
    return (2 *3.14 * radius); 
}


/**
 * Find area of circle whose radius is given
 */
double getArea(double radius)
{
    return (3.14 * radius * radius); 
}
