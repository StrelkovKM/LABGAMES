#pragma once

#include "ClassGames.h"

class SportGames : public Games
{
protected:
	string season;
	string field;
public:
	SportGames();
	SportGames(string season_, string field_);
	virtual ~SportGames();

	virtual string GetSeason();
	virtual string GetField();

	virtual void SetSeason();
	virtual void SetField();

	friend ostream& operator <<(ostream& output, SportGames& var);
	friend istream& operator >>(istream& input, SportGames& var);
};