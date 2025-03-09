#include "ClassVSPUBG.h"

VSPUBG::VSPUBG() : VShooters::VShooters()
{
	teamTipe = "";
}

VSPUBG::VSPUBG(string teamTipe_)
{
	teamTipe = teamTipe_;
}

VSPUBG::~VSPUBG()
{

}

string VSPUBG::GetTeam()
{
	return teamTipe;
}

void VSPUBG::SetTeam()
{
	cin >> teamTipe;
}

ostream& operator <<(ostream& output, VSPUBG& var)
{
	output
		<< "Time of game: " << var.timePermin << " | " << "Count of players: " << var.countOfpl << " | "
		<< "Name of game: " << var.nameOfgame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Mode: " << var.shootTipe << " | "
		<< "Face tipe: " << var.faceTipe << " | " << "Fight tipe: " << var.teamTipe
		<< "\n";
	return output;
}

istream& operator >>(istream& input, VSPUBG& var)
{
	input
		>> var.timePermin >> var.countOfpl >> var.nameOfgame
		>> var.platform >> var.engine >> var.shootTipe
		>> var.faceTipe >> var.teamTipe;
	return input;
} 