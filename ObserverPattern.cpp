#include <bits/stdc++.h>

using namespace std;

class ObserverInf;
class ObservableInf;

class ObserverInf {
    protected:
    ObservableInf* observable;
    public:
    ObserverInf(ObservableInf* observable):observable(observable){
    }
    virtual void notify() = 0;
};

class ObervableInf {
    protected:
        string state;
    public:
        string getState(){
            return state;
        }
        void setState(string state){
            if(state != this->state){
                this->state = state;
            }
        }   
};

int main(){
    cout << "Hello World" << endl;
}
