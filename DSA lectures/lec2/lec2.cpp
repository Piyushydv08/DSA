#include<iostream>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this -> age;
    }
    void setWeight(int w){
        this -> weight = w;
    }
    
}