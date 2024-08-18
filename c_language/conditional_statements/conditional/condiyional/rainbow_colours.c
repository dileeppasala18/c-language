/* to check rainbow colours */
#include<stdio.h>
int main()
{
	int rainbow;
	printf("the rainbow colours are 1-voielt,2-indigo,3-blue,4-green,5-yellow,6-orange,7-red\n");
	printf("choose your colour to print:",rainbow);
	scanf("%d",&rainbow);
	switch (rainbow)
	{
		case 1:
			printf("voielt\n");
			break;
		case 2:
			printf("indigo\n");
			break;
		case 3:
			printf("blue\n");
			break;
		case 4:
			printf("green\n");
			break;
		case 5:
			printf("yellow\n");
			break;
		case 6:
			printf("orange\n");
			break;
		case 7:
			printf("red\n");
			break;
	default:
			printf("Invalid input! Please enter a colour code  1-voielt,2-indigo,3-blue,4-green,5-yellow,6-orange,7-red");
                        break;
    }
	return 0;
}

