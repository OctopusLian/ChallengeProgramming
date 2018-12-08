#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int P;  //本金
    float r;  //年利率
    int t;  //投资年限
    float profit = 0;  //利润
    float worth = 0;  //本金+利润
    int n;  //每年计算利息的次数
    float A;  //到期总额

    printf("Waht is the principal:"); scanf("%d",&P);
    printf("Waht is the rate of interest:"); scanf("%f",&r);
    printf("Waht is the number of years:"); scanf("%d",&t);
    printf("Enter the number of years:"); scanf("%d",&t);

    worth = (1 + r * t) * P;
    
    printf("After %d years at %f,the investment will be worth $%f\n",t,r,worth);
}