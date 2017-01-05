//
//  elf.cpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#include "elf.h"
#include <iostream>
using namespace std;

namespace cs_creature {
    string elf::getSpecies() const {
        return "elf";
    }
    
    
    
    
    
    
    elf::elf() {}
    
    
    
    
    elf::elf(int newStrength, int newHitpoints)
    
    : creature(newStrength, newHitpoints) {}
    
    
    
    
    
    
    int elf::getDamage() const {
        
        int damage = creature::getDamage();
        
        if ((rand() % 2) == 0) {
            cout << "Magical attack inflicts " << damage <<
                " additional damage points!" << endl;
            damage *= 2;
        }
        
        return damage;
    }
}