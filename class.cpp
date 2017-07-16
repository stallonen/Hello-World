#include <iostream>
#include <string>
#include <sstream>
using namespace std;
	class test_drive{ 
    // private variables 
	    int age;
      string name;
      //public functions 
	public:
	int know_data();
	int init();
};
int test_drive::init(){ //input data from the console
    cin >>age;
    getline(cin,name);
}
int test_drive::know_data(){ //output data to the console 
    cout << name <<endl;
    cout << age <<endl;
}
int main() {
    test_drive obj; //class object 
    obj.init(); //initializing member function init 
    obj.know_data(); //initializing member function know_data
}
