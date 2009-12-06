#ifndef CGAME_H
#define CGAME_H

class GEngine;
class GWindow;
class MEngine;

class CGame
{
public :
  CGame();
  ~CGame();

  int go();
  void stop();

  inline GWindow* window() { return _W; }

private :
  bool _run;

  MEngine* _Me;
  GEngine* _Ge;

  GWindow* _W;

};

#endif
