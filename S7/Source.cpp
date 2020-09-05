#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float area(float x, float y)
{
	float area;
	if (x >= 0 && y >= 0)
	{
		area = x * y * 0.5;
		printf("%.3f", area);
	}
	else
	{
		printf("Error"); 
	}
	return 0;
}
int main()
{
	float x, y;
	printf("Enter base length and height respectively: ");
	scanf("%f %f", &x, &y);
	area(x, y);
	return 0;
}