//
//  balrog.hpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#ifndef balrog_h
#define balrog_h

#include <stdio.h>
#include <iostream>
#include "demon.h"
#include "creature.h"

namespace cs_creature {
    class balrog: public demon {
        public:
            balrog();
            balrog(int newStrength, int newHitpoints);
            std::string getSpecies() const;
            int getDamage() const;
    };
}

#endif /* balrog_hpp */
