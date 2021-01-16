#include <iostream>
using namespace std;

class employee{
  public:
  string name;
  int year;
  string salary;
  string address;
  };

int main() {
  
employee e1;
e1.name = "Robert";
e1.year = 2018;
e1.salary = "£25000";
e1.address = "64c London Street";

cout <<e1.name<< " "<<e1.year<<" "<<e1.salary<< " "<<e1.address<< endl;
}