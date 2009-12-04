#include "CGame.hpp"
#include "Engine.hpp"
#include "GEngine.hpp"
#include "MEngine.hpp"


GEngine::GEngine(CGame* parent) :
  Engine( parent )
{}


GEngine::~GEngine()
{}


void GEngine::frame()
{}


void GEngine::processM(Message& m)
{}
