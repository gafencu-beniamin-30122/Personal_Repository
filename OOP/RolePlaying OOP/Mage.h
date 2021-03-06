#pragma once
#include <string>
#include "Custom_Player.h"

class Mage : public Custom_Player{
protected:
    float magic_penetration;
    float ability_power;

public:
    //setters and getters
    void set_mp(float mp);
    float get_mp();
    void set_ap(float ap);
    float get_ap();

    //replica
    virtual void reply();

    //constructor
    Mage();

    //destructor
    virtual ~Mage();
};
