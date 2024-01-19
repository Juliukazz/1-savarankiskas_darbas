#include <algorithm>
#include <array>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>

using std::accumulate;
using std::array;
using std::cerr;
using std::cin;
using std::cout;
using std::deque;
using std::domain_error;
using std::endl;
using std::fixed;
using std::getline;
using std::ifstream;
using std::istream;
using std::istringstream;
using std::left;
using std::list;
using std::ofstream;
using std::ostream;
using std::right;
using std::setprecision;
using std::setw;
using std::sort;
using std::string;
using std::stringstream;
using std::to_string;
using std::vector;

extern char skaiciavimo_Strategija;
extern string failoVardas;

class studentas {
  string vard, pav;
  vector<int> paz; 
  int egz;        
  float rez;       
public:
  studentas(); 
  studentas(string v, string p, vector<int> pp,
            int e);                 
  studentas(const studentas &temp); 
  studentas &
  operator=(const studentas &temp); 
  ~studentas();                   

  inline string getVardas() { return vard; }          
  inline size_t getPazNr() { return paz.size(); }      
  inline float getGal() { return rez; }              
  string getPavarde() const;                        
  int getND(int indeksas) const;                     
  int getEgzaminas() const;                            
  int getRezultatas() const;                          
  inline size_t getPazNr() const { return paz.size(); } 

  inline void setVardas(string t) { vard = t; }

  void printas();
  void
  printasRez();
  void rezVid();
  void rezMed();

  double mediana(vector<int> vec);

  void operator<<(std::ostream &output);
  void operator>>(std::istream &input);
};