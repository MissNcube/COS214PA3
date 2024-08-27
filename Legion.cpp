#include "Legion.h"
#include <iostream>
#include <algorithm>
using namespace std;

Legion::Legion()
{
    cout << "Legion created "<< endl;
}
Legion::~Legion()
{
    cout << "Legion destroyed "<< endl;
}


void Legion::add(UnitComponent* component)
{
    cout << "Adding "<< component << endl;
    units.push_back(component);
}
void Legion::remove(UnitComponent* component)
{
     cout << "Removing "<< component << endl;
    auto it = std::find_if(units.begin(), units.end(),
                           [&component](UnitComponent* u) { return u == component; });
    if (it != units.end()) {
        units.erase(it);
    }
}
void Legion::move()
{
    cout<<"Legion is moving as a unit "<<endl;
    for(UnitComponent* component : units)
    {
        component->move();
        }
}
void Legion::fight()
{
    cout<<"Legion is fighting in battle "<<endl;
    for(UnitComponent* component : units)
    {
        component->fight();
        }
}
