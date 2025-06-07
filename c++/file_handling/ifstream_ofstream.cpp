#include<iostream>
// Included the standard fstream class
#include<fstream>
using namespace std;
int main(){
    // Ofstream will provide an output file --->> data.txt
    // Fout --->> Links a stream to the file
    ofstream fout("data.txt");
    // Writes data to the file.
    fout << "Hello, World";
    // Closing the stream or file.
    fout.close();


    // Ifstream will provide an input file.
    // Fin --->> Link the data 
    ifstream fin("data.txt");
    string data_inside_file;
    // Reading data from file and putting it in some variable to access it.
    getline(fin, data_inside_file);
    cout << data_inside_file;
    // Closing the file again.
    fin.close();

    
}