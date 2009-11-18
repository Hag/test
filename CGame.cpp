#include "CGame.cpp"

CGame::CGame()
  : _run(true)
{
  _Me = new MEngine(this);
  _Ge = new GEngine(this);
  _Me -> linkGE(_Ge);
  _Ge -> linkMe(_Me);
}

CGame::~CGame()
{
  _Me = delete MEngine();
  _Ge = delete GEngine();
}

CGame::go()
{
  while( _run )
    {
		_Me->frame();
		_Ge->frame();
	}
}

CGame::stop()
{
  _run = false
}
