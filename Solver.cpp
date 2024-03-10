#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "Solver.h"

using namespace std;

Solver::Solver (ifstream &f_in): DB(f_in){
}

double Solver::length_path(vector<int> p){
    double dist=0;
    for (int i=0; i<N-1; i++) {
            dist=dist+G[p[i]][p[i + 1]];
        }
    dist=dist+G[p[N-1]][p[0]];
    return dist;
}//функция для расчета длины пути

double Solver::solve(){
    vector<int> p=path;
    int dist=length_path(p);
    bool flag=true;
    while (flag) {
        flag=false;
        for (int i=0; i<N; i++)
            for (int j=i+1; j<N; j++) {
                swap(p[i], p[j]);
                int new_dist=length_path(p);
                if (new_dist<dist) {
                    dist=new_dist;
                    flag=true;
                }
                else swap(p[i], p[j]);
            }
    }
    len=dist;
    path=p;
    return 0;
}
