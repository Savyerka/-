//
// Created by чел on 28.05.2023.
//

#ifndef TIP_BAY_H
#define TIP_BAY_H
#include "sea.h"
#include <string>

class Bay : public Sea {
protected:
    string nearby;
public:
    Bay();
    Bay(string name, string location, float size, float depth, string nearby, string type);
    virtual void showInfo();
};


#endif //TIP_BAY_H
