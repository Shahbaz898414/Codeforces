#include <iostream>
using namespace std;
class Car
{
private:
  int price;

public:
  int model_no;
  char name[20];
  void start()
  {
    cout << "Grrrr...starting the car " << name << endl;
    cout<<endl;
  }
  void setPrice(int p)
  {
    if (p > 1000)
    {
      price = p;
    }
    else
    {
      price = 1000;
    }
  }
  int getPrice()
  {
    return price;
    
  }
};
int main()
{
  Car C;
  // Initialisation
  // C.price =500;
  C.model_no = 1001;
  C.name[0] = 's';
  C.name[1] = 'h';
  C.name[2] = 'a';
  C.name[3] = '\0';
  C.start();
  C.setPrice(1200);
  cout << C.getPrice() << endl;
  // cout<<sizeof(C)<<endl; // C is an actual object 28 byte
  // s
      // cout<<sizeof(Car)<<endl; // It will take 28 bytes
      // Car C[100]; //Array an objects
      return 0;
}
