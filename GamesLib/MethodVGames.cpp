#include <iostream>
#include "ClassVGames.h"

VGames::VGames() : Games::Games()
{
	platform = "";
	engine = "";
}

VGames::~VGames()
{

}
VGames::VGames(string platform_, string engine_)
{
	platform = platform_;
	engine = engine_;
}



string VGames::GetPlatform()
{
	return platform;
}

string VGames::GetEngine()
{
	return engine;
}



void VGames::SetPlatform()
{
	cin >> platform;
}

void VGames::SetEngine()
{
	cin >> engine;
}

ostream& operator <<(ostream& output, VGames& var)
{
	output 
		<< "Time of game: " << var.timePermin << " | " << "Count of players: "<< var.countOfpl << " | " 
		<< "Name of play: " << var.nameOfgame << " | " << "Platform: " << var.platform << " | " 
		<< "Engine: " << var.engine
		;

	return output;
}

istream& operator >>(istream& input, VGames& var)
{
	input >> var.timePermin >> var.countOfpl >> var.nameOfgame >> var.platform >> var.engine;
	return input;
}