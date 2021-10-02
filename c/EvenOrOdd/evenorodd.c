#include <stdio.h>
int main()
{
	int n;
    printf("Enter an integer: ");
	scanf("%d", &n);
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
        
	return 0;
}
