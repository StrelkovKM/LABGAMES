#include <iostream>
#include "ClassVPlot.h" 

VPlot::~VPlot()
{
}

VPlot::VPlot() : VGames::VGames()
{
	styleTipe = "";
	faceTipe = 0;
}

VPlot::VPlot(string styleTipe_, int faceTipe_)
{
	styleTipe = styleTipe_;
	faceTipe = faceTipe_;
}

int VPlot::GetFace()
{
	return faceTipe;
}

string VPlot::GetStyle()
{
	return styleTipe;
}

void VPlot::SetFace()
{
	cin >> faceTipe;
}

void VPlot::SetStyle()
{
	cin >> styleTipe;
}

ostream& operator <<(ostream& output, VPlot& var)
{
	output
		<< "Time of game: " << var.timePermin << " | " << "Count of players: " << var.countOfpl << " | "
		<< "Name of game: " << var.nameOfgame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game style: " << var.styleTipe << " | "
		<< "Face tipe: " << var.faceTipe
		<< "\n";

	return output;
}

istream& operator >>(istream& input, VPlot& var)
{
	input
		>> var.timePermin >> var.countOfpl >> var.nameOfgame
		>> var.platform >> var.engine >> var.styleTipe
		>> var.faceTipe;
	return input;
}