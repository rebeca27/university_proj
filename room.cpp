#include "pch.h"
#include "room.h"
#include <iostream>


room::room()
{
}


room::~room()
{
}

void AddRole(role* role)
{
    mRoles.push_back(role);
}
