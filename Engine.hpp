#ifndef TENGINE_H
#define TENGINE_H

#include <queue>


class CGame;
class CMessage;
class GEngine;
class MEngine;

typedef std::queue<CMessage> CMQ;


class TEngine
{
public :

  TEngine(CGame* Parent);
  virtual ~TEngine()=0;

  virtual void frame()=0;

  void push(CMessage& m);
  void processCMs();
  virtual void processCM(CMessage* m;);

  void linkGE(GEngine* GE);
  void linkME(MEngine* ME);

private :

  CGame* _Parent;
  GEngine* _Ge;
  MEngine* _Me;

  CMQ* _CMqueue;

};

#endif
