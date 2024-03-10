#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Parcer.h"

using namespace std;

class DB:public Parcer{
protected:
    vector <vector<double>> G;
    vector <int> path;
    double len;
public:
    DB (ifstream &f_in);
    double length (int i, int j);
    void write_file();
};