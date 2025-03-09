#include "ClassVPWD.h"


VPWatchDogs::VPWatchDogs() : VPlot::VPlot()
{
	chapter = 1;
}

VPWatchDogs::VPWatchDogs(int chapter_)
{
	chapter = chapter_;
}

VPWatchDogs::~VPWatchDogs()
{

}

int VPWatchDogs::GetChapter()
{
	return chapter;
}

void VPWatchDogs::SetChapter()
{
	cin >> chapter;
}

ostream& operator <<(ostream& output, VPWatchDogs& var)
{
	output
		<< "Time of game: " << var.timePermin << " | " << "Count of players: " << var.countOfpl << " | "
		<< "Name of game: " << var.nameOfgame << " | " << "Platfor for game: " << var.platform << " | "
		<< "Engine of game: " << var.engine << " | " << "Game Style: " << var.styleTipe << " | "
		<< "Face tipe: " << var.faceTipe << " | " << "Chapter: " << var.chapter
		<< "\n";
	return output;
}

istream& operator >>(istream& input, VPWatchDogs& var)
{
	input
		>> var.timePermin >> var.countOfpl >> var.nameOfgame
		>> var.platform >> var.engine >> var.styleTipe
		>> var.faceTipe >> var.chapter;
	return input;
}