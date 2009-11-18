#ifndef CGAME_H
#define CGAME_H

class GEngine;
class MEngine;

class CGame
{
public :
  CGame();
  ~CGame();

  int go();
  void stop();

private :
  bool _run;

  MEngine* _Me;
  GEngine* _Ge;
};

#endif
