
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum=0,sub=0;
    float a1,b1,sum1=0,sub1=0;

    scanf("%d%d",&a,&b);
    scanf("%f%f",&a1,&b1);

  sum=a+b;
  sub=a-b;

  sum1=a1+b1;
  sub1=a1-b1;



    printf("%d %d\n",sum,sub);
    printf("%0.1f %0.1f",sum1,sub1);



    return 0;
}

