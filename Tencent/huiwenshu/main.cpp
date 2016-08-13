#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
#define MAXSIZE 1000
int  tmp[MAXSIZE][MAXSIZE];
int GetRemoveNum(string  &str1);

int main()
{
	string  str1;
	while(cin>>str1)
	{
		if( str1.length() <= 1000)
			cout << GetRemoveNum(str1);
		else
			cout << "overflow ! \n";
	}
	return 0;
}

int GetRemoveNum(string  &str1)
{
	string str2(str1);
	reverse(str2.begin(), str2.end());
	int len = str2.size();
	memset( tmp, 0, sizeof(tmp));

	for(int i = 1; i < len; i++)
	{
		for(int j = 1; j < len; j++)
		{
			if(str1[i] == str2[j])
				tmp[i+1][j+1] = tmp[i][j]+1;
			else
				tmp[i+1][j+1] = max(tmp[i+1][j], tmp[i][j+1]);
		}
	}
	return len - tmp[len][len];
}
