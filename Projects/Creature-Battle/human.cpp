//
//  human.cpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#include "human.h"
#include <iostream>
using namespace std;

namespace cs_creature {
    string human::getSpecies() const {
        return "human";
    }
    
    
    
    
    
    human::human() {}
    
    
    
    
    
    human::human(int newStrength, int newHitpoints)
    
    : creature(newStrength, newHitpoints) {}

}