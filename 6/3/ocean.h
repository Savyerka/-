//
// Created by чел on 28.05.2023.
//

#ifndef TIP_OCEAN_H
#define TIP_OCEAN_H

#include <string>

using namespace std;

class Ocean {
protected:
    string name;
    string location;
    float size;
    float depth;
public:
    Ocean();
    Ocean(string name, string location, float size, float depth);
    virtual void showInfo();
};



#endif //TIP_OCEAN_H
