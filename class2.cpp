#include <iostream>
class name_outter {
private:
  class name_inner {
  private:
    void print(int e,int f)
    {
      std::cout << "You are accessing a private function " <<e*f<< '\n';
    }
  public:
    void hello(){
    std::cout << "Hello World" <<'\n';
    }
    void callprint(int c,int d){
    print(c,d);
  }
  };
public:
  name_inner a;
  void func1(int a,int b)
  {
    name_outter::a.callprint(a,b);
  }
  void func2(){
    a.hello();
  }
};
int main(int argc, char const *argv[]) {
  name_outter obj;
  obj.func1(5,2);
  obj.func2();
  return 0;
}
