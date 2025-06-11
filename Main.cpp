#include <iostream>
using namespace std;
int main()
{
	int num=0, tries=1, guess=0;
	srand(time(0));
	num = rand() % 101; //numbers from 0-100
	cout << "\t\t\t*_*_*_*_*_*_*_*_*_*_*_NUMBER GUESSING GAME*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";
	do {
		cout << "Enter a number between 0-100: ";
		cin >> guess;
		tries++;
		if (guess < 0 && guess>100)
		{
			cout << "Invalid entry! Please try again.";
			continue;
		}
		if (guess > num)
		{
			cout << "Too High!" << endl;
		}
		else if (guess < num)
		{
			cout << "Too Low!" << endl;
		}
	} while (guess != num && tries<=7);

	if (tries >= 8)
	{
		cout << "Nice Try! The orginal number was: " << num;
	}
	else
	{
		cout << "YOU ARE A CHAMPION!! \nNumber of tries: " << tries-1;
	}
	cout << "\n\n\t\t\t\t*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";
	return 0;
}