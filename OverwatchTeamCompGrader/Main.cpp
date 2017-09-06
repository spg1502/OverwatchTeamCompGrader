#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

const vector<string> heroes = { "Doomfist", "Genji", "McCree", "Pharah", "Reaper", "Soldier: 76", "Sombra",
		"Tracer", "Bastion", "Hanzo", "Junkrat", "Mei", "Torbjörn", "Widowmaker", "D.Va", "Orisa", "Reinhardt",
		"Roadhot", "Winston", "Zarya", "Ana", "Lúcio", "Mercy", "Symmetra", "Zenyatta"};
vector<string> split(const string&s, char delim);
vector<string> sanitize(const string&s);

int main()
{
	//Program intro
	cout << "Hello and welcome to the Overwatch Team Comp Grader" << endl;
	cout << "" << endl;
	cout << "To use this program, input the names of each of the" << endl;
	cout << "6 members of your Overwatch team, and this program" << endl;
	cout << "will tell you how fit your team is for victory!" << endl;
	cout << "Please enter hero names as accurately as possible," << endl;
	cout << "but this program is tolerant of mispellings" << endl;

	//Reading in user input
	string teamComp;
	getline(cin, teamComp);

	//Splitting user input into discrete units
	vector<string> splitTeamComp = split(teamComp, ' ');

	//Perform sanitization on all of these strings, remove trailing whitespace, bad punctuation, interpret misspellings, and account for characters like 'ö' and 'ú'

	//Input should likely be sanitized in/before the split method
	//Should verify that each element (as it reads through each) is a valid hero
	//Once it's gone through this process, it should add valid heros to a vector<string> and the invalids to a different vector<string>
	//Once we're split into two vector<string>s, we should output the valids to the user, and also let them know that the following invalids weren't inputted properly
	//Repeat this process until the vector of valid strings is exactly 6 elements large
	//Once we have a valid vector of 6 heroes, ensure that at least 1 dps, 1 or 2 tanks/healers, and no more than 1 sniper
	
	cout << "You input: ";
	for (int i = 0; i <= splitTeamComp.size() - 1; i++)
	{
		cout << splitTeamComp.at(i) + ", ";
	}
	cin.get();
}

vector<string> split(const string &s, char delim)
{
	//TODO: account for the space character in 'Soldier: 76'
	stringstream stringStreamObj(s);
	string item;
	vector<string> tokens;
	while (getline(stringStreamObj, item, delim))
	{
		tokens.push_back(item);
	}
	return tokens;
}