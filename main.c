#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int math;
    int count = 1;
    printf("Your number: ");
    int input;
    scanf("%d", &input);
    int size = input;
    while(size != 1)
    {
        math = input % size;
        if(math == 0)
        {
	    count += 1;
        };
        size--;
    }
    if((count > 2) || (count == 1)) {
	printf("Not a prime number\n");
    } else if(count <= 2)
    {
        printf("Prime number\n");
    }
    return 0;
}
