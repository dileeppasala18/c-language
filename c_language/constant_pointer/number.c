#include <stdio.h>

union Number 
{
    int i;
    char c;
};

int main() 
{
    union Number n;
    
	
    n.i = 65; // Ascci value of A is 65
    printf("Interpreted as int: %d\n", n.i);
    printf("Interpreted as float: %c\n", n.c);

    return 0;
}

