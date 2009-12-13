#include "GWindow.hpp"


GWindow::GWindow(int sizeX, int sizeY, int depth, std::string name, int maxFPS)
{
  _W = new sf::Window(sf::VideoMode(sizeX, sizeY, depth), name);
  _W -> SetFramerateLimit( maxFPS );
}


GWindow::~GWindow()
{
  delete _W;
}

