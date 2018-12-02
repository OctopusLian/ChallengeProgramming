#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int length;
    int width;
    int paint;
    int area;
    int gallon;

    area = length * width;
    if (area / 350 == 0){
        gallon = area / 350;
        pritnf("You will need to purchase %d gallons of paint to cover %d square feet.",gallon,area);
    } else{
        gallon = (area / 350) + 1;
        pritnf("You will need to purchase %d gallons of paint to cover %d square feet.",gallon,area);
    }

    return 0;
}