#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3};
    /* 1. SIZE --->>       */
    cout << "size: " << vec.size() << endl;

    /* 2. PUSH_BACK --->>       */
    vec.push_back(4);
    cout << "size: " << vec.size() << endl;

    /* 3. POP_BACK --->>        */
    vec.pop_back();
    cout << "size: " << vec.size() << endl;

    /* 4. FRONT --->>           */
    cout << "Front_vector: " << vec.front() << endl;

    /* 5. BACK --->>            */
    cout << "Back_vector: " << vec.back() << endl;

    /* 6. AT --->>              */
    cout << vec.at(1) << endl;

    /* 7. CAPACITY --->>        */
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    /* 8. RESIZE --->>          */
    // cout << vec.resize(32,200) << endl;

    /* 9. .INSERT --->>         */
    cout << vec[0] << endl;
    vec.insert(vec.begin()+1,100);
    cout << vec[0] << endl;
}