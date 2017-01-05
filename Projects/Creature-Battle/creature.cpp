//
//  creature.cpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#include <iostream>
#include "creature.h"
using namespace std;

const int DEFAULT_STRENGTH = 10;
const int DEFAULT_HITPOINTS = 10;

namespace cs_creature {
    
    string creature::getSpecies() const {
        return "creature";
    }
    
    
    
    
    
    
    creature::creature() {
        strength = DEFAULT_STRENGTH;
        hitpoints = DEFAULT_HITPOINTS;
    }
    
    
    
    
    
    
    creature::creature(int newStrength, int newHitPoints) {
        strength = newStrength;
        hitpoints = newHitPoints;
    }
    
    
    
    
    
    
    int creature::getDamage() const {
        int damage = (rand() % strength) + 1;
        
        cout << "The " << getSpecies() << " attacks for " << damage << " points!"
                << endl;

        
        return damage;
    }
    
    
    
    
    
    
    void creature::changeStrength(const int newStrength) {
        strength = newStrength;
    }
    
    
    
    
    
    
    void creature::changeHitpoints(const int newHitpoints) {
        hitpoints = newHitpoints;
    }
    
    
    
    
    
    
    int creature::getStrength() const {
        return strength;
    }
    
    
    
    
    
    
    int creature::getHitpoints() const {
        return hitpoints;
    }
}