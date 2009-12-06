#include "CGame.hpp"
#include "Engine.hpp"
#include "GEngine.hpp"
#include "GWindow.hpp"
#include "MEngine.hpp"


GEngine::GEngine(CGame* parent) :
  Engine( parent )
{}


GEngine::~GEngine()
{}


void GEngine::frame()
{
  sf::Event e;
  while( window()->GetEvent(e) )
    {
      if(e.Type == sf::Event::Closed)
	{
	  window()->Close();
	  _Parent->stop();
	}

      window()->Display();
    }
  if(_Me->c == 2<<31) window()->Close();
}


void GEngine::processM(Message& m)
{}
