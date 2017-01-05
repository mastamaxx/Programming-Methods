//
//  human.hpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#ifndef human_h
#define human_h

#include <stdio.h>
#include <iostream>
#include "creature.h"

namespace cs_creature {
    class human: public creature {
        public:
            human();
            human(int newStrength, int newHitpoints);
            std::string getSpecies() const;
    };
}


#endif /* human_hpp */
