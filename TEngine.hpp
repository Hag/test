#ifndef TENGINE_H
#define TENGINE_H

class CGame;

class TEngine
{
public :
  TEngine(CGame* Parent);
  virtual ~TEngine()=0;

  virtual void frame()=0;

  void linkGE(GEngine* GE);
  void linkME(GEngine* ME);

private :
  CGame* _Parent;
  GEngine* _Ge;
  MEngine* _Me;
};

#endif
