/*
************************************************************************************************************************
*                                                      SORT
*											Straight Lnsertion Sort
*
* File    : Shell's Sort.c
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
void ShellInsertSort(int a[], int n, int dk);
void ShellSort(int a[], int n);

int main()
{
	int a[9] = {91,39,29,18,39,13,98,72,1};

	ShellSort(a, 9);
	print(a, 9, 9);

	system("pause");
	return 0;
}


//打印函数

void print(int a[], int n, int i )
{
	cout << i << ":";
	for(int j = 0; j < n; j++)
	{
		cout << a[j]<< " ";
 	}
	cout<<endl;
}


//shell 排序内部的直接插入排序

void ShellInsertSort(int a[], int n, int dk)
{
	for (int i = dk; i < n ; i++)
	{
		if (a[i] < a[i-dk])
		{
			int j = i - dk;
			int x = a[i];
			a[i] = a[i-dk];
			while(x < a[j])
			{
				a[j+dk] = a[j];
				j -= dk;
			}
			a[j+dk] = x;
		}
		print(a, n, i);
	}
}

//shell 排序

void ShellSort(int a[], int n)
{
	int dk = n / 2;
	while (dk >= 1)
	{
		ShellInsertSort(a, n, dk);
		dk = dk / 2;
	}
}








