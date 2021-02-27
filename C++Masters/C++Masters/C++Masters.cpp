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
	else if (topic == 2)
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
			string anwersEasyFood[5] = { "c","a","c","Italy","Japan" };
			cout << "1.What is a tomato?" << endl;
			cout << "a) vegetable" << endl;
			cout << "b) fruit" << endl;
			cout << "c) both" << endl;
			cout << "d) nothing" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "2.How long is the shelf life of honey? " << endl;
			cout << "a) not have" << endl;
			cout << "b) 1 day" << endl;
			cout << "c) 1 week" << endl;
			cout << "d) 1 year" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "3.Which are the main ingredients of moussaka? " << endl;
			cout << "a) potatoes" << endl;
			cout << "b) minced meat" << endl;
			cout << "c) potatoesand minced meat" << endl;
			cout << "d) savory" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "4.Which country has invented the pasta?" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "5.Which country has invented the ramen?" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				if (userAnswers[i] == anwersEasyFood[i])
				{
					result++;
				}
			}
			for (int i = 3; i < 5; i++)
			{
				if (userAnswers[i] == anwersEasyFood[i])
				{
					result += 2;
				}
			}
			cout << "Your result: " << result << "/7";
		}
		else if (difficulty == 2)
		{
			string answersHardFood[5] = { "b","b","c","Switzerland","Rice" };
			cout << "1.Which flower does the spice saffron come from?" << endl;
			cout << "a) Orchid" << endl;
			cout << "b) Crocus" << endl;
			cout << "c) Nasturtium" << endl;
			cout << "d) Poppy" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "2.Which of these chocolate bars does not contain nuts in its ingredient list?" << endl;
			cout << "a) Snickers" << endl;
			cout << "b) Double Decker" << endl;
			cout << "c) Picnic" << endl;
			cout << "d) Toblerone" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "3.If you ordered nigiri from a Japanese restaurant menu, what would you be served?" << endl;
			cout << "a) A type of dumpling" << endl;
			cout << "b) A selection of sliced raw fish & seafood" << endl;
			cout << "c) A type of sushi featuring rice topped with fish or seafood" << endl;
			cout << "d) A type of sushi featuring raw fish or seafood wrapped in rice and seaweed" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "4.Gruyere is a cheese from which country?" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "5.In Indonesian and Malay cuisine what does the word ‘nasi’ refer to?" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				if (userAnswers[i] == answersHardFood[i])
				{
					result++;
				}
			}
			for (int i = 3; i < 5; i++)
			{
				if (userAnswers[i] == answersHardFood[i])
				{
					result += 2;
				}
			}
			cout << "Your result: " << result << "/7";
		}
	}
}