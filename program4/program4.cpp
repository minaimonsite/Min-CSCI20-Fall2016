//Min Site
// Test grading program
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


const int N = 21;

void ReadAnswerKeys(string answerkey[N]);

int main(){
	string answerkey[N];
	string firstname, lastname;
	string answer;
	double totalpoints = 0;
	int studentCount = 0;
	int incorrect_omitted[N] = {0};


	ReadAnswerKeys(answerkey);


	ifstream fin;
	fin.open("input.txt");


	if (!fin)
	{
		cout << "input.txt does not exists. Exiting the program...";
		return 1;
	}
	

	while (fin >> firstname)
	{
		fin >> lastname;
		stringstream correct;
		stringstream incorrect;
		double points = 0;
		for (int i=0; i<N; i++)
		{
			fin >> answer;
			if (answer == answerkey[i])
			{
				correct << (i+1) << " ";
				points = points + 1;
			}
			else if (answer=="?")
			{
				incorrect << (i+1) << " ";
				incorrect_omitted[i]++;
			}
			else
			{
				points = points - .25;
				incorrect << (i+1) << " ";
				incorrect_omitted[i]++;
			}
		}
		cout << "Student Name: " << lastname << ", " << firstname << endl;
		cout << "Points Scored: " << points << endl;
		cout << "Correct Answers: " << correct.str() << endl;
		cout << "Incorrect/Omitted Answers: " << incorrect.str() << endl << endl;

		//total points
		totalpoints = totalpoints + points;
		studentCount++;
	}
	fin.close();

	cout << "*****************************************************************" << endl << endl;

	double classAverage = totalpoints/studentCount;

	cout << "Class Average: " << classAverage << endl << endl;


	
	cout << "Questions that more than 50% of the class omitted or got incorrect: ";
	for (int i=0; i<N; i++)
	{
		if (incorrect_omitted[i] > (studentCount/2))
		{
			cout << (i+1) << " ";
		}
	}
	cout << endl;

	return 0;
}

void ReadAnswerKeys(string answerkey[N])
{
	ifstream fin;
	fin.open("AnswerKey.txt");
	int i = 0;
	while (fin >> answerkey[i])
	{
		i++;
	}
		fin.close();
}
