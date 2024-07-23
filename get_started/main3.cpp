#include <iostream>
#include <string>
using namespace std;

#define END return 0;
#define ENDMESSAGE cout << "Program ends here\n";

#define LCOINT int8_t;
#define LCOCCPC const char* const;

#define console_log(a) cout << a << endl;

template <typename T>
void func(T t){
    cout << "One func " << t << endl; 
 }

template <typename T, typename... Args>
void func(T t, Args... args){
    cout << "Two func " << t << endl;
    func(args...);
};

class User {
    int _secret = 22;

    public:
        string name = "defualt";
        void classMessage();
        void setSecret(const int & newSecret) {_secret = newSecret;}
        int getSecret()const;
};

void User::classMessage(){
    cout << "Class is great, " <<name <<endl;
};

int User::getSecret()const {
    return _secret;
};


class Phone {
    string _name = "";
    string _os = "";
    int _price = 0;
    Phone();

    public:
        Phone(const string & name, const string & os, const int & price);
        Phone(const Phone &);
        string getName(){
            printf("Values of getName is %p\n", this);
            return _os;
        }
        int getPrice();
        ~Phone();
};

int Phone::getPrice(){
    printf("Values of getPrice is %p\n", this);
    return _price;
}
;
// Phone::Phone() : _name(), _os("Andy"), _price(){
//     puts("Default parameter");
// };


// Phone::Phone() : _name(), _os("Andy"), _price(){
//     puts("Default constructor");
// };


// Phone::Phone() : _name(), _os("Andy"), _price(){
//     puts("Default constructor");
// };

Phone::Phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price){
  puts("This is parameter constructor");
};

Phone::Phone(const Phone & values){
    puts("OVWERWRITE copy onstructor");
    _name: "new-"+values._name;
    _os: "skinned-"+values._os;
    _price: values._price;
};

Phone::~Phone(){
    printf("Desctructor called for %s\n", _name.c_str());
};

class Reactangle {
    double _length;
    double _breadth;

    public:
    Reactangle(double l = 2.0, double b = 2.0){
        _length: l;
        _breadth: b;
    }

    double Area(){
        return _length * _breadth;
    }

    int compare(Reactangle reactangle){
        return this->Area() > reactangle.Area();
    }

};


int main() {
 
   int score = 400;
   console_log(score);

   string name = "hitesh";
   console_log(name);
   ENDMESSAGE;
//    END;

    string myName = "Hietsh";

    func(1);
    func(1, 2, 3.4, 4.5, myName);

    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.setSecret(333);
    cout << sam.getSecret() <<endl;

    User hitesh;
    hitesh.classMessage();
    hitesh.name = "Hitesh";
    hitesh.classMessage();

    const User rock;
    cout << rock.getSecret() << endl;
    // Phone samsungA1;
    // cout << samsungA1.getName() << endl;

    Phone OnePlus8("OP8", "Androd-proxy", 799);
    cout << OnePlus8.getName() <<endl;

    printf("Value of object is %p\n", &OnePlus8);

    cout << OnePlus8.getPrice() << endl;

    Phone OnePlus8s = OnePlus8s;
    cout << OnePlus8.getName() << endl;

    Reactangle h1(3.0, 3.0);
    Reactangle h2(4.0, 4.0);

    cout << h1.compare(h2);

    if(h2.compare(h1)){
        cout << "H2 is smaller";
    } else {
        cout << "H2 is bigger";

    }


    return 0;
}