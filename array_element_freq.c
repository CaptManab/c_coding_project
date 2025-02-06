#include <stdio.h>
int main()
{
	int n, i, key, freq=0, flag=0; //flag variable works as the condition to print liability
	printf("ENTER THE RANGE: ");
	scanf("%d", &n);
	int arr[n];//declaration of array
	printf("\nENTER THE ELEMENTS IN THE ARRAY: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nELEMENTS IN THE ARRAY:\t");
	for(i=0; i<n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\nENTER THE ELEMENTS TO BE SEARCHED FOR: ");
	scanf("%d", &key);
	for(i=0; i<n; i++);
	{
		if(arr[i] == key) //checking the availability by checking the element is whether same or not
		{
			freq++;
			flag++;
		}
	}
	if(flag!=0)
	{
		printf("\nElement is present and it's frequency is: %d", freq);
	}
	else //flag==0
	{
		printf("\nElement is not present!");
	}
	return 0;
}
