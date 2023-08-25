#include "Soldier.h"
#include <iostream>

using namespace std;

Soldier::Soldier(string name)
{
    this->_name = name;
    this->_ptrGun = nullptr;
}

void Soldier::addGun(Gun *ptrGun)
{
    this->_ptrGun = ptrGun;
}

void Soldier::addBulletToGun(int num)
{
    cout << "add " << num << ((num>1)?" bullets ":" bullet ")
         << "to gun" << endl;

    if (!this->_ptrGun)
    {
        cout << "The Soldier has no Gun" << endl;
        return;
    }

    this->_ptrGun->addBullet(num);
    cout << " the number of bullet remaining is increased to "
         << this->_ptrGun->_bulletCount << endl;
}

bool Soldier::fire()
{
    if (!this->_ptrGun->shoot())
    {
        return false;
    }

    cout << "fire!" << endl;
    cout << "the number of bullet remaining is "
         << this->_ptrGun->_bulletCount << endl;
    return true;
}

Soldier::~Soldier()
{
    if (this->_ptrGun == nullptr)
    {
        return;
    }

    delete this->_ptrGun;
    this->_ptrGun = nullptr;
}