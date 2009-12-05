#ifndef ENGINE_H
#define ENGINE_H

#include <queue>


class CGame;
class GEngine;
class MEngine;


class Message
{
public :
  int truc;
};


typedef std::queue<Message> MQ;


class Engine
{
public :

  Engine(CGame* Parent);
  virtual ~Engine() {}

  virtual void frame()=0;

  void push(Message&);
  void processMs();
  virtual void processM(Message*) {}

  void linkGE(GEngine* GE);
  void linkME(MEngine* ME);

protected :

  CGame* _Parent;
  GEngine* _Ge;
  MEngine* _Me;

  MQ* _Mqueue;

};

#endif
