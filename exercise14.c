#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14 // defining the value of pi in the program.

// declaring a function to find euclidean distace.
// giving user inputted values as arguements and also giving function pointer pointing to areaofthecircle function as an arguement.

int EuclideanDistance(int x1, int x2, int y1, int y2, float (*fptr)(float))
{
    float num1, num2, edis;
    // calculating euclidean distance according to the formula.
    num1 = pow((x2 - x1), 2);
    num2 = pow((y2 - y1), 2);
    edis = sqrt(num1 + num2);

    // passing euclidean distance to a function.

    fptr(edis);
}

// function to calculate the area of the circle.

float AreaofTheCircle(float a)
{

    printf("Area of the Circle is = %f\n", pi * a * a);
}

int main()
{
    // declaring 4 variables to store the user input values.
    int x1, x2, y1, y2;

    printf("Enter the x1 :");
    scanf("%d", &x1);
    printf("Enter the x2 :");
    scanf("%d", &x2);
    printf("Enter the y1 :");
    scanf("%d", &y1);
    printf("Enter the y2 :");
    scanf("%d", &y2);

    // passing the values to the function.

    EuclideanDistance(x1, x2, y1, y2, AreaofTheCircle);

    return 0;
}
