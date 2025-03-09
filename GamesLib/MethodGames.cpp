#include "ClassGames.h"
#include <iostream>
using namespace std;

Games::Games()
{
	timePermin = 1;
	countOfpl = 1;
	nameOfgame = "Name of Game";
}
Games::Games(int countOfpl_) : Games::Games()
{
	if (countOfpl_ < 1)
		throw(1);
	else countOfpl = countOfpl_;
}

Games::Games(int countOfpl_, int timePermin_) : Games::Games(countOfpl_)
{
	if (timePermin_ < 1)
		throw(1);
	else timePermin = timePermin_;
}

Games::~Games()
{

}

int Games::GetTime()
{
	return timePermin;
}

int Games::GetCount()
{
	return countOfpl;
}

string Games::GetName()
{
	return nameOfgame;
}

void Games::SetName()
{
	cin >> nameOfgame;
}

void Games::SetCount()
{
	cin >> countOfpl;
}

void Games::SetTime()
{
	cin >> timePermin;
}
