#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int generateData();

int main()
{
    generateData();
}

int generateData ()
{
  int rand();
  ofstream myfile;
  myfile.open ("data.txt");
  myfile<<rand()<<" "<< rand()<<"\n";
  myfile<<rand()<<" "<< rand()<<"\n";
  myfile<<rand()<<" "<< rand()<<"\n";
  myfile<<rand()<<" "<< rand()<<"\n";
  myfile.close();
  system("python3 test.py");
  return 0;
}
