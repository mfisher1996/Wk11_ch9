//
//  stateData.h
//  Wk11_ch9
//
//  Created by Mason Fisher on 11/11/18.
//  Copyright © 2018 Mason Fisher. All rights reserved.
//

#ifndef stateData_h
#define stateData_h

#include <iostream>
using namespace std;

class stateData{
private:
    string name;
    string capital;
    int size;
    int yearOfAd;
    int order;
public:
    void setStateInfo(string state, string cap, int area, int year, int num);
    void getStateInfo(string & state, string & cap, int & area, int & year, int & num);
    bool operator ==(stateData otherState){return (name == otherState.name);};
    bool operator<(stateData otherState){return (name<otherState.name);};
    bool operator>(stateData otherState){return (name>otherState.name);};
    stateData(){name = ""; capital = "";};
    ~stateData(){};
};

void stateData::setStateInfo(string state, string cap, int area, int year, int num){
    name = state;
    capital = cap;
    size = area;
    yearOfAd = year;
    order = num;
}

void stateData::getStateInfo(string & state, string & cap, int & area, int & year, int & num){
    state = name;
    cap = capital;
    area = size;
    year = yearOfAd;
    num = order;
}

#endif /* stateData_h */
