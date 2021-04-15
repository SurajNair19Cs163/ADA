#include <stdio.h>

int main()
{
    printf("Enter 2 numbers");
    int x;int y;scanf("%d",&x);scanf("%d",&y);
    int g=gcd(x,y);printf("Gcd of 2 numbers %d",g);
    return 0;
}

void gcd(int a,int b)
{while(a!=b)
 {
     if(a>b){a=a-b;}
     else b=b-a;
 }return a;
}
