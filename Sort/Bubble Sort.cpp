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

void bubbleSort(int a[], int n);
void print(int a[], int n);

int main()
{
	int a[11] = {2, 32, 1, 3, 13,24, 9, 35, 40, 55, 65};
	
	bubbleSort(a, 11);
	print(a,11);

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

void bubbleSort(int a[], int n)
{
	for (int j = 0; i < length; i++)
	{

	}
}








