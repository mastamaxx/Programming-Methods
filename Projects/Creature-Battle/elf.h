//
//  elf.hpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#ifndef elf_h
#define elf_h

#include <stdio.h>
#include <iostream>
#include "creature.h"

namespace cs_creature {
    class elf: public creature {
        public:
            elf();
            elf(int newStrength, int newHitpoints);
            std::string getSpecies() const;
            int getDamage() const;
    };
}

#endif /* elf_h */
