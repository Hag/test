#include "CGame.hpp"
#include "Engine.hpp"
#include "GEngine.hpp"
#include "MEngine.hpp"


Engine::Engine( CGame* Parent) :
  _Parent(Parent)
{
  _Mqueue = new MQ;
}


void Engine::push(Message& m)
{
  _Mqueue->push(m);
}


void Engine::processMs()
{
  while( ! _Mqueue->empty() )
    {
      processM( &_Mqueue->front() );
      _Mqueue->pop();
    }
}


void Engine::linkGE(GEngine* Ge)
{
  _Ge = Ge;
}

void Engine::linkME(MEngine* Me)
{
  _Me = Me;
}
