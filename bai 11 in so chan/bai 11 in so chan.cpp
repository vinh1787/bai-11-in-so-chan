// bai 11 in so chan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "in so chan ";
	int so, tongsochan = 0;
	cout << "nhap so "; cin >> so;
	for (int i = 1; i <= so; i++)
	{
		if (i % 2 == 0) {
			cout << i << " ";
			tongsochan += i;
		}
	}
	for (int i = 2; i <= so; i +=2 );
	{
		cout << 1 << " ";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
