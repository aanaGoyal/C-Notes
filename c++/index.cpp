// Instead of writing all the libraries or iostream everytime we can write --->>
#include<bits/stdc++.h>

/* endl is similar to \n.  */
// #include<iostream>
// iostream is a library.
int main(){
    std::cout << "Heyy String" << std::endl;
    std::cout << "Heyy String";
    // cout prints the statement we want to print.
    return 0;
}
/*          OR            */
int next_line(){
    std::cout << "Hyy" << "\n";
    std::cout << "Hello";
    return 0;
}



// To stop the prblm of writinf std again and again we use namespace std.
// It will autmatically use std for all the functions.
using namespace std;
int without_std(){
    cout << "Hello World!" << endl << "Hello!!";
    return 0;
}

