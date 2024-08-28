#include <iostream>

struct character
{
    const char* name = "unknown";
    int health = 0;
    int armor = 0;
};

void take_damage(character* person, int damage)
{
    std::cout << person->name << " took damage: -" << damage << std::endl;
    person->armor -= damage;
    if (person->armor < 0)
    {
        person->health += person->armor;
        person->armor = 0;
    }
}

int main()
{
    character person = {"Thrall", 100};
    person.armor = 20;
    take_damage(&person, 30);
    std::cout << "Health: " << person.health << " Armor:" << person.armor << std::endl;
    
}

