#include "ej_class.h"

void Car::init(int g_, int p_){
 doors_ = p_;
 gas_ = (float)g_;
 open_ = true;
}

void Car::init(const float g_)
{
 gas_ = g_;
 doors_ = 3;
 open_ = true;
}

void Car::init()
{
 gas_ = 0;
 doors_ = 3;
 open_ = true;
}

void Car::refuelGas(int g_)
{
 gas_ += g_;
}

void Car::consumeGas(int g_)
{
 gas_ -= g_;
}

void Car::openDoors(){
 open_ = true;    
}

void Car::closeDoors(){
 open_ = false;
}
