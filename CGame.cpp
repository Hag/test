#include "CGame.hpp"
#include "GEngine.hpp"
#include "MEngine.hpp"


CGame::CGame()
  : _run(true)
{
  _Me = new MEngine(this);
  _Ge = new GEngine(this);
  _Me -> linkGE(_Ge);
  _Ge -> linkME(_Me);
}

CGame::~CGame()
{
  delete _Me;
  delete _Ge;
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
