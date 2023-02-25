//file name F04//
//project Focus 4//
//2023-02-17//
// by lehar// 
//discription: Getting integers from the user and determining which is the lowest by calling modifyArrayValues function.//
#include <stdio.h>

int getNum();
void modifyArrayValues(int arr[], int size);

int main(void)
{
	int array[10], f = 0, i = 0, k = 0, c = 0;//initialising variables//
	printf("Enter any 10 integers: \n");

	// calling the function to modify array values//
	modifyArrayValues(array, 10);

	for (i = 0; i <= 9; i++)
	{
		if (array[i] <= array[f])
		{
			k = array[i];
			c = i;
			f = i;
		}
	}

	printf("The smallest number is %d at index %d\n", b, c);//printing the output//
	return 0;
}

#pragma warning(disable: 4996) // required by Visual Studio
int getNum(void)
{
	/* the array is 121 bytes in size; we'll see in a later lecture how we can
	improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: brace this function consistent with your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}

void modifyArrayValues(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = getNum();
	}
}