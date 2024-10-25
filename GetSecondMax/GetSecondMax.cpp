#include <iostream>
#include<algorithm>
#include<assert.h>
using namespace std;
int GetSecondMax(int Numbers[],int Size)
{
	assert(Size >= 2);
	int SecondMax = Numbers[1];
	int Max = Numbers[0];
	if (SecondMax > Max)
		swap(SecondMax, Max);
	
		for (int i = 2;i < Size;i++)
		{
			if (Max < Numbers[i])
			{
				SecondMax = Max;
				Max = Numbers[i];
				
				
			}
			
			if (SecondMax > Max)
				swap(SecondMax, Max);
		}
		return SecondMax;
	
	
}
int main()
{
	const int size = 5;
	int numbers[size] = { 9,8,7,6,5 };
	int SecondMax=GetSecondMax(numbers, size);
	cout << SecondMax;

}

