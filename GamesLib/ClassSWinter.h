#pragma once

#include "ClassSportGames.h"

class SWinter : public SportGames
{
protected:
	string tools;
public:
	SWinter();
	SWinter(string tools_);

	virtual ~SWinter();

	virtual string GetTools();
	virtual void SetTools();

	friend ostream& operator <<(ostream& output, SWinter& var);
	friend istream& operator >>(istream& input, SWinter& var);
};