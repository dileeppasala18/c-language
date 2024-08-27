#include<stdio.h>
int main()
{
    int x=10,y=20;
    int const *p=&x;
    printf("%d\n",*p);
    *p=*p+100;
    p=&y;
    printf("%d",*p);
    return 0;
}
