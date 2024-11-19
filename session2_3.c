#include <stdio.h>
#include<math.h>
long long a,b,c,d,e;
double f;
int main()
{
    scanf("%lld%lld", &a, &b);
    c=a+b;
    d=a-b;
    e=a*b;
    f= (double) a/b;
    printf("Tong, hieu, tich, thuong cua 2 so vua nhap la %lld %lld %lld %.2lf", c, d, e, f);
}