#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int length;
    int width;
    int area;
    printf("What is the length of the room in feet?"); scanf("%d",&length);
    printf("What is the width of the room in feet?"); scanf("%d",&width);
    printf("You entered dimensions of %d feet by %d feet\n",length,width);
    printf("The area is \n");
    printf("%d square meters\n",(length * width));

    area = sqrt((length * width) *(length * width) * 0.09290304);
    printf("%.3f square meters",area);

    return 0;
}