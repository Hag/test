#ifndef GENGINE_H
#define GENGINE_H

#include "Engine.hpp"


class CGame;


class GEngine : public Engine
{
public :

  GEngine(CGame* parent);
  ~GEngine();

  void frame();

  void processM(Message& m);

private :

};


#endif
