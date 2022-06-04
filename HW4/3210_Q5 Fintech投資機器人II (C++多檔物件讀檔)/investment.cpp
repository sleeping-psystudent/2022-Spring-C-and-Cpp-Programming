#include "investment.h"
#include <sstream>
#include <string>
#include <cstdlib>

Investment::Investment(): date(""), high(0), low(0){
}

Investment::Investment(string data){
    // TODO: 需實做建構子
    string str;
    stringstream ss;
    ss<<data;
    getline(ss, str, ',');
    date=str;
    getline(ss, str, ',');
    low=atoi(str.c_str());
    getline(ss, str, ',');
    high=atoi(str.c_str());
}
