#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the numbers:");
	scanf("%d %d",&a,&b);
	printf("Values before swapping:-\n");
	printf("a=%d \n",a);
	printf("b=%d \n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Values after swapping:-\n");
    printf("a=%d \n",a);
	printf("b=%d \n",b);
	return 0;	
}
