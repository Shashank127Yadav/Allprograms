#include<bits/stdc++.h>
using namespace std;
class Hero
    {
      
      //properties
      private:
      int health;
      
      public:
      
      char level;
      static int timeToComplete;
      //Default constructor
      Hero()
        {        
          cout<<"Constructor Called" << endl;
          
        }

      //Parametrised constructor
      Hero(int health)
      {
        cout<<"this-> " << this << endl;
        this->health=health; //this is a pointer stores address of current object(ramesh)
        
      } 
      
      //Parametric Constructor
      Hero(int health,char level)
      {
        this->level=level;
        this->health=health;
        
      }

      //copy constructor
      Hero(Hero &temp)
      {
        cout << "Copy Constructor Called " <<endl;
        this->health=temp.health;
        this->level=temp.level;
      }

      //Destructor
      ~Hero()
      {
        cout << "Destructor bhai called" << endl;
      }

      void print()
      {
        cout << " health " << this->health << endl;
        cout << " level " << this->level << endl;
      }

      int getHealth()
      {
        return health;
      }
      
      char getLevel()
      {
        return level;
      }
      
      void setHealth(int h)
      {
        health=h;
      }

      void setLevel(char ch)
      {
        level=ch;
      }

    };

    int Hero::timeToComplete = 5; 
    int main()
    {
      //static keyword initialization
      //datatype class_Name::data member/field
      
      cout << Hero::timeToComplete << endl;


      /*//static destructor //when destructor allocated static it is called automatically
      Hero a;

      //dynamic destructor  //when destructor allocated dynamically it is called manually
      Hero *b = new Hero();
      delete b;

      return 0;
      */
      
      /*Hero S(70,'C');
      S.print();
      //Copy Constructor
      Hero R(S);
      R.print();
      */
      
      
      /*
      //object created statically
      Hero ramesh(10);
      //cout<<"Address of Ramesh " << &ramesh << endl;
      ramesh.print();
      
      //object created dynamically
      Hero *h = new Hero(11);
      h->print();
      
      Hero temp(22,'B');
      temp.print();
      */
      
      /*
      //Creation of Object by Static allocation
      Hero a;
      a.setLevel('B');
      a.setHealth(80);
      cout<<"level is " <<a.level << endl;
      cout<<"health is " <<a.getHealth() << endl;
      
      //Creation of Object by Dynamic allocation
      Hero *b = new Hero;
      b->setLevel('A');
      b->setHealth(70);
      cout<<"level is " <<b->level << endl;
      cout<<"health is " <<b->getHealth() << endl;
      //cout<<"level is"<<(*b).level << endl;
      //cout<<"health is"<<(*b).gethealth() <<endl;
      */
      //Creation of Object by Static allocation
      //Hero Superman;
      //Superman.health=70;
      //Superman.level='A';
      //cout<<"size : " <<sizeof(Superman)<<endl;
      //cout<<"health is: " <<Superman.health << endl;
      //cout<<"level is: " <<Superman.level <<endl;  
    }


