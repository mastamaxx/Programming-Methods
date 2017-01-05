//
//  creature.hpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#ifndef creature_h
#define creature_h

#include <stdio.h>

namespace cs_creature {
    class creature {
        private:
            int strength;
            int hitpoints;
        public:
            creature();
            creature(int newStrength, int newHitpoints);
            virtual std::string getSpecies() const = 0;
            virtual int getDamage() const;
            void changeStrength(const int newStrength);
            void changeHitpoints(const int newHitpoints);
            int getStrength() const;
            int getHitpoints() const;
    };
}



#endif /* creature_h */

/*
 default human strength/hitpoints: 10/10
 default elf strength/hitpoints: 10/10
 default cyberdemon strength/hitpoints: 10/10
 default balrog strength/hitpoints: 10/10
 non-default human strength/hitpoints: 20/30
 non-default elf strength/hitpoints: 40/50
 non-default cyberdemon strength/hitpoints: 60/70
 non-default balrog strength/hitpoints: 80/90
 
 
 Examples of human damage:
 The human attacks for 2 points!
 Total damage = 2
 
 The human attacks for 1 points!
 Total damage = 1
 
 The human attacks for 18 points!
 Total damage = 18
 
 The human attacks for 10 points!
 Total damage = 10
 
 The human attacks for 13 points!
 Total damage = 13
 
 The human attacks for 17 points!
 Total damage = 17
 
 The human attacks for 20 points!
 Total damage = 20
 
 The human attacks for 17 points!
 Total damage = 17
 
 The human attacks for 19 points!
 Total damage = 19
 
 The human attacks for 11 points!
 Total damage = 11
 
 
 Examples of elf damage:
 The elf attacks for 2 points!
 Total damage = 2
 
 The elf attacks for 21 points!
 Total damage = 21
 
 The elf attacks for 19 points!
 Total damage = 19
 
 The elf attacks for 11 points!
 Magical attack inflicts 11 additional damage points!
 Total damage = 22
 
 The elf attacks for 22 points!
 Total damage = 22
 
 The elf attacks for 12 points!
 Total damage = 12
 
 The elf attacks for 14 points!
 Magical attack inflicts 14 additional damage points!
 Total damage = 28
 
 The elf attacks for 15 points!
 Total damage = 15
 
 The elf attacks for 22 points!
 Magical attack inflicts 22 additional damage points!
 Total damage = 44
 
 The elf attacks for 26 points!
 Total damage = 26
 
 
 Examples of cyberdemon damage:
 The cyberdemon attacks for 58 points!
 Total damage = 58
 
 The cyberdemon attacks for 59 points!
 Total damage = 59
 
 The cyberdemon attacks for 50 points!
 Total damage = 50
 
 The cyberdemon attacks for 32 points!
 Total damage = 32
 
 The cyberdemon attacks for 23 points!
 Total damage = 23
 
 The cyberdemon attacks for 21 points!
 Total damage = 21
 
 The cyberdemon attacks for 12 points!
 Total damage = 12
 
 The cyberdemon attacks for 36 points!
 Total damage = 36
 
 The cyberdemon attacks for 13 points!
 Demonic attack inflicts 50 additional damage points!
 Total damage = 63
 
 The cyberdemon attacks for 32 points!
 Total damage = 32
 
 
 Examples of balrog damage:
 The balrog attacks for 3 points!
 Balrog speed attack inflicts 30 additional damage points!
 Total damage = 33
 
 The balrog attacks for 41 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 54 additional damage points!
 Total damage = 145
 
 The balrog attacks for 13 points!
 Balrog speed attack inflicts 72 additional damage points!
 Total damage = 85
 
 The balrog attacks for 20 points!
 Balrog speed attack inflicts 36 additional damage points!
 Total damage = 56
 
 The balrog attacks for 10 points!
 Balrog speed attack inflicts 56 additional damage points!
 Total damage = 66
 
 The balrog attacks for 44 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 31 additional damage points!
 Total damage = 125
 
 The balrog attacks for 53 points!
 Balrog speed attack inflicts 57 additional damage points!
 Total damage = 110
 
 The balrog attacks for 25 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 33 additional damage points!
 Total damage = 108
 
 The balrog attacks for 46 points!
 Balrog speed attack inflicts 19 additional damage points!
 Total damage = 65
 
 The balrog attacks for 4 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 33 additional damage points!
 Total damage = 87
*/