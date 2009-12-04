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

  void processM(Message& m);

private :

};


#endif
