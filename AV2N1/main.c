#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v0, v1, v2, v3, v4, par=0, imp=0, pos=0, neg=0;
    scanf("%d%d%d%d%d",&v0,&v1&v2,&v3,&v4);
    if(v0%2==0) par++; else imp++;
    if(v0 >= 0) pos++; else neg++;
    if(v1%2==0) par++; else imp++;
    if(v1 >= 0) pos++; else neg++;
    if(v2%2==0) par++; else imp++;
    if(v2 >= 0) pos++; else neg++;
    if(v3%2==0) par++; else imp++;
    if(v3 >= 0) pos++; else neg++;
    if(v4%2==0) par++; else imp++;
    if(v4 >= 0) pos++; else neg++;
    printf("%d %d %d %d", par, imp, pos, neg);
    return 0;
}
