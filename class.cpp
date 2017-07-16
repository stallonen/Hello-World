#include <iostream>
#include <string>
#include <sstream>
using namespace std;
	class anubhab{
	    int age;
	    std::string name;
	public:
	int know_data();
	int init();
};
int anubhab::init(){
    std::cin >>age;
    std::getline(std::cin,name);
}
int anubhab::know_data(){
    std::cout << name << std::endl;
    std::cout << age << std::endl;
}
int main() {
    anubhab crap;
    crap.init();
    crap.know_data();
}
