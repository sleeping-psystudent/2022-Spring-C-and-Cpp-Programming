#include "subject.h"

using namespace std;

Subject::Subject(std::string name){
    this->name = name;
    this->observers = std::vector<Observer *>();
}

// TODO: 完成其餘成員函數
void Subject::addObserver(Observer *observer){
    //*observer=&name;
    observers.push_back(observer);
}

void Subject::notifyObservers(std::string message){
    vector<Observer *>::iterator it=observers.begin();
    while(it!=observers.end()){
        (*it)->notify(message, name);
        it++;
    }
}
