#include <iostream>

#include "CGame.hpp"
#include "Engine.hpp"
#include "GEngine.hpp"
#include "MEngine.hpp"


MEngine::MEngine(CGame* parent) :
  Engine( parent )
{
  c=0;
}


MEngine::~MEngine()
{}


void MEngine::frame()
{
  c+=1;
}


void MEngine::processM(Message& m)
{}
