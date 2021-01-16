#include <iostream>
using namespace std;

//set class and attributes
class employee{
  public:
  string name;
  int year;
  string salary;
  string address;
  };

int main() {
//set objects for employees
employee e1;
e1.name = "Robert";
e1.year = 2018;
e1.salary = "£25000";
e1.address = "64c London Street";

employee e2;
e2.name = "Farah";
e2.year = 2015;
e2.salary = "£35000";
e2.address = "68D Bristol Road";

employee e3;
e3.name = "Satinder";
e3.year = 2019;
e3.salary = "£32500";
e3.address = "26B Salt Street";

//print information
cout <<e1.name<< " "<<e1.year<<" "<<e1.salary<< " "<<e1.address<< endl;
cout <<e2.name<< " "<<e2.year<< " "<<e2.salary<< " "<<e2.address<< endl;
cout <<e3.name<< " "<<e3.year<< " "<<e3.salary<< " "
<<e3.address<< endl;

}