#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(const string&s, char delim);

int main()
{
	cout << "Hello and welcome to the Overwatch Team Comp Grader" << endl;
	cout << "To use this program, input the names of each of the 6 members of your Overwatch team, and this program will tell you how fit your team is for victory!" << endl;
	cout << "Please enter hero names with their correct spelling, capitalization, and punctuaion (as in D.Va)" << endl;
	string teamComp;
	getline(cin, teamComp);
	vector<string> splitTeamComp = split(teamComp, ' ');

	//Input has been read in and split into vector<string> elements.
	//Input should likely be sanitized in/before the split method
	//Should verify that each element (as it reads through each) is a valid hero
	//Once it's gone through this process, it should add valid heros to a vector<string> and the invalids to a different vector<string>
	//Once we're split into two vector<string>s, we should output the valids to the user, and also let them know that the following invalids weren't inputted properly
	//Repeat this process until the vector of valid strings is exactly 6 elements large
	//Once we have a valid vector of 6 heroes, ensure that at least 1 dps, 1 or 2 tanks/healers, and no more than 1 sniper

	for (int i = 0; i <= splitTeamComp.size() - 1; i++)
	{
		cout << splitTeamComp.at(i);
	}
	cin.get();
}

vector<string> split(const string &s, char delim)
{
	stringstream stringStreamObj(s);
	string item;
	vector<string> tokens;
	while (getline(stringStreamObj, item, delim))
	{
		tokens.push_back(item);
	}
	return tokens;
}