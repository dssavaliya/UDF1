#include<stdio.h>
#include<conio.h>
division()
{
	int a;
	printf("Enter Value:-");
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
	{
		printf("%d is divisibal of 3 & 5",a);
	}
	else
	{
		printf("%d is not divisibal of 3 & 5",a);
	}
	
}
main()
{
	division();
}







