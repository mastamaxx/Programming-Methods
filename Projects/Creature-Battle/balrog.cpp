//
//  balrog.cpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#include "balrog.h"
#include <iostream>
using namespace std;

namespace cs_creature {
    string balrog::getSpecies() const {
        return "balrog";
    }
    
    
    
    
    
    
    balrog::balrog() {}
    
    
    
    
    
    
    balrog::balrog(int newStrength, int newHitpoints)
    
    : demon(newStrength, newHitpoints) {}
    
    
    
    
    
    
    int balrog::getDamage() const {
        int damage = demon::getDamage();
        
        int damage2 = (rand() % demon::creature::getStrength() + 1);
        cout << "Balrog speed attack inflicts " << damage2 <<
                       " additional damage points!" << endl;
        damage += damage2;
        
        return damage;
    }
}