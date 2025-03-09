#pragma once

#include "ClassVGames.h"

class VPlot : public VGames
{
protected:
	string styleTipe;
	int faceTipe;
public:
	VPlot();
	VPlot(string style_, int faceTipe_);
	virtual ~VPlot();

	virtual string GetStyle();
	virtual int GetFace();

	virtual void SetStyle();
	virtual void SetFace();

	friend ostream& operator <<(ostream& output, VPlot& var);
	friend istream& operator >>(istream& input, VPlot& var);
};