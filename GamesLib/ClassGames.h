#pragma once

#include <iostream>

using namespace std;

class Games
{
protected:
  int timePermin;
  int countOfpl;
  string nameOfgame;
public:
  Games();
  ~Games();
  Games(int countOfpl_);
  Games(int timePermin_, int countOfpl_);

  virtual int GetTime();
  virtual int GetCount();
  virtual string GetName();
  
  virtual void SetTime();
  virtual void SetCount();
  virtual void SetName();
};
