#pragma once

#include "ClassVPlot.h"

class VPRedDead : public VPlot
{
protected:
	string pickHero;
public:
	VPRedDead();
	VPRedDead(string pickHero_);
	virtual ~VPRedDead();

	virtual string GetHero();
	virtual void SetHero();

	friend ostream& operator <<(ostream& output, VPRedDead& var);
	friend istream& operator >>(istream& input, VPRedDead& var);
};