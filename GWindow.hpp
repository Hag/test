#ifndef GWINDOW_H
#define GWINDOW_H

#include <SFML/Window.hpp>
#include <string>


class GWindow
{
public :

  GWindow(int sizeX, int sizeY, int depth, std::string name, int maxFPS);
  ~GWindow();

  inline sf::Window* w() {return _W;}

private :

  sf::Window* _W;

};


#endif
