#include "ClassSSummer.h"

SSummer::SSummer() : SportGames::SportGames()
{
	locate = "";
}

SSummer::SSummer(string locate_)
{
	locate = locate_;
}

SSummer::~SSummer()
{

}

string SSummer::GetLocate()
{
	return locate;
}

void SSummer::SetLocate()
{
	cin >> locate;
}

ostream& operator <<(ostream& output, SSummer& var)
{
	output
		<< "Time of game: " << var.timePermin << " | " << "Count of players: " << var.countOfpl << " | "
		<< "Name of play: " << var.nameOfgame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field << " | " << "Locate: " << var.locate << "\n"
		;
	return output;
}

istream& operator >>(istream& input, SSummer& var)
{
	input
		>> var.timePermin >> var.countOfpl >> var.nameOfgame >> var.season >> var.field >> var.locate;
	return input;
}