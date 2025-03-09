#include <iostream>
#include "ClassVShooters.h" 

VShooters::~VShooters()
{
}

VShooters::VShooters() : VGames::VGames()
{
	shootTipe = "";
	faceTipe = 0;
}

VShooters::VShooters(string shootTipe_, int faceTipe_)
{
	shootTipe = shootTipe_;
	faceTipe = faceTipe_;
}

int VShooters::GetFace()
{
	return faceTipe;
}

string VShooters::GetShoot()
{
	return shootTipe;
}

void VShooters::SetFace()
{
	cin >> faceTipe;
}

void VShooters::SetShoot()
{
	cin >> shootTipe;
}

ostream& operator <<(ostream& output, VShooters& var)
{
	output
		<< "Time of game: " << var.timePermin << " | " << "Count of players: " << var.countOfpl << " | "
		<< "Name of game: " << var.nameOfgame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Mode: "<< var.shootTipe << " | "
		<< "Face tipe: " << var.faceTipe 
		<< "\n";

	return output;
}

istream& operator >>(istream& input, VShooters& var)
{
	input 
		>> var.timePermin >> var.countOfpl >> var.nameOfgame
		>> var.platform >> var.engine >> var.shootTipe 
		>> var.faceTipe;
	return input;
}