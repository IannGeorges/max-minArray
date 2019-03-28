#include <stdio.h>
#include <math.h>
int main(){
//declare array
int array[100];
//declare variables
int k, a, b, max, min, i;
//makes the rand() function change everytime the program is ran 
srand(time(NULL));
//for loop to populate the array with random numbers
for (k = 0;k<100;k++)
	{
		i = rand() % 101;
		array[k]=i;
		printf("%d\n", array[k]);
	}
//initialize max & min
max=array[0];
min=array[0];
//for loop to determine the largest value in the array
for (a=0;a<100;a++)
{
	if(array[a]>max)
	max=array[a];
}
//for loop to determine the smallest value in the array
for (b=0;b<100;b++)
{
	if(array[b]<min)
	min=array[b];
}
printf("\nMax = %d \nMin = %d", max, min);
return 0;
}

