#pragma once

#include "ClassSportGames.h"

class SSummer : public SportGames
{
protected:
	string locate;
public:
	SSummer();
	SSummer(string locate_);

	virtual ~SSummer();

	virtual string GetLocate();
	virtual void SetLocate();

	friend ostream& operator <<(ostream& output, SSummer& var);
	friend istream& operator >>(istream& input, SSummer& var);
};
