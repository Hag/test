#include "TEngine.hpp"


TEngine::TEngine( CGame* Parent) :
  _Parent(Parent)
{}


TEngine::push(CMessage m)
{
  _CMqueue.push(m);
}


TEngine::processCMs()
{
  while( ! _CMqueue.empty() )
    {
      processCM( &_CMqueue.front() );
      _CMqueue.pop();
    }
}
