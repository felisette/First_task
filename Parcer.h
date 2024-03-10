#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

class Parcer{
protected:
    vector <double> x;
    vector <double> y;
    int N;
public:
    Parcer (ifstream &f_in);
};
