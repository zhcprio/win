#include "gun.h"
#include <iostream>

void Gun::addBullet(int _bulletCount)
{
    bulletCount += _bulletCount;
}

bool Gun::shoot()
{
    if (bulletCount == 0)
    {
        std::cout << "no bullet,shoot failed!" << std::endl;
        return false;
    }
    else
    {
        bulletCount--;
        std::cout << "shoot successfully!!!!!!" << std::endl;
        return true;
    }
}