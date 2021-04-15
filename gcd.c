#include <stdio.h>

int main()
{   printf("Enter 2 numbers");
    int x;int y;scanf("%d",&x);scanf("%d",&y);
    gcd(x,y);
    return 0;
}

void gcd(int x,int y)
{
    int rem=x%y;
    if(x%y!=0){gcd(y,rem);}
    else{printf("GCD of 2 numbers %d",y);}
}
