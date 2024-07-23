#include <iostream>
using namespace std;
#include <string>

int factorial(int n);

enum MsOffice: uint8_t {
    BOLD= 0,
    ITALICS = 2,
    UNDERLINE = 4,
    COSSED
};

string api_call(){
    return "got some data from web/n";
};

int another_api_call(){
    return 5;
};

struct User {
    const int id;
    int age;

    User(): id(001), age(22){}

};

// void lifeUp(int *ife){
//     ++(*life);
// };

void lifeUp(int &life){
    ++life;
}

int addMe(int a, int b){
    return a + b;
}


float addMe(float a, float b){
    return a + b;
}

template<typename T>

T addMe(T a, T b){
    return a + b;
}

int getTwo(){
    return 2;
}

void interesting(){
    puts("I am interesting");
}

void printVal(int a){
    printf("Integer value is %d\n", a);
}


void printVal(double a){
    printf("Integer value is %f\n", a);
}


void printVal(int *a){
    printf("Integer value is %p\n", a);
}

int main(){
    int myAttributes = UNDERLINE;
    cout << myAttributes << endl;

    auto reponse = api_call();
    auto resp = another_api_call();

    cout << "API CALL VALUE: " << reponse <<endl;
    cout << "API response VALUE: " << resp <<endl;

    // if(typeid(reponse) == typeid(string)){
    //     puts("Type of both ID matches\n");
    // }

    // if(typeid(resp) == typeid(int)){
    //     puts("Type of both ID INT Matches\n");
    // }
    
// stake
    int score = 100;
    User mike;

// heap
    int* heap_score = new int;
    *heap_score = 200;

    // User* mike = new User();

    delete heap_score;
    // delete mike;
    // delete User;

    int life = 3;
    // lifeUp(&life);
    lifeUp(life);
    cout << "Life is: " << life << endl;

    int v1 = 4;
    int v2 = 5;
    int v3 = 5.6;
    int v4 = 7.5;
    cout << addMe(v3, v4) << endl;

    int whatIgot = getTwo();

    void (*pointsToInteresting)() = interesting;

    cout << whatIgot << endl;
    pointsToInteresting();
    (*pointsToInteresting);

    printVal(nullptr);

    int n;
    cout << "Enter a value: ";
    cin >> n;

    cout << "Your result for factorial is: " << factorial(n);

    return 0;

}

int factorial(int n){
    if(n > 1){
        return n * factorial(n -1);
    } else {
        return 1;
    }
}