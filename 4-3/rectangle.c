/**********************************************************************
 * Write a program to compute the area and perimeter of a rectangle
 * with a width of three inches and a height of five inches.
 **********************************************************************/

#include <stdio.h>

int width;      /* Width of rectangle in inches */
int height;     /* Height of rectangle in inches */

int area;       /* Area of rectange in inches */
/*int perameter;  /* Perameter of rectange in inches */



int main() {
    width = 3;
    height = 5;

    area = width * height;
    printf("area = %d square inches\n", area);

    return (0);
}