//This code is based on C++11
#include <iostream>
#include <array>

int main()
{
	std::array<int, 6> myArray = {5, 2, 4, 6, 1, 3};
	std::array<int, 6> myArray2 = {31, 42, 59, 26, 41, 58};

	//Increasing Order
	for (int i = 1; i < myArray.size(); i++)
	{
		int key = myArray[i];
		int j = i - 1;
		while (j > -1 && myArray[j] > key)
		{
			myArray[j + 1] = myArray[j];
			j--;
		}
		myArray[j+1] = key;
	}

	//Decreasing Order
	for (int i = 1; i < myArray.size(); i++)
	{
		int key = myArray2[i];
		int j = i - 1;
		while (j > -1 && myArray2[j] < key)
		{
			myArray2[j + 1] = myArray2[j];
			j--;
		}
		myArray2[j+1] = key;
	}

	std::cout << "Increaseing Order " << std::endl;
	for (auto i : myArray)
		std::cout << i << std::endl;
	std::cout << "Decreaseing Order " << std::endl;
	for (auto i : myArray2)
		std::cout << i << std::endl;
	return 0;
}
