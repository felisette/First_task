#include <iostream>
#include <string.h>
#include <math.h>
#include <fstream>
#include <sstream>
#include <vector>
#include "DB.h"

using namespace std;

double DB::length (int i, int j){
    return sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
}

DB::DB (ifstream &f_in): Parcer(f_in){
    for (int i=0; i<N; i++){
        G.push_back(vector<double> (N, 0));
    }
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            if (i!=j) G[i][j]=length(i, j);
        }
    }
    for(int i=0; i<N; i++){
        path.push_back(i);
    }
    len=0;
}

void DB::write_file(){
    ofstream out;
    out.open("answer.txt");
    if (out.is_open()){
        out << len<<"\n";
        for (int i=0; i<=N; i++)
        out<<path[i]<<"  ";
    }
    out.close();
}
