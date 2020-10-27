#include <stdio.h>

int Search(int arr[], int Target, int size)	
{

	int Start = 0;		//Start index
	int End = size;	//End

	for (int i=0;i <= size;i++)
	{
		int middle = (End+Start)/2;		//the middle of the the array

		if (arr[middle] == Target)		//if the Target is in the middle 
		{
			printf("Founded index:%i\n",middle);	
			return 0;
		}
		else if (Target < arr[middle])	//if the target less then the middle we update the End for be the middle
		{
			End = middle;
		}
		else			//if the target geater then the middle we update the Start for be the middle
		{
			Start = middle;
		}
	}
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7}; 		//must be sorted
	int size = sizeof(arr)/sizeof(arr[0]);  	//the size of the array

	Search(arr, 5, size);
	return 0;
}
