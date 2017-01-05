//
//  cyberdemon.hpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#ifndef cyberdemon_h
#define cyberdemon_h

#include <stdio.h>
#include <iostream>
#include "demon.h"

namespace cs_creature {
    class cyberdemon: public demon {
        public:
            cyberdemon();
            cyberdemon(int newStrength, int newHitpoints);
            std::string getSpecies() const;
    };
}

#endif /* cyberdemon_hpp */
