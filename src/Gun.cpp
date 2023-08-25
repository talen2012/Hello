#include "Gun.h"
#include <iostream>
using namespace std;

void Gun::addBullet(int bulletNumber)
{
    this->_bulletCount += bulletNumber;
    if (this->_bulletCount > 30)
    {
        cout << "the max capacity is 30!" << endl;
        this->_bulletCount = 30;
    }
}

bool Gun::shoot()
{
    if (this->_bulletCount <= 0)
    {
        cout << "there is no bullet!" << endl;
        return false;
    }

    this->_bulletCount -= 1;
    return true;
}