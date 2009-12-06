#include "CGame.hpp"
#include "GEngine.hpp"
#include "GWindow.hpp"
#include "MEngine.hpp"


CGame::CGame()
  : _run(true)
{
  _Me = new MEngine(this);
  _Ge = new GEngine(this);
  _Me -> linkGE(_Ge);
  _Ge -> linkGE(_Ge);
  _Me -> linkME(_Me);
  _Ge -> linkME(_Me);

  _W = new GWindow(800, 600, 32, "PRUTRE", 50);
}

CGame::~CGame()
{
  delete _Me;
  delete _Ge;
  delete _W;
}

int CGame::go()
{
  while( _run )
    {
      _Me->frame();
      _Ge->frame();
    }
  return 0;
}

void CGame::stop()
{
  _run = false;
}
