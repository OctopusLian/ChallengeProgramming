#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char age;
    char retire;
    int numage;
    int numretire;
    numage = age - '0';
    numretire = retire - '0';

    printf("What is your current age?"); scanf("%d",&numage);
    printf("At waht age would you like to retire?"); scanf("%d",numretire);

    printf("You have %d years left unitl you can retire.",(numretire - numage));
    printf("It's 2015,so you can retire in %d",(2015 + numretire - numage) );

    return 0;
}