#ifndef ANIMALFSM_H
#define ANIMALFSM_H


#include "fsm.h"
class AnimalFsm : public Fsm
{
public:
    AnimalFsm();

    virtual void run();
};

#endif // ANIMALFSM_H
