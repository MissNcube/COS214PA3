#include "Infantry.h"

Infantry::Infantry()
{
    cout<< "Infantry created "<<endl;    
}
Infantry::~Infantry()
{
    cout<< "Infantry destroyed "<<endl;
}
void Infantry::move()
{
    cout<<"Infantry is moving"<<endl;
}
void Infantry::attack()
{
    cout<<"Infantry is attacking"<<endl;
}