
/*
************************************************************************************************************************
*                                                      SORT
*											Straight Lnsertion Sort
*
* File    : Straight Lnsertion Sort.c
* By      : Henry Morgen
* Version : V1.00
*
* LICENSING TERMS:
* ---------------
*           Straight Lnsertion Sort is provided in  source  form  for   short-term evaluation,
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

void print(int a[], int n, int i );
void InsertSort1(int a[], int n);

int main0()
{
	int a[9] = {9, 1, 3, 7, 3, 4, 6, 5, 8};

	InsertSort1(a, 9);
	print(a,9,9);

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

//直接插入排序

void InsertSort1(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[i-1])
		{
			int j = i - 1;			//如果第I个元素比第i-1个元素大，直接插入，小则移动有序表插入
			int x = a[i];			//
			a[i] = a[i-1];
			while (x < a[j])
			{
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = x;
		}
		print(a, n, i);
	}
}












