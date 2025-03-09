#pragma once
#include <iostream>
#include "ClassGames.h"

class VGames : public Games
{
protected:
	string platform;
	string engine;
public:
	VGames();
	VGames(string platform_, string engine_);
	virtual ~VGames();

	virtual string GetPlatform();
	virtual string GetEngine();

	virtual void SetPlatform();
	virtual void SetEngine();

	friend ostream& operator <<(ostream& output, VGames& var);
	friend istream& operator >>(istream& input, VGames& var);
};