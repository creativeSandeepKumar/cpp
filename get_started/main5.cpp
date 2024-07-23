#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

class One{
    public:
        virtual void intro(){
            cout << "I am One\n";
        }
};

class Two: public One{
    public:
        virtual void intro(){
            cout << "I am Two\n";
        }
};

class Three: public One{
    public:
        virtual void intro(){
            cout << "I am Three\n";
        }
};

class User{
    public:
        User(){
            cout << "User created\n";
        }
        ~User(){
            cout << "User destroyed\n";
        }

        void testFunc(){
            cout << "I am a test function\n";
        }
};

void swap(int &m, int &n){
    int tmp = m;
    m = n;
    n = tmp;
    tmp = move(m);
    m = move(n);
    n = move(tmp);
}

string printMe(){
    return "I am print";
};

struct Corners{
    float a, b, c, d;
};

ostream& operator<<(ostream& stream, const Corners& corners){
    stream << corners.a << " " << corners.b << " " << corners.c << " " << corners.d;
    return stream;
}
int main(){
    One *a;
    Two b;
    Three c;

    a = &b;
    a->intro();
    
    // {
    //     unique_ptr<User> sam(new User());
    //     unique_ptr<User> sam = make_unique<User>();
    //     // unique_ptr<User> sam = sam; Not allowed

    //     sam->testFunc();
    // }

    // shared_ptr<User> tim(new User()); 
    // very bad practice
    // shared_ptr<User> tim = make_shared<User>();
    // weak_ptr<User> wtim = tim;
    // shared_ptr<User> tim = tim;

    int m = 3;
    int n = 4;
    swap(m, n);

    cout << "A: " << a << endl;

    string s = printMe();
    
    string&& ss = printMe();

    vector<int> inty;
    inty.push_back(2);
    inty.push_back(3);
    inty.push_back(4);
    inty.push_back(5);

    for(auto i = inty.begin(); i != inty.end(); ++i){
        cout << *i <<endl;
    }

    vector<Corners> corners;
    corners.push_back({1, 2, 3, 4});
    corners.push_back({5, 6, 7, 8});

    for(int i = 0; i < corners.size(); ++i){
        cout << corners[i] << endl;
    }

    []{cout << "Hello Learncodeonline.in\n";}{};
    [](){return 100;};

    auto sum = [](auto a, auto b){return a + b;};
    cout << "Sum of 2 and 5 is: " << sum(2, 5) << endl;
    cout << "Sum of 2.5 and 5.5 is :" <<sum(2.5, 5.5) <<endl;

    string a = "abc";
    string b = "def";
    cout << sum(a, b) << endl;

return 0;
}