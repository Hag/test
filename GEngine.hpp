#ifndef GENGINE_H
#define GENGINE_H

#include "CGame.hpp"
#include "Engine.hpp"
#include "GWindow.hpp"
#include <SFML/Window.hpp>


class GEngine : public Engine
{
public :

  GEngine(CGame* Parent);
  ~GEngine();

  void frame();

private :

  void processM(Message& m);

  inline sf::Window* window() { return _Parent->window()->w(); }

};


#endif
