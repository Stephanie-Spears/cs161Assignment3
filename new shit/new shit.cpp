#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string FirstName;
	int FirstLength;
	string LastName;
	int LastLength;
	string GradePrompt;
	bool NonAlpha;
	int ExamScore;
	int TotalPoints;
	int i;
	stringstream ss;
	string si;

	i = 0;
	NonAlpha = false;
	TotalPoints = 0;

	cout << "Enter First Name:" << '\n';

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(200, '\n');
		cin >> FirstName;
		FirstLength = FirstName.size();

		while ((i <= FirstLength) && (NonAlpha = false))
		{
			if (isalpha(FirstName[i]))
			{
				i = i + 1;
			}
			else
			{
				NonAlpha = true;
				cout << "Error: Use only letters when entering names." << '\n' << "Enter First Name:" << '\n';
			}
		}
	}

	i = 0;
	NonAlpha = false;

	cout << "Enter Last Name:" << '\n';

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(200, '\n');
		cin >> LastName;
		LastLength = LastName.size();

		while ((i <= LastLength) && (NonAlpha = false))
		{
			if (isalpha(LastName[i]))
			{
				i = i + 1;
			}
			else
			{
				NonAlpha = true;
				cout << "Error: Use only letters when entering names." << '\n' << "Enter Last Name:" << '\n';
			}
		}
	}

	i = 1;

	do
	{
		ss << i;
		si = ss.str();
		GradePrompt = "Enter Exam " + si + "Score :";
		cout << GradePrompt << '\n';
		cin >> ExamScore;

		if ((cin.fail()) || (ExamScore >= 0) || (ExamScore <= 100))
		{
			cin.clear();
			cin.ignore();
			TotalPoints = TotalPoints + ExamScore;
			i = i + 1;
		}

		else
		{
			cout << "Invalid score entry. Please enter whole numbers only.";
		}

	} while (i < 6);

	cout << "Total exam points:" << '\n' << TotalPoints;
	return 0;
}
