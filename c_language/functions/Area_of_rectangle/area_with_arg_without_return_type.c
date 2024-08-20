/*function with arguments with return type*/
#include<stdio.h>
void area_of_rectangle(int l,int b)
{
        int area;
        area=l*b;
        printf("area is %d",area);
}
int main()
{
        area_of_rectangle(6,7);
        return 0;
}

