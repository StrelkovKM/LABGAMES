#pragma once

#include "ClassVPlot.h"

class VPWatchDogs : public VPlot
{
protected:
	int chapter;
public:
	VPWatchDogs();
	VPWatchDogs(int chapter_);
	virtual ~VPWatchDogs();

	virtual int GetChapter();
	virtual void SetChapter();

	friend ostream& operator <<(ostream& output, VPWatchDogs& var);
	friend istream& operator >>(istream& input, VPWatchDogs& var);
};