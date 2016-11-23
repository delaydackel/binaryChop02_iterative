// binaryChop02_iterative.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int chop(int target, int volume[], int left, int right) {

	int middle;
	middle = (left + right) / 2;
	while ((volume[middle] != target)&&(middle!=-1))
	{
		middle = (left + right) / 2;
		if (left>right)
		{
			middle = -1;
		}
		else if (volume[middle]>target)
		{
			right = middle - 1;
			
		}
		else
		{
			left = middle + 1;
			
		}
		cout << middle << endl;
	}
	return middle+1;
}

int main()
{
	int target = 22;
	int volume[7] = { 1, 4, 6, 7, 13, 22 ,125};
	int left = 0;
	int right;
	right = (sizeof(volume) / sizeof(*volume));
	cout << target << " was found at position " << chop(target, volume, left, right);
	cin >> target;
    return 0;
}

