#include <iostream>
#include <iomanip>
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
	system("CLS");
	if (topic == 1)
	{
		cout << "CHOOSE DIFFICULTY: " << endl;
		cout << "      1) Easy" << endl;
		cout << "      2) Hard" << endl;
		cout << "Choice: ";
		int result = 0;
		int difficulty;
		cin >> difficulty;
		int counter = 0;
		string userAnswers[10];
		system("CLS");
		if (difficulty == 1)
		{
			string anwersEasyHistory[5] = { "c","d","a","Asparuh","Simeon I" };
			cout << "1.Which year has Bulgaria been created?" << endl;
			cout << "a) 300" << endl;
			cout << "b) 750" << endl;
			cout << "c) 681" << endl;
			cout << "d) 1773" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "2.When has Bulgaria signed the Treaty of San Stefano?" << endl;
			cout << "a) 4 Jun 1687" << endl;
			cout << "b) 14 Dec 1278" << endl;
			cout << "c) 17 Mar 1345" << endl;
			cout << "d) 3 Mar 1878" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "3.When was the Cyrillic alphabet created?" << endl;
			cout << "a) 24 May 855" << endl;
			cout << "b) 28 Dec 856" << endl;
			cout << "c) 11 May 865" << endl;
			cout << "d) 7 Apr 860" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "4.Which han has created Bulgaria?" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "5.Under which king made Bulgaria on three seas? " << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				if (userAnswers[i] == anwersEasyHistory[i])
				{
					result++;
				}
			}
			for (int i = 3; i < 5; i++)
			{
				if (userAnswers[i] == anwersEasyHistory[i])
				{
					result += 2;
				}
			}
			cout << "Your result: " << result << "/7";
		}
		else if (difficulty == 2)
		{
			string anwersHardHistory[5] = { "d","b","d","1876","1918" };
			cout << "1.The earliest Bulgarian revolt against the Ottoman rule took place in the early 15th century.Who were its leaders?" << endl;
			cout << "a) Markoand Uglesha" << endl;
			cout << "b) Deyanand Dobrotica" << endl;
			cout << "c) Stefanand Lucas" << endl;
			cout << "d) Konstantinand Fruzhin" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "2.Which European monarch met his death in the battle of Varna in 1444?" << endl;
			cout << "a) Mircea II of Wallachia" << endl;
			cout << "b) Wladyslaw III of Poland" << endl;
			cout << "c) Sigismund of Luxemburg" << endl;
			cout << "d) Ladislaus the Posthumous" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "3.Which Bulgarian novelist ist he author of Under the Yoke?" << endl;
			cout << "a) Petar Beron" << endl;
			cout << "b) Nayden Gerov" << endl;
			cout << "c) Vasil Aprilov" << endl;
			cout << "d) Ivan Vazov" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "4.The April Uprising took place in what year?" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "5.When did King Boris III come to power?" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				if (userAnswers[i] == anwersHardHistory[i])
				{
					result++;
				}
			}
			for (int i = 3; i < 5; i++)
			{
				if (userAnswers[i] == anwersHardHistory[i])
				{
					result += 2;
				}
			}
			cout << "Your result: " << result << "/7";
		}
	}
}