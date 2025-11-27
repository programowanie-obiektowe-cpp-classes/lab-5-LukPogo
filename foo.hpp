#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> temp(people.size());

    int miejsce{};

    for(auto& a : people){
        a.birthday();

        ++miejsce;

        if(a.isMonster())
            temp[people.size() - miejsce] = 'n';
        else
            temp[people.size() - miejsce] = 'y';
    }

    return temp;
}
