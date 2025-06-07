#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("structured_data");
    string line;
    getline(fin,line);
    fin.close();
    size_t pos1 = line.find(",");
    size_t pos2 = line.find(",");

    ofstream fout("structured_data");
    fout << pos1;

}