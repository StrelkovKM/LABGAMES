#pragma once

#include "ClassVShooters.h"

class VSPUBG : public VShooters
{
protected:
	string teamTipe;
public:
	VSPUBG();
	VSPUBG(string fightTipe_);

	virtual ~VSPUBG();

	virtual string GetTeam();
	virtual void SetTeam();

	friend ostream& operator <<(ostream& output, VSPUBG& var);
	friend istream& operator >>(istream& input, VSPUBG& var);
};