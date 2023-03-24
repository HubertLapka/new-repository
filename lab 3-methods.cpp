#include <iostream>
#include <vector>
#include <optional>

using namespace std;

class Pie
{
  private:
     string name;
     string description;
  public:
     Pie Yummy (string new_description)
   {
     this->description = move(new_description);
     return *this;
 
   }
      string Taste()
   {
     return this->description;
   
   };
   

};

class Human
{
  private:
    string name;
    optional<vector<Pie>> favouritePies;
  public:
    void NameHuman (string neww)
  {
    this->name = move (neww);
  }
    void GivePie (const Pie &pie)
  {
    this->favouritePies->push_back(pie);
  }
  Pie EatPie () {
    Pie eaten = this->favouritePies->back();
    this->favouritePies->pop_back();
    return eaten;
  }

};

int main() {
  Human girl;
  girl.NameHuman("Martyna");
  Pie pie;
  Pie sweetPie = pie.Yummy("delicious");
  girl.GivePie(sweetPie);
  Pie tastyPie = girl.EatPie();
  cout << tastyPie.Taste();
 
 
}
