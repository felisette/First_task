#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "DB.h"

using namespace std;

class Solver: public DB{
public:
    Solver (ifstream &f_in);
    double length_path(vector<int> p);
    double solve ();
};