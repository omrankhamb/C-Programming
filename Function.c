#include <stdio.h>
#include <math.h>

float square_area(float side);
float circle_area(float radius);
float rectangle_area(float a, float b);

int main()
{
    float side = 4;
    

    printf("Area is: %f\n", square_area(side));
    return 0;
}

float square_area(float side) {
    return side * side;
}

float circle_area(float radius) {
    return 3.14 * radius * radius;
}

float rectangle_area(float a, float b) {
    return a * b;
}