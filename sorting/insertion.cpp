#include <iostream>

using std::endl;
using std::cout;

#define countof(arr) sizeof(arr)/sizeof(arr[0])

int main()
{
	int nData[] = {5,2,4,6,1,3};
	int nKey = 0;
	int j = 0;

	for (int i = 1; i < countof(nData); i++)
	{
		nKey = nData[i];
		
		for (j = i - 1; j >= 0 && nData[j] > nKey; j--)
		{
			nData[j + 1] = nData[j];
		}

		nData[j+1] = nKey;
	}

	cout << "result: ";

	for (int i = 0; i < countof(nData); i++)
	{
		cout << nData[i] << " ";
	}
	cout << endl;

	return 0; 
}
