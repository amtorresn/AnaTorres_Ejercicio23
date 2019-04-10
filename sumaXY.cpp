#include <fstream>
#include <iostream>
using namespace std;
 
double lee(string filename);

int main () {
  string file_x;
  file_x = "valores_x.txt";
  cout << "Suma x: "<< lee(file_x) << endl;

  string file_y;
  file_y = "valores_y.txt";
  cout << "Suma y: "<< lee(file_y) << endl;
  return 0;
}

double lee(string filename){
    
  ifstream infile; 
  string line;

  infile.open(filename); 
  
  // cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  int i = 0;
  // cout << "z " << infile.size<< endl;
  double z;
    
  while(infile && i<20 ){
    z += std::stod(line);
    // cout << "z " << z[i] << endl;
    i++;
    getline(infile, line);
  }
    
  infile.close();
    
  return z;
}
