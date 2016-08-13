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

void print(int a[], int n, int i);
int  SelectMinkey(int a[], int n, int i);
void SelectSort(int a[], int n);
void SelectSort2(int a[], int n);

int main()
{
	int a[9] = {20, 1, 221, 73, 305, 2, 19, 10, 212};

	SelectSort2(a, 9);
	print(a, 9, 9);

	system("pause");
	return 0;
}


//´òÓ¡º¯Êý

void print(int a[], int n, int i )
{
	cout << i << ":";
	for(int j = 0; j < n; j++)
	{
		cout << a[j]<< " ";
 	}
	cout<<endl;
}

///

int SelectMinkey(int a[], int n, int i)
{
	int k = i;
	for (int j = i + 1; j < n; j++)
	{
		if (a[k] > a[j])
		{
			k = j;
		}
	}
	return k;
}

//

void SelectSort(int a[], int n)
{
	int key ,tmp;
	for (int i = 0; i < n; i++)
	{
		key = SelectMinkey(a, n, i);
		if (key != i)
		{
			tmp = a[i];
			a[i] = a[key];
			a[key] = tmp;
		}
		print(a ,n ,i);
	}
}

//

void SelectSort2(int a[], int n)
{
	int i, j, min, max, tmp;
	for (int i = 0; i < n/2 ; i++)
	{
		min = i;
		max = i;
		for (int j = i+1; j < n-i; j++)
		{
			if (a[j] > a[max])
			{
				max = j;
				continue;
			}
			tmp = a[n-i-1]; a[n-i-1] = a[max]; a[max] = tmp;
			if (a[j] < a[min])
			{
				min = j;
			}
			tmp = a[i]; a[i] = a[min]; a[min] = tmp;
		}
		
		
		print(a,n,i);
	}
}















