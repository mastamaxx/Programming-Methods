//
//  main.cpp
//  CIS 278 Project 12
//
//  Created by MarkMax on 7/27/16.
//  Copyright © 2016 MarkMax. All rights reserved.
//

#include <iostream>
#include "creature.h"
#include "demon.h"
#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"

using namespace std;
using namespace cs_creature;

void battleArena(creature& creature1, creature& creature2);

int main()
{
    srand((time(0)));
    
    cout << "An elf and a balrog with variable HP and Strength" << endl;
    cout << "will battle 5 times now in this simulation." << endl;
    cout << "Elves are powerful magic casters with average HP" << endl;
    cout << "Balrogs are fast and deadly but can be squashed easy" << endl;
    cout << endl;
    
    for (int i = 0; i < 5; i++) {
    
        elf e(rand() % 20 + 100,rand() % 20 + 110);
        balrog b(rand() % 20 + 105,rand() % 20 + 70);;
    
        battleArena(e, b);
        
        cout << endl;
    }
    
    cout << "An elf and a human with variable HP and Strength" << endl;
    cout << "will battle 5 times now in this simulation." << endl;
    cout << "Elves are powerful magic casters with average HP" << endl;
    cout << "Humans are stupid and weak, but have willpower" << endl;
    cout << endl;
    
    for (int i = 0; i < 5; i++) {
        
        elf e(rand() % 20 + 100,rand() % 20 + 110);
        human h(rand() % 20 + 70,rand() % 20 + 237);;
        
        battleArena(e, h);
        
        cout << endl;
    }
    
    cout << "An elf and a cyberdemon with variable HP and Strength" << endl;
    cout << "will battle 5 times now in this simulation." << endl;
    cout << "Elves are powerful magic casters with average HP" << endl;
    cout << "Cyberdemons are powerful creatures with average HP" << endl;
    cout << endl;
    
    for (int i = 0; i < 5; i++) {
        
        elf e(rand() % 20 + 100,rand() % 20 + 110);
        cyberdemon c(rand() % 20 + 100,rand() % 20 + 110);;
        
        battleArena(e, c);
        
        cout << endl;
    }

    
    cout << "A human and a cyberdemon with variable HP and Strength" << endl;
    cout << "will battle 5 times now in this simulation." << endl;
    cout << "Humans are stupid and weak, but have willpower" << endl;
    cout << "Cyberdemons are powerful creatures with average HP" << endl;
    cout << endl;
    
    for (int i = 0; i < 5; i++) {
        
        human h(rand() % 20 + 70,rand() % 20 + 237);
        cyberdemon c(rand() % 20 + 100,rand() % 20 + 110);;
        
        battleArena(h, c);
        
        cout << endl;
    }
    
    cout << "A human and a balrog with variable HP and Strength" << endl;
    cout << "will battle 5 times now in this simulation." << endl;
    cout << "Humans are stupid and weak, but have willpower" << endl;
    cout << "Balrogs are fast and deadly but can be squashed easy" << endl;
    cout << endl;
    
    for (int i = 0; i < 5; i++) {
        
        human h(rand() % 20 + 70,rand() % 20 + 237);
        balrog b(rand() % 20 + 105,rand() % 20 + 70);;
        
        battleArena(h, b);
        
        cout << endl;
    }
    
    cout << "A cyberdemon and a balrog with variable HP and Strength" << endl;
    cout << "will battle 5 times now in this simulation." << endl;
    cout << "Cyberdemons are powerful creatures with average HP" << endl;
    cout << "Balrogs are fast and deadly but can be squashed easy" << endl;
    cout << endl;
    
    for (int i = 0; i < 5; i++) {
        
        cyberdemon c(rand() % 20 + 125,rand() % 20 + 110);
        balrog b(rand() % 20 + 105,rand() % 20 + 70);;
        
        battleArena(c, b);
        
        cout << endl;
    }
}


void battleArena(creature& creature1, creature& creature2) {
    
    cout << "Today we have a " << creature1.getSpecies() << " with "
            << creature1.getStrength() << "/" << creature1.getHitpoints()
            << " ST/HP" << endl;
    cout << "battling a " << creature2.getSpecies() << " with "
            << creature2.getStrength() << "/" << creature2.getHitpoints()
            << " ST/HP" << endl;
    cout << endl;
    
    int round = 0;
    
    while (creature1.getHitpoints() > 0 && creature2.getHitpoints() >0) {
        cout << "Round #" << ++round << "!" << endl;
        
        int c1Damage = creature1.getDamage();
        cout << " Total " << creature1.getSpecies() << " damage: " << c1Damage << endl;
        cout << endl;
        int c2Damage = creature2.getDamage();
        cout << " Total " << creature2.getSpecies() << " damage: " << c2Damage << endl;
        cout << endl;
        
        creature1.changeHitpoints(creature1.getHitpoints() - c2Damage);
        creature2.changeHitpoints(creature2.getHitpoints() - c1Damage);
        
        cout << endl << "Hitpoints remaining:" << endl;
        cout << creature1.getSpecies() << ": " << creature1.getHitpoints() << endl;
        cout << creature2.getSpecies() << ": " << creature2.getHitpoints() << endl;
        cout << endl;
    }
    
    if (creature1.getHitpoints() < 0 && creature2.getHitpoints() < 0) {
        cout << "Tie! After " << round << " rounds";
    } else if (creature1.getHitpoints() < 0) {
        cout << creature2.getSpecies() << " WINS! After " << round << " rounds";
    } else {
        cout << creature1.getSpecies() << " WINS! After " << round << " rounds";
    }
    
    cout << endl;
}


/*

 An elf and a balrog with variable HP and Strength
 will battle 5 times now in this simulation.
 Elves are powerful magic casters with average HP
 Balrogs are fast and deadly but can be squashed easy
 
 Today we have a elf with 110/121 ST/HP
 battling a balrog with 124/71 ST/HP
 
 Round #1!
 The elf attacks for 98 points!
 Total elf damage: 98
 
 The balrog attacks for 51 points!
 Balrog speed attack inflicts 34 additional damage points!
 Total balrog damage: 85
 
 
 Hitpoints remaining:
 elf: 36
 balrog: -27
 
 elf WINS! After 1 rounds
 
 Today we have a elf with 114/116 ST/HP
 battling a balrog with 121/82 ST/HP
 
 Round #1!
 The elf attacks for 10 points!
 Magical attack inflicts 10 additional damage points!
 Total elf damage: 20
 
 The balrog attacks for 27 points!
 Balrog speed attack inflicts 103 additional damage points!
 Total balrog damage: 130
 
 
 Hitpoints remaining:
 elf: -14
 balrog: 62
 
 balrog WINS! After 1 rounds
 
 Today we have a elf with 108/116 ST/HP
 battling a balrog with 123/77 ST/HP
 
 Round #1!
 The elf attacks for 9 points!
 Total elf damage: 9
 
 The balrog attacks for 14 points!
 Balrog speed attack inflicts 17 additional damage points!
 Total balrog damage: 31
 
 
 Hitpoints remaining:
 elf: 85
 balrog: 68
 
 Round #2!
 The elf attacks for 44 points!
 Total elf damage: 44
 
 The balrog attacks for 123 points!
 Balrog speed attack inflicts 104 additional damage points!
 Total balrog damage: 227
 
 
 Hitpoints remaining:
 elf: -142
 balrog: 24
 
 balrog WINS! After 2 rounds
 
 Today we have a elf with 110/117 ST/HP
 battling a balrog with 117/72 ST/HP
 
 Round #1!
 The elf attacks for 39 points!
 Total elf damage: 39
 
 The balrog attacks for 51 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 110 additional damage points!
 Total balrog damage: 211
 
 
 Hitpoints remaining:
 elf: -94
 balrog: 33
 
 balrog WINS! After 1 rounds
 
 Today we have a elf with 116/121 ST/HP
 battling a balrog with 116/79 ST/HP
 
 Round #1!
 The elf attacks for 39 points!
 Magical attack inflicts 39 additional damage points!
 Total elf damage: 78
 
 The balrog attacks for 27 points!
 Balrog speed attack inflicts 80 additional damage points!
 Total balrog damage: 107
 
 
 Hitpoints remaining:
 elf: 14
 balrog: 1
 
 Round #2!
 The elf attacks for 44 points!
 Total elf damage: 44
 
 The balrog attacks for 30 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 106 additional damage points!
 Total balrog damage: 186
 
 
 Hitpoints remaining:
 elf: -172
 balrog: -43
 
 Tie! After 2 rounds
 
 An elf and a human with variable HP and Strength
 will battle 5 times now in this simulation.
 Elves are powerful magic casters with average HP
 Humans are stupid and weak, but have willpower
 
 Today we have a elf with 118/116 ST/HP
 battling a human with 75/243 ST/HP
 
 Round #1!
 The elf attacks for 80 points!
 Total elf damage: 80
 
 The human attacks for 7 points!
 Total human damage: 7
 
 
 Hitpoints remaining:
 elf: 109
 human: 163
 
 Round #2!
 The elf attacks for 30 points!
 Total elf damage: 30
 
 The human attacks for 42 points!
 Total human damage: 42
 
 
 Hitpoints remaining:
 elf: 67
 human: 133
 
 Round #3!
 The elf attacks for 83 points!
 Magical attack inflicts 83 additional damage points!
 Total elf damage: 166
 
 The human attacks for 44 points!
 Total human damage: 44
 
 
 Hitpoints remaining:
 elf: 23
 human: -33
 
 elf WINS! After 3 rounds
 
 Today we have a elf with 107/129 ST/HP
 battling a human with 73/240 ST/HP
 
 Round #1!
 The elf attacks for 14 points!
 Magical attack inflicts 14 additional damage points!
 Total elf damage: 28
 
 The human attacks for 46 points!
 Total human damage: 46
 
 
 Hitpoints remaining:
 elf: 83
 human: 212
 
 Round #2!
 The elf attacks for 25 points!
 Magical attack inflicts 25 additional damage points!
 Total elf damage: 50
 
 The human attacks for 42 points!
 Total human damage: 42
 
 
 Hitpoints remaining:
 elf: 41
 human: 162
 
 Round #3!
 The elf attacks for 13 points!
 Magical attack inflicts 13 additional damage points!
 Total elf damage: 26
 
 The human attacks for 44 points!
 Total human damage: 44
 
 
 Hitpoints remaining:
 elf: -3
 human: 136
 
 human WINS! After 3 rounds
 
 Today we have a elf with 109/111 ST/HP
 battling a human with 85/246 ST/HP
 
 Round #1!
 The elf attacks for 6 points!
 Total elf damage: 6
 
 The human attacks for 37 points!
 Total human damage: 37
 
 
 Hitpoints remaining:
 elf: 74
 human: 240
 
 Round #2!
 The elf attacks for 93 points!
 Magical attack inflicts 93 additional damage points!
 Total elf damage: 186
 
 The human attacks for 25 points!
 Total human damage: 25
 
 
 Hitpoints remaining:
 elf: 49
 human: 54
 
 Round #3!
 The elf attacks for 31 points!
 Magical attack inflicts 31 additional damage points!
 Total elf damage: 62
 
 The human attacks for 36 points!
 Total human damage: 36
 
 
 Hitpoints remaining:
 elf: 13
 human: -8
 
 elf WINS! After 3 rounds
 
 Today we have a elf with 107/121 ST/HP
 battling a human with 80/248 ST/HP
 
 Round #1!
 The elf attacks for 14 points!
 Total elf damage: 14
 
 The human attacks for 77 points!
 Total human damage: 77
 
 
 Hitpoints remaining:
 elf: 44
 human: 234
 
 Round #2!
 The elf attacks for 41 points!
 Magical attack inflicts 41 additional damage points!
 Total elf damage: 82
 
 The human attacks for 60 points!
 Total human damage: 60
 
 
 Hitpoints remaining:
 elf: -16
 human: 152
 
 human WINS! After 2 rounds
 
 Today we have a elf with 110/110 ST/HP
 battling a human with 85/237 ST/HP
 
 Round #1!
 The elf attacks for 6 points!
 Magical attack inflicts 6 additional damage points!
 Total elf damage: 12
 
 The human attacks for 37 points!
 Total human damage: 37
 
 
 Hitpoints remaining:
 elf: 73
 human: 225
 
 Round #2!
 The elf attacks for 90 points!
 Total elf damage: 90
 
 The human attacks for 46 points!
 Total human damage: 46
 
 
 Hitpoints remaining:
 elf: 27
 human: 135
 
 Round #3!
 The elf attacks for 105 points!
 Magical attack inflicts 105 additional damage points!
 Total elf damage: 210
 
 The human attacks for 31 points!
 Total human damage: 31
 
 
 Hitpoints remaining:
 elf: -4
 human: -75
 
 Tie! After 3 rounds
 
 An elf and a cyberdemon with variable HP and Strength
 will battle 5 times now in this simulation.
 Elves are powerful magic casters with average HP
 Cyberdemons are powerful creatures with average HP
 
 Today we have a elf with 119/122 ST/HP
 battling a cyberdemon with 106/122 ST/HP
 
 Round #1!
 The elf attacks for 53 points!
 Magical attack inflicts 53 additional damage points!
 Total elf damage: 106
 
 The cyberdemon attacks for 98 points!
 Total cyberdemon damage: 98
 
 
 Hitpoints remaining:
 elf: 24
 cyberdemon: 16
 
 Round #2!
 The elf attacks for 93 points!
 Magical attack inflicts 93 additional damage points!
 Total elf damage: 186
 
 The cyberdemon attacks for 43 points!
 Total cyberdemon damage: 43
 
 
 Hitpoints remaining:
 elf: -19
 cyberdemon: -170
 
 Tie! After 2 rounds
 
 Today we have a elf with 103/127 ST/HP
 battling a cyberdemon with 119/116 ST/HP
 
 Round #1!
 The elf attacks for 36 points!
 Total elf damage: 36
 
 The cyberdemon attacks for 95 points!
 Demonic attack inflicts 50 additional damage points!
 Total cyberdemon damage: 145
 
 
 Hitpoints remaining:
 elf: -18
 cyberdemon: 80
 
 cyberdemon WINS! After 1 rounds
 
 Today we have a elf with 115/110 ST/HP
 battling a cyberdemon with 102/113 ST/HP
 
 Round #1!
 The elf attacks for 84 points!
 Magical attack inflicts 84 additional damage points!
 Total elf damage: 168
 
 The cyberdemon attacks for 16 points!
 Total cyberdemon damage: 16
 
 
 Hitpoints remaining:
 elf: 94
 cyberdemon: -55
 
 elf WINS! After 1 rounds
 
 Today we have a elf with 115/112 ST/HP
 battling a cyberdemon with 110/116 ST/HP
 
 Round #1!
 The elf attacks for 105 points!
 Total elf damage: 105
 
 The cyberdemon attacks for 38 points!
 Total cyberdemon damage: 38
 
 
 Hitpoints remaining:
 elf: 74
 cyberdemon: 11
 
 Round #2!
 The elf attacks for 61 points!
 Total elf damage: 61
 
 The cyberdemon attacks for 103 points!
 Total cyberdemon damage: 103
 
 
 Hitpoints remaining:
 elf: -29
 cyberdemon: -50
 
 Tie! After 2 rounds
 
 Today we have a elf with 102/128 ST/HP
 battling a cyberdemon with 110/115 ST/HP
 
 Round #1!
 The elf attacks for 2 points!
 Total elf damage: 2
 
 The cyberdemon attacks for 34 points!
 Total cyberdemon damage: 34
 
 
 Hitpoints remaining:
 elf: 94
 cyberdemon: 113
 
 Round #2!
 The elf attacks for 27 points!
 Total elf damage: 27
 
 The cyberdemon attacks for 110 points!
 Demonic attack inflicts 50 additional damage points!
 Total cyberdemon damage: 160
 
 
 Hitpoints remaining:
 elf: -66
 cyberdemon: 86
 
 cyberdemon WINS! After 2 rounds
 
 A human and a cyberdemon with variable HP and Strength
 will battle 5 times now in this simulation.
 Humans are stupid and weak, but have willpower
 Cyberdemons are powerful creatures with average HP
 
 Today we have a human with 80/252 ST/HP
 battling a cyberdemon with 119/122 ST/HP
 
 Round #1!
 The human attacks for 43 points!
 Total human damage: 43
 
 The cyberdemon attacks for 81 points!
 Total cyberdemon damage: 81
 
 
 Hitpoints remaining:
 human: 171
 cyberdemon: 79
 
 Round #2!
 The human attacks for 35 points!
 Total human damage: 35
 
 The cyberdemon attacks for 50 points!
 Total cyberdemon damage: 50
 
 
 Hitpoints remaining:
 human: 121
 cyberdemon: 44
 
 Round #3!
 The human attacks for 42 points!
 Total human damage: 42
 
 The cyberdemon attacks for 50 points!
 Total cyberdemon damage: 50
 
 
 Hitpoints remaining:
 human: 71
 cyberdemon: 2
 
 Round #4!
 The human attacks for 76 points!
 Total human damage: 76
 
 The cyberdemon attacks for 74 points!
 Total cyberdemon damage: 74
 
 
 Hitpoints remaining:
 human: -3
 cyberdemon: -74
 
 Tie! After 4 rounds
 
 Today we have a human with 75/256 ST/HP
 battling a cyberdemon with 115/111 ST/HP
 
 Round #1!
 The human attacks for 43 points!
 Total human damage: 43
 
 The cyberdemon attacks for 83 points!
 Total cyberdemon damage: 83
 
 
 Hitpoints remaining:
 human: 173
 cyberdemon: 68
 
 Round #2!
 The human attacks for 54 points!
 Total human damage: 54
 
 The cyberdemon attacks for 36 points!
 Demonic attack inflicts 50 additional damage points!
 Total cyberdemon damage: 86
 
 
 Hitpoints remaining:
 human: 87
 cyberdemon: 14
 
 Round #3!
 The human attacks for 13 points!
 Total human damage: 13
 
 The cyberdemon attacks for 106 points!
 Demonic attack inflicts 50 additional damage points!
 Total cyberdemon damage: 156
 
 
 Hitpoints remaining:
 human: -69
 cyberdemon: 1
 
 cyberdemon WINS! After 3 rounds
 
 Today we have a human with 85/237 ST/HP
 battling a cyberdemon with 118/124 ST/HP
 
 Round #1!
 The human attacks for 16 points!
 Total human damage: 16
 
 The cyberdemon attacks for 3 points!
 Total cyberdemon damage: 3
 
 
 Hitpoints remaining:
 human: 234
 cyberdemon: 108
 
 Round #2!
 The human attacks for 16 points!
 Total human damage: 16
 
 The cyberdemon attacks for 5 points!
 Total cyberdemon damage: 5
 
 
 Hitpoints remaining:
 human: 229
 cyberdemon: 92
 
 Round #3!
 The human attacks for 76 points!
 Total human damage: 76
 
 The cyberdemon attacks for 45 points!
 Demonic attack inflicts 50 additional damage points!
 Total cyberdemon damage: 95
 
 
 Hitpoints remaining:
 human: 134
 cyberdemon: 16
 
 Round #4!
 The human attacks for 4 points!
 Total human damage: 4
 
 The cyberdemon attacks for 22 points!
 Total cyberdemon damage: 22
 
 
 Hitpoints remaining:
 human: 112
 cyberdemon: 12
 
 Round #5!
 The human attacks for 47 points!
 Total human damage: 47
 
 The cyberdemon attacks for 54 points!
 Total cyberdemon damage: 54
 
 
 Hitpoints remaining:
 human: 58
 cyberdemon: -35
 
 human WINS! After 5 rounds
 
 Today we have a human with 75/254 ST/HP
 battling a cyberdemon with 109/127 ST/HP
 
 Round #1!
 The human attacks for 71 points!
 Total human damage: 71
 
 The cyberdemon attacks for 70 points!
 Total cyberdemon damage: 70
 
 
 Hitpoints remaining:
 human: 184
 cyberdemon: 56
 
 Round #2!
 The human attacks for 43 points!
 Total human damage: 43
 
 The cyberdemon attacks for 106 points!
 Total cyberdemon damage: 106
 
 
 Hitpoints remaining:
 human: 78
 cyberdemon: 13
 
 Round #3!
 The human attacks for 65 points!
 Total human damage: 65
 
 The cyberdemon attacks for 69 points!
 Total cyberdemon damage: 69
 
 
 Hitpoints remaining:
 human: 9
 cyberdemon: -52
 
 human WINS! After 3 rounds
 
 Today we have a human with 70/252 ST/HP
 battling a cyberdemon with 106/128 ST/HP
 
 Round #1!
 The human attacks for 13 points!
 Total human damage: 13
 
 The cyberdemon attacks for 60 points!
 Demonic attack inflicts 50 additional damage points!
 Total cyberdemon damage: 110
 
 
 Hitpoints remaining:
 human: 142
 cyberdemon: 115
 
 Round #2!
 The human attacks for 30 points!
 Total human damage: 30
 
 The cyberdemon attacks for 77 points!
 Total cyberdemon damage: 77
 
 
 Hitpoints remaining:
 human: 65
 cyberdemon: 85
 
 Round #3!
 The human attacks for 6 points!
 Total human damage: 6
 
 The cyberdemon attacks for 78 points!
 Total cyberdemon damage: 78
 
 
 Hitpoints remaining:
 human: -13
 cyberdemon: 79
 
 cyberdemon WINS! After 3 rounds
 
 A human and a balrog with variable HP and Strength
 will battle 5 times now in this simulation.
 Humans are stupid and weak, but have willpower
 Balrogs are fast and deadly but can be squashed easy
 
 Today we have a human with 78/256 ST/HP
 battling a balrog with 118/78 ST/HP
 
 Round #1!
 The human attacks for 76 points!
 Total human damage: 76
 
 The balrog attacks for 117 points!
 Balrog speed attack inflicts 19 additional damage points!
 Total balrog damage: 136
 
 
 Hitpoints remaining:
 human: 120
 balrog: 2
 
 Round #2!
 The human attacks for 76 points!
 Total human damage: 76
 
 The balrog attacks for 18 points!
 Balrog speed attack inflicts 3 additional damage points!
 Total balrog damage: 21
 
 
 Hitpoints remaining:
 human: 99
 balrog: -74
 
 human WINS! After 2 rounds
 
 Today we have a human with 73/240 ST/HP
 battling a balrog with 119/81 ST/HP
 
 Round #1!
 The human attacks for 62 points!
 Total human damage: 62
 
 The balrog attacks for 84 points!
 Balrog speed attack inflicts 99 additional damage points!
 Total balrog damage: 183
 
 
 Hitpoints remaining:
 human: 57
 balrog: 19
 
 Round #2!
 The human attacks for 24 points!
 Total human damage: 24
 
 The balrog attacks for 75 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 98 additional damage points!
 Total balrog damage: 223
 
 
 Hitpoints remaining:
 human: -166
 balrog: -5
 
 Tie! After 2 rounds
 
 Today we have a human with 84/252 ST/HP
 battling a balrog with 116/87 ST/HP
 
 Round #1!
 The human attacks for 40 points!
 Total human damage: 40
 
 The balrog attacks for 63 points!
 Balrog speed attack inflicts 97 additional damage points!
 Total balrog damage: 160
 
 
 Hitpoints remaining:
 human: 92
 balrog: 47
 
 Round #2!
 The human attacks for 24 points!
 Total human damage: 24
 
 The balrog attacks for 107 points!
 Balrog speed attack inflicts 41 additional damage points!
 Total balrog damage: 148
 
 
 Hitpoints remaining:
 human: -56
 balrog: 23
 
 balrog WINS! After 2 rounds
 
 Today we have a human with 83/246 ST/HP
 battling a balrog with 108/79 ST/HP
 
 Round #1!
 The human attacks for 2 points!
 Total human damage: 2
 
 The balrog attacks for 8 points!
 Balrog speed attack inflicts 22 additional damage points!
 Total balrog damage: 30
 
 
 Hitpoints remaining:
 human: 216
 balrog: 77
 
 Round #2!
 The human attacks for 46 points!
 Total human damage: 46
 
 The balrog attacks for 63 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 13 additional damage points!
 Total balrog damage: 126
 
 
 Hitpoints remaining:
 human: 90
 balrog: 31
 
 Round #3!
 The human attacks for 5 points!
 Total human damage: 5
 
 The balrog attacks for 102 points!
 Balrog speed attack inflicts 47 additional damage points!
 Total balrog damage: 149
 
 
 Hitpoints remaining:
 human: -59
 balrog: 26
 
 balrog WINS! After 3 rounds
 
 Today we have a human with 70/241 ST/HP
 battling a balrog with 117/83 ST/HP
 
 Round #1!
 The human attacks for 67 points!
 Total human damage: 67
 
 The balrog attacks for 117 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 35 additional damage points!
 Total balrog damage: 202
 
 
 Hitpoints remaining:
 human: 39
 balrog: 16
 
 Round #2!
 The human attacks for 29 points!
 Total human damage: 29
 
 The balrog attacks for 50 points!
 Balrog speed attack inflicts 93 additional damage points!
 Total balrog damage: 143
 
 
 Hitpoints remaining:
 human: -104
 balrog: -13
 
 Tie! After 2 rounds
 
 A cyberdemon and a balrog with variable HP and Strength
 will battle 5 times now in this simulation.
 Cyberdemons are powerful creatures with average HP
 Balrogs are fast and deadly but can be squashed easy
 
 Today we have a cyberdemon with 138/122 ST/HP
 battling a balrog with 115/77 ST/HP
 
 Round #1!
 The cyberdemon attacks for 68 points!
 Total cyberdemon damage: 68
 
 The balrog attacks for 57 points!
 Balrog speed attack inflicts 18 additional damage points!
 Total balrog damage: 75
 
 
 Hitpoints remaining:
 cyberdemon: 47
 balrog: 9
 
 Round #2!
 The cyberdemon attacks for 3 points!
 Total cyberdemon damage: 3
 
 The balrog attacks for 8 points!
 Balrog speed attack inflicts 84 additional damage points!
 Total balrog damage: 92
 
 
 Hitpoints remaining:
 cyberdemon: -45
 balrog: 6
 
 balrog WINS! After 2 rounds
 
 Today we have a cyberdemon with 144/124 ST/HP
 battling a balrog with 113/84 ST/HP
 
 Round #1!
 The cyberdemon attacks for 53 points!
 Total cyberdemon damage: 53
 
 The balrog attacks for 107 points!
 Balrog speed attack inflicts 48 additional damage points!
 Total balrog damage: 155
 
 
 Hitpoints remaining:
 cyberdemon: -31
 balrog: 31
 
 balrog WINS! After 1 rounds
 
 Today we have a cyberdemon with 136/116 ST/HP
 battling a balrog with 108/87 ST/HP
 
 Round #1!
 The cyberdemon attacks for 43 points!
 Total cyberdemon damage: 43
 
 The balrog attacks for 90 points!
 Balrog speed attack inflicts 45 additional damage points!
 Total balrog damage: 135
 
 
 Hitpoints remaining:
 cyberdemon: -19
 balrog: 44
 
 balrog WINS! After 1 rounds
 
 Today we have a cyberdemon with 125/110 ST/HP
 battling a balrog with 123/79 ST/HP
 
 Round #1!
 The cyberdemon attacks for 35 points!
 Total cyberdemon damage: 35
 
 The balrog attacks for 72 points!
 Balrog speed attack inflicts 62 additional damage points!
 Total balrog damage: 134
 
 
 Hitpoints remaining:
 cyberdemon: -24
 balrog: 44
 
 balrog WINS! After 1 rounds
 
 Today we have a cyberdemon with 132/113 ST/HP
 battling a balrog with 119/76 ST/HP
 
 Round #1!
 The cyberdemon attacks for 105 points!
 Total cyberdemon damage: 105
 
 The balrog attacks for 3 points!
 Balrog speed attack inflicts 52 additional damage points!
 Total balrog damage: 55
 
 
 Hitpoints remaining:
 cyberdemon: 58
 balrog: -29
 
 cyberdemon WINS! After 1 rounds
 
 Program ended with exit code: 0

*/