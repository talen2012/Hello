#pragma once
#include <string>

class Gun
{
public:
    Gun(std::string type)
    {
        this->_bulletCount = 0;
        this->_type = type;
    }

    void addBullet(int bulletNumber);
    bool shoot();

private:
    std::string _type;

public:
    int _bulletCount;
};