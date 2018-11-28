#pragma once
#include <string>
#include <iostream>


class role{

public:
    role(RoleType type);
    enum RoleType
{
    STUDENT_ROLE;
    TEACHER_ROLE;
};
private:
    RoleType mType;
};


