#ifndef COMBAT_H
#define COMBAT_H

double calculate_damage(int bravery, int attack, int defense);
void heal(double *health, int *potions, const int potion_strength);

#endif