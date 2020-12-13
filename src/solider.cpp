#include "solider.h"
#include <iostream>

void Solider::getGun(std::string gunName)
{
    myGun = std::unique_ptr<Gun>(new Gun(gunName));
}
void Solider::addBulletToGun(int bulletCount)
{
    myGun->addBullet(bulletCount);
}
bool Solider::fire()
{
    return myGun->shoot();
}