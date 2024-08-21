/*1-n even numbers print */
#include<stdio.h>
int main()
{
        int i,n,a[100];
        int k=0;
        printf("enter the number",n);
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                if(i%2==0)
                {
                        a[k]=i;
                        k++;
                }
        }
        for (i=0;i<k;i++)
        {
                printf("%3d",a[i]);
        }
        printf("\n");
        return 0;
}

