#pragma once

#include "ClassVShooters.h"

class VSOverwatch : public VShooters
{
protected:
	string fightTipe;
public:
	VSOverwatch();
	VSOverwatch(string fightTipe_);

	virtual ~VSOverwatch();
	
	virtual string GetFight();
	virtual void SetFight();

	friend ostream& operator <<(ostream& output, VSOverwatch& var);
	friend istream& operator >>(istream& input, VSOverwatch& var);
};