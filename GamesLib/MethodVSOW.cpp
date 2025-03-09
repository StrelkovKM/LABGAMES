#include "ClassVSOW.h"

VSOverwatch::VSOverwatch() : VShooters::VShooters()
{
	fightTipe = "";
}

VSOverwatch::VSOverwatch(string fightTipe_)
{
	fightTipe = fightTipe_;
}

VSOverwatch::~VSOverwatch()
{

}

string VSOverwatch::GetFight()
{
	return fightTipe;
}

void VSOverwatch::SetFight()
{
	cin >> fightTipe;
}

ostream& operator <<(ostream& output, VSOverwatch& var)
{
	output
		<< "Time of game: " << var.timePermin << " | " << "Count of players: " << var.countOfpl << " | "
		<< "Name of game: " << var.nameOfgame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Mode: " << var.shootTipe << " | "
		<< "Face tipe: " << var.faceTipe << " | " << "Fight tipe: " << var.fightTipe
		<< "\n";
	return output;
}

istream& operator >>(istream& input, VSOverwatch& var)
{
	input
		>> var.timePermin >> var.countOfpl >> var.nameOfgame
		>> var.platform >> var.engine >> var.shootTipe
		>> var.faceTipe >> var.fightTipe;
	return input;
}