#ifndef MENGINE_H
#define MENGINE_H


class CGame;
class Engine;


class MEngine : public Engine
{
public :

  MEngine(CGame* parent);
  ~MEngine();

  void frame();

  int c;

private :

  void processM(Message& m);

};


#endif
