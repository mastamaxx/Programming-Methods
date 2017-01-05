//
//  demon.hpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#ifndef demon_h
#define demon_h

#include <stdio.h>
#include <iostream>
#include "creature.h"

namespace cs_creature {
    class demon: public creature {
        public:
            demon();
            demon(int newStrength, int newHitpoints);
            virtual std::string getSpecies() const = 0;
            virtual int getDamage() const;
    };
}


#endif /* demon_h */
