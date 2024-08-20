/*read the n elements and print the elements*/

#include<stdio.h>
int main()
{
        int i,a[10];
	int size;
	printf("\n enter the size of the array :");
	scanf("%d",&size);
	printf("\n enter %d elements",size);
        for (i=0;i<size;i++)
        {
                scanf("%d",&a[i]);
        }
        for (i=0;i<size;i++)
        {
                printf("%d\n",a[i]);
        }
        return 0;
}

