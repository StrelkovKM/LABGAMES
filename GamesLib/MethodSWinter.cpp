#include "ClassSWinter.h"

SWinter::SWinter() : SportGames::SportGames()
{
	tools = "";
}

SWinter::SWinter(string tools_)
{
	tools = tools_;
}

SWinter::~SWinter()
{

}

string SWinter::GetTools()
{
	return tools;
}

void SWinter::SetTools()
{
	cin >> tools;
}

ostream& operator <<(ostream& output, SWinter& var)
{
	output
		<< "Time of game: " << var.timePermin << " | " << "Count of players: " << var.countOfpl << " | "
		<< "Name of play: " << var.nameOfgame << " | " << "Season: " << var.season << " | "
		<< "Field for play: " << var.field << " | " << "Tools: " << var.tools << "\n"
		;
	return output;
}

istream& operator >>(istream& input, SWinter& var)
{
	input
		>> var.timePermin >> var.countOfpl >> var.nameOfgame >> var.season >> var.field >> var.tools;
	return input;
}