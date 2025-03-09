#include <iostream>
#include "ClassGames.h"
#include "ClassVGames.h"
#include "ClassVShooters.h"
#include "ClassVSOW.h"
#include "ClassVSPUBG.h"
#include "ClassVPlot.h"
#include "ClassVPWD.h"
#include "ClassVPRDR.h"
#include <gtest.h>


TEST(Games, can_create_games_with_positive_count)
{
  ASSERT_NO_THROW(Games bf(3));
}

TEST(Games, can_get_count)
{
  Games bf(3);

  EXPECT_NEAR(3, bf.GetCount(), 0.000001);
}


TEST(Games, can_set_count)
{
  Games bf(10);

  bf.SetCount();
  EXPECT_NE(0, bf.GetCount());
}


TEST(Games, throws_when_create_game_with_negative_count)
{
  ASSERT_ANY_THROW(Games bf(-3));
}


