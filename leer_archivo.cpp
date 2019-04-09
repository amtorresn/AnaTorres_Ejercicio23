#include <fstream>
#include <iostream>
using namespace std;
 
void lee(string filename);
//char **argv
int main () {
  string file_x;
  file_x = "valores_x.txt";
  lee(file_x);

  string file_y;
  file_y = "valores_y.txt";
  lee(file_y);
  return 0;
}

void lee(string filename){
  ifstream infile; 
  string line;

  infile.open(filename); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  int i = 0;
  cout << "z " << infile.size<< endl;
  double z[20];
    
  while(infile && i<20 ){
    z[i] = std::stod(line);
    cout << "z " << z[i] << endl;
    i++;
    getline(infile, line);
  }

  infile.close();
}




