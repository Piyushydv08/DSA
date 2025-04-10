#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {

    //creation
    unordered_map<string,int> m;

    //insertion

    //1
    pair<string,int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair<string,int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //what will happen - updation in 3
    m["mera"] = 2;

    //search
    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    //search for unknown key
    cout << m["unknownkey"] << endl;
    cout << m.at("unknownkey") << endl; //output 0 rahega(entry ban jaati hai corresponding to 0)

    //size
    cout << m.size() << endl;

    //to check presence
    cout << m.count("love") << endl;
    cout << m.count("hate") << endl;
    
    //erase
    m.erase("love");
    cout << m.size() << endl;

    //iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end()) {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}