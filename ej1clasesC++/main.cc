#include <stdio.h>
#include "ej_class.h"

int main(int argc, char** argv)
{
 Car car0;
 Car car1;
 car0.init();
 printf("Car: %f - %d - %d\n", car0.gas_, car0.doors_, car0.open_);
 car0.refuelGas(100);
 printf("Car: %f - %d - %d\n", car0.gas_, car0.doors_, car0.open_);
 car1.init(100, 4);
 printf("Car: %f - %d - %d\n", car0.gas_, car0.doors_, car0.open_);
 car1.consumeGas(30);
 printf("Car: %f - %d - %d\n", car0.gas_, car0.doors_, car0.open_);

 Car lot_of_cars[10];
 for(int i = 0; i < 10; i++)
 {
  lot_of_cars[i].init(i*2+10, i);
  printf("Car: %f - %d - %d\n", lot_of_cars[i].gas_, lot_of_cars[i].doors_, lot_of_cars[i].open_);
 }
    

 Car car2;
 Car* pcar = nullptr;

 pcar = &car2;

 pcar->init();

 printf("Car: %f - %d - %d\n", pcar->gas_, pcar->doors_, pcar->open_);



 return 0;
}