/*

#include<iostream>

using namespace std;

class hero{
  
  public:
    int health = 500;
    int  level = 4;


};

int main(){

    hero kunal;

    kunal.health = 500;
    kunal.level = 3;

    cout << " health : " << kunal.health << endl;
    cout << " level : " << kunal.level << endl;

    cout << "Size : " <<  sizeof(kunal) << endl;


    return 0;
}
*/


/*

#include<iostream>

using namespace std;

class hero{
 

    private:

    int health;
    int level;

    public:

    int gethealth(){
        return health;
    }

    int getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(int l){
        level = l;
    }



};

int main(){

    hero kunal;

    kunal.sethealth(500);
    kunal.setlevel(4);

    

    cout << "health : " << kunal.gethealth ()<< endl;
    cout << "level : " << kunal.getlevel() << endl;


    return 0;
}
*/

#include<iostream>
using namespace std;

class hero{
    private:
    int health;

    public:
    int level;

    int gethealth(){
        return health;
    }

    int getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(int l){
        level = l;

    }

};

int main(){

    //static allocation

    hero a;

    a.level = 38;
    a.sethealth(3333);
    a.setlevel(45);

    cout << " level is : " << a.level << endl;
    cout << "health is : " << a.gethealth() << endl;


    //dynamically allocation

    hero *b = new hero;


    return 0;
}