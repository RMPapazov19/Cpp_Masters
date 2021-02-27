#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "|*";
	for (int i = 0; i < 15; i++)
	{
		cout << "-";
	}
	cout << "C++Masters";
	for (int i = 0; i < 15; i++)
	{
		cout << "-";
	}
	cout << "*|" << endl << endl;
	cout << "   CHOOSE TOPIC:" << endl;
	cout << "       1) History" << endl;
	cout << "       2) Food" << endl;
	cout << "       3) Animals" << endl;
	cout << "       4) Gaming" << endl;
	cout << "       5) Computers" << endl << endl;
	cout << "|*";
	for (int i = 0; i < 15; i++)
	{
		cout << "-";
	}
	cout << "C++Masters";
	for (int i = 0; i < 15; i++)
	{
		cout << "-";
	}
	cout << "*|" << endl << endl;
	cout << "CHOICE: ";
	int topic;
	cin >> topic;
}