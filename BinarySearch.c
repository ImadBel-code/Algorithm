#include <stdio.h>

int Search(int arr[], int Target, int size)	
{

	int Start = 0;		//Start index
	int End = size-1;	//End

	for (int i=0;i <= size;i++)
	{
		int mid = (End+Start)/2;		//the mid of the the array

		if (arr[mid] == Target)		//if the Target is in the mid 
		{	
			return mid;
		}
		else if (Target < arr[mid])	//if the target less then the mid we update the End for be the mid
		{
			End = mid;
		}
		else			//if the target geater then the mid we update the Start for be the mid
		{
			Start = mid+1;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 45, 134}; 		//must be sorted
	int size = sizeof(arr)/sizeof(arr[0]);  	//the size of the array

	int result = Search(arr, 2, size);

	if (result != -1)
	{
		printf("Founded in index :%i\n", result);
	}
	else
	{
		printf("not found\n");
	}
}