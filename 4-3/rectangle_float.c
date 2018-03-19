/**********************************************************************
 * Write a program to compute the area and perimeter of a rectangle
 * with a width of 6.8 inches and a length of 2.3 inches.
 **********************************************************************/

#include <stdio.h>

/* float version*/

float width;      /* Width of rectangle in inches */
float length;     /* length of rectangle in inches */

float area;       /* Area of rectange in inches */
float parameter;  /* Parameter of rectange in inches */



int main() {
    width = 6.8;
    length = 2.8;

    area = width * length;
    printf("area = %f square inches\n", area);

    parameter = (width * 2.0) + (length * 2.0);
    printf("parameter = %f inches\n", parameter); 

    return (0);
}