/*check prime or not prime*/

#include<stdio.h>
int main()
{
        int f,n,i,r;
        f=0;
        printf("enter the number");
        scanf("%d",&n);
        i=1;
        while(i<=n)
        {
                r=n%i;
                if (r ==0)
                {
                        f++;
                }
                i++;
	}
	if (f==2)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is not a prime",n);
	}
	return 0;
}

