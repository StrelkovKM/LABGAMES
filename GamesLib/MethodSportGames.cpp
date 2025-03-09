
#include "ClassSportGames.h"

SportGames::SportGames() : Games::Games()
{
	season = "";
	field = "";
}

SportGames::~SportGames()
{

}
SportGames::SportGames(string season_, string field_)
{
	season = season_;
	field = field_;
}



string SportGames::GetSeason()
{
 	return season;
}

string SportGames::GetField()
{
	return field;
}



void SportGames::SetSeason()
{
	cin >> season;
}

void SportGames::SetField()
{
	cin >> field;
}

ostream& operator <<(ostream& output, SportGames& var)
{
	output
		<< "Time of game: " << var.timePermin << " | " << "Count of players: " << var.countOfpl << " | "
		<< "Name of play: " << var.nameOfgame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field
		;

	return output;
}

istream& operator >>(istream& input, SportGames& var)
{
	input >> var.timePermin >> var.countOfpl >> var.nameOfgame >> var.season >> var.field;
	return input;
}