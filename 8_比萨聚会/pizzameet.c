#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int people;
    int pizza;
    int chushu;
    int yushu;

    printf("How many people?"); scanf("%d",&people);
    printf("How many pizzas do you have?"); scanf("%d",&pizza);
    printf("%d people with %d pizzas\n",people,pizza);

    if(people / pizza == 0){
        chushu = people / pizza;
        printf("Each person get %d pieces of pizza\n",chushu);
        printf("There are 0 leftover pieces.");
    } else {
        chushu = people / pizza;
        yushu = people % pizza;
        printf("Each person get %d pieces of pizza\n",chushu);
        printf("There are %d leftover pieces.",yushu);
    }

    return 0;
}