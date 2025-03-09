#pragma once

#include "ClassVGames.h"

class VShooters : public VGames
{
protected:
	string shootTipe;
	int faceTipe;
public:
	VShooters();
	VShooters(string shootTipe_, int faceTipe_);
	virtual ~VShooters();

	virtual string GetShoot();
	virtual int GetFace();

	virtual void SetShoot();
	virtual void SetFace();

	friend ostream& operator <<(ostream& output, VShooters& var);
	friend istream& operator >>(istream& input, VShooters& var);
};