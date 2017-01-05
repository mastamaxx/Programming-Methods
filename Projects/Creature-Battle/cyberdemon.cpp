//
//  cyberdemon.cpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#include "cyberdemon.h"
#include <iostream>
using namespace std;

namespace cs_creature {
    string cyberdemon::getSpecies() const {
        return "cyberdemon";
    }
    
    
    
    
    
    
    cyberdemon::cyberdemon() {}
    
    
    
    
    
    
    cyberdemon::cyberdemon(int newStrength, int newHitpoints)
    
    : demon(newStrength, newHitpoints) {}
}