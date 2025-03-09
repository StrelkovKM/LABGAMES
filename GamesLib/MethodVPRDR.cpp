#include "ClassVPRDR.h"


VPRedDead::VPRedDead() : VPlot::VPlot()
{
	pickHero = "";
}

VPRedDead::VPRedDead(string pickHero_)
{
	pickHero = pickHero_;
}

VPRedDead::~VPRedDead()
{

}

string VPRedDead::GetHero()
{
	return pickHero;
}

void VPRedDead::SetHero()
{
	cin >> pickHero;
}

ostream& operator <<(ostream& output, VPRedDead& var)
{
	output
		<< "Time of game: " << var.timePermin << " | " << "Count of players: " << var.countOfpl << " | "
		<< "Name of game: " << var.nameOfgame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Style: " << var.styleTipe << " | "
		<< "Face tipe: " << var.faceTipe << " | " << "Picked Hero: " << var.pickHero
		<< "\n";
	return output;
}

istream& operator >>(istream& input, VPRedDead& var)
{
	input
		>> var.timePermin >> var.countOfpl >> var.nameOfgame
		>> var.platform >> var.engine >> var.styleTipe
		>> var.faceTipe >> var.pickHero;
	return input;
}