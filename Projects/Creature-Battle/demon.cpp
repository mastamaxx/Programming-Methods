//
//  demon.cpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#include "demon.h"
#include <iostream>
using namespace std;

namespace cs_creature {
    string demon::getSpecies() const {
        return "demon";
    }
    
    
    
    
    
    
    demon::demon() {}
    
    
    
    
    demon::demon(int newStrength, int newHitpoints)
    
    : creature(newStrength, newHitpoints) {}
    
    
    
    
    
    
    int demon::getDamage() const {
        int damage = creature::getDamage();
                
        if (rand() % 4 == 0) {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        }
        
        return damage;
    }
}