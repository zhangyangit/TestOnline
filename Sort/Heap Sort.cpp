/*
************************************************************************************************************************
*                                                      SORT
*											Straight Lnsertion Sort
*
* File    : Simple Selection Sort.c
* By      : Henry Morgen
* Version : V1.00
*
* LICENSING TERMS:
* ---------------
*           Shell's Sort is provided in  source  form  for   short-term evaluation,
*			for educational use or for peaceful research.  If you plan or intend to use it in 
*			a commercial application/product then, you need to contact me to properly license 
*			for its use in your application/product.  We provide ALL the source code for your
*			convenience and to help you experience it.   The fact that the source is provided 
*			does NOT mean that you can use it commercially without paying a licensing fee.
*
*           Knowledge of the source code may NOT be used to develop a similar product.
*
*           Please help us continue to provide the embedded community with the finest software available.
*           Your honesty is greatly appreciated.
*
*           You can contact us at www.micrium.com, or by phone at 13296573114
************************************************************************************************************************
*/

#include <iostream>

using namespace std;

void print(int a[], int n);
void HeapAdjust(int h[], int s, int length);
void BuildingHeap(int h[], int length);
void HeapSort(int h[], int length);

int main()
{
	int h[23] = {22, 1, 3, 23, 92, 18, 4, 218, 12, 84, 90, 22, 32, 3, 21, 31, 232, 132, 13, 214, 5,132,323};

	HeapSort(h, 23);
	print(h, 23);

	system("pause");
	return 0;
}

//´òÓ¡º¯Êý

void print(int a[], int n )
{
	//cout << i << ":";
	for(int j = 0; j < n; j++)
	{
		cout << a[j]<< " ";
 	}
	cout<<endl;
}


void HeapAdjust(int h[], int s, int length)
{
	int tmp = h[s];
	int child = 2*s+1;
	while (child < length)
	{
		if (child+1 < length && h[child] < h[child+1])
		{
			++child;
		}
		if (h[s]<h[child])
		{
			h[s] = h[child];
			s = child;
			child = 2*s+1;
		}
		else
		{
			break;
		}
		h[s] = tmp;
	}
	print(h, length);
}


void BuildingHeap(int h[], int length)
{
	for (int i = (length+1)/2; i >= 0; i--)
	{
		HeapAdjust(h, i, length);
	}
}


void HeapSort(int h[], int length)
{
	BuildingHeap(h, length);
	for (int i = length-1; i > 0; i--)
	{
		int tmp = h[i];
		h[i] = h[0];
		h[0] = tmp;
		HeapAdjust(h,0,i);
	}
}
















