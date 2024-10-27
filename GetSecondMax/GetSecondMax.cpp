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
			
			else if (SecondMax < Numbers[i])
			{
				SecondMax = Numbers[i];
			}
		}
		return SecondMax;
	
	
}
bool Test()
{
	const int size = 10;
	bool flag = true;
	int arr[size];
	for (int i = 0; i <= 1000;i++)
	{
		for (int j = 0; j < size;j++)
		{
			arr[j] = rand() % 100;
		}
		int SecondMax = GetSecondMax(arr, size);
		sort(arr, arr + size);
		int CorrectAnswer = arr[size - 2];
		flag &= (CorrectAnswer == SecondMax);
	}
	return flag;
}
int main()
{
	const int size = 5;
	int numbers[size] = { 9,8,7,6,5 };
	int SecondMax=GetSecondMax(numbers, size);
	cout << SecondMax<<'\n';
	bool TestAnswer = Test();
	cout <<TestAnswer ;

}

