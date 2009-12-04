#include "CGame.hpp"
#include "Engine.hpp"
#include "GEngine.hpp"
#include "MEngine.hpp"


MEngine::MEngine(CGame* parent) :
  Engine( parent )
{}


MEngine::~MEngine()
{}


void MEngine::frame()
{}


void MEngine::processM(Message& m)
{}
