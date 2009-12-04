#include "CGame.hpp"

int main(int argc, char* argv[])
{
  CGame* Game = new CGame();
  Game -> go();
  delete Game;
  return 0;
}
