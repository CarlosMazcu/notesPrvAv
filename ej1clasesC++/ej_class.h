#ifndef __EJ_CLASS_H__
#define __EJ_CLASS_H__ 1

#include <stdio.h>

class Car
{
 public:
//Methods
  void init(const int g_,const int p_);
  void init(const float g_);
  void init();

  void refuelGas(const int g_);
  void consumeGas(const int g_);
  void openDoors();
  void closeDoors();

 public:
    //data
  int doors_;
  bool open_;
  float gas_;

};


#endif
