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
	cout << "       3) Gaming" << endl;
	cout << "       4) Animals" << endl;
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

			cout << "4.Which han has created Bulgaria? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "5.Under which king made Bulgaria on three seas? (Start your answer with a capital letter)" << endl;
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

			cout << "4.Which country has invented the pasta? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "5.Which country has invented the ramen? (Start your answer with a capital letter)" << endl;
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
			cout << "4.Gruyere is a cheese from which country? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "5.In Indonesian and Malay cuisine what does the word ‘nasi’ refer to? (Start your answer with a capital letter)" << endl;
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
	else if (topic == 3)
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
			string answersEasyGaming[5] = { "a","b","b","Peashooter","Batman" };
			cout << "1.When was Minecraft created" << endl;
			cout << "a) 2009" << endl;
			cout << "b) 2000" << endl;
			cout << "c) 1999" << endl;
			cout << "d) 2005" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "2.Which video-game series is the character Sub - Zero from?" << endl;
			cout << "a) COD" << endl;
			cout << "b) Mortal kombat" << endl;
			cout << "c) Fortnite" << endl;
			cout << "d) League of legends" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "3.Which was the best-selling video game of December 2017?" << endl;
			cout << "a) GTA V" << endl;
			cout << "b) Call of Duty: WW II" << endl;
			cout << "c) Paladins" << endl;
			cout << "d) Uncharted IV" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "4.Which is the first weapon you use in Cuphead? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "5.Who is the first character you play as in Injustice 2? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				if (userAnswers[i] == answersEasyGaming[i])
				{
					result++;
				}
			}
			for (int i = 3; i < 5; i++)
			{
				if (userAnswers[i] == answersEasyGaming[i])
				{
					result += 2;
				}
			}
			cout << "Your result: " << result << "/7";
		}
		else if (difficulty == 2)
		{
			string answersHardGaming[5] = { "d","c","c","Master Yi","Rockstar Games" };
			cout << "1.The video game Assassin's Creed Unity is the successor to which 2013 Assassin's Creed title? " << endl;
			cout << "a) Assassin’s Creed: Odyssey" << endl;
			cout << "b) Assassin’s Creed:Origins" << endl;
			cout << "c) Assassin’s Creed II" << endl;
			cout << "d) Assassin’s Creed Black Flag" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "2.Who is on the cover of EA Sport's FIFA 19?" << endl;
			cout << "a) Messi" << endl;
			cout << "b) Mbappe" << endl;
			cout << "c) Cristiano Ronaldo" << endl;
			cout << "d) Ronaldinho" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "3.What is the victory message in Fortnite Battle Royale?" << endl;
			cout << "a) Champion" << endl;
			cout << "b) Winner Winner Chicken Dinner" << endl;
			cout << "c) Victory Royale" << endl;
			cout << "d) Congrats" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "4.This League of Legends Champion uses a sword, and wears a strange yellow helmet. Known as the Wuju Bladesman, who is this person? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "5.Which company is the publisher of Grand Theft Auto V? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				if (userAnswers[i] == answersHardGaming[i])
				{
					result++;
				}
			}
			for (int i = 3; i < 5; i++)
			{
				if (userAnswers[i] == answersHardGaming[i])
				{
					result += 2;
				}
			}
			cout << "Your result: " << result << "/7";
		}
	}
	else if (topic == 4)
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
			string answersEasyAnimals[5] = { "d","b","d","Bamboo","Lion" };
			cout << "1.How many tentacles does an octopus have?" << endl;
			cout << "a) 2" << endl;
			cout << "b) 4" << endl;
			cout << "c) 69" << endl;
			cout << "d) 8" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "2.Which is the tallest animal in the world?" << endl;
			cout << "a) Lamma" << endl;
			cout << "b) Giraffe" << endl;
			cout << "c) Elephant" << endl;
			cout << "d) Lion" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "3.Which is the largest mammal in the wrold?" << endl;
			cout << "a) Elephant" << endl;
			cout << "b) Hippo" << endl;
			cout << "c) Crocodile" << endl;
			cout << "d) Blue whale" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "4.What do the pandas eat? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;

			cout << "5.What animal is Simba? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				if (userAnswers[i] == answersEasyAnimals[i])
				{
					result++;
				}
			}
			for (int i = 3; i < 5; i++)
			{
				if (userAnswers[i] == answersEasyAnimals[i])
				{
					result += 2;
				}
			}
			cout << "Your result: " << result << "/7";
		}
		else if (difficulty == 2)
		{
			string answersHardGaming[5] = { "c","d","a","Armadillo","2" };
			cout << "1.Which group of animals live on their own tropical island and swim in a turwuoise-blue sea?" << endl;
			cout << "a) Monkeys" << endl;
			cout << "b) Rabbits" << endl;
			cout << "c) Pigs" << endl;
			cout << "d) Wolfs" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "2.Who is the closest living relative of the rock hyrax?" << endl;
			cout << "a) Guinea pig" << endl;
			cout << "b) Racoon" << endl;
			cout << "c) Lion" << endl;
			cout << "d) Elephant" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "3.Which is the first animal tamed by humans?" << endl;
			cout << "a) Goat" << endl;
			cout << "b) Camel" << endl;
			cout << "c) Cat" << endl;
			cout << "d) Pig" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "4.Which mammal is able to hold their breath for up to six minutes under water? (Start your answer with a capital letter)" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			cout << "5.How many pairs if wings does a bee have?" << endl;
			cout << "Answer: ";
			getline(cin, userAnswers[counter]);
			counter++;
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				if (userAnswers[i] == answersHardGaming[i])
				{
					result++;
				}
			}
			for (int i = 3; i < 5; i++)
			{
				if (userAnswers[i] == answersHardGaming[i])
				{
					result += 2;
				}
			}
			cout << "Your result: " << result << "/7";
		}
	}
}