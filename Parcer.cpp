#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>
#include "Parcer.h"
 
using namespace std;
 
Parcer::Parcer (ifstream &f_in){
    string s;
    f_in>>s;
    int n1{stoi(s)};
    N=n1;
    while (!f_in.eof ())
    {
      f_in >> s;
      double X{stod (s)};
      x.push_back(X);
      f_in >> s;
      double Y{stod (s)};
      y.push_back(Y);
    }
}
