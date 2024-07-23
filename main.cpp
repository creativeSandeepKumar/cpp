#include <iostream>
using namespace std;

void sayHello(){
    puts("Hello world!");
}

int sayTwo(){
    return 2;
}

void sayThree(){
    puts("3");
}

int lifeUp(){
    static int life = 3;
    return ++life;
}

struct User {
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main(){
    // part-1
    int my_numbers[] = {4, 5, 6, 7, 8, 9, 0};
    int i = 0;

    while (i < 7)
    {
        if(i == 3){
            i++;
            cout << "Skip this one " << endl;
            continue;
        }
        cout << "Current number is: " << my_numbers[i] << endl;
        printf("Let me check this.");
        i++;
    }
cout <<endl;
cout <<endl;
cout << "Here is while loop" <<endl;
    do{
        cout << "Current number is: \n"
            << my_numbers[i];
            i++;
    } while(i < 7);

cout <<endl;
for(int i = 0; i < 5; i++){
    cout << my_numbers[i] << endl;
}

cout << "Get a Break: " <<endl;
cout <<endl;

for(int i:my_numbers){
    cout << i <<endl;
}
cout <<endl;

char my_string[] = "hitesh";
char my_name[] = {'h', 'i', 't', 'e', 's', 'h'};
printf("My Name is %s\n", my_name);

cout <<endl;
cout << "Take a break\n" <<endl;
cout <<endl;

for(int i = 0; my_name[i]; i++){
    cout << "Character is: " << my_name[i] << endl;
}

cout <<endl;
cout << "Take a break part 2\n" <<endl;
cout <<endl;


for(char * cp = my_name; *cp != 0; cp++){
    cout << "Character is: " << *cp << endl;
}

cout <<endl;
cout << "Take a break part 3\n" <<endl;
cout <<endl;

for(char i:my_name){
    if(i == 0) break;
    cout << "Char is: " << i << endl;
}

printf("Float size is %ld bits\n", sizeof(double) * 8);
cout << endl;

float my_p_value = 20.2 + 2-.2;

if(my_p_value == 40.400002){
    puts("You got it right");
} else {
    puts("Something");
}

cout << endl;

printf("my p value is : %1.30f in float\n", my_p_value);
cout << endl;

char call_api = 'h';

try{
    cout << "Trying to use API value\n" <<endl;
    cout << "Did some testing with API Value\n" <<endl;
    throw call_api;
    cout << "Integer exception handled\n";
} catch(int x){
    cout << "Integer exception handled\n";

} catch(float f){
    cout << "Float exception handled\n";

} catch(...){
    cout << "Something went wrong\n";

}

cout << "Keep on moving with rest of code\n" <<endl;

sayHello();
printf("%d\n", sayTwo() + 2);
printf("%d\n", sayTwo() + 2);
sayThree();


cout << endl;
cout << endl;
cout << "*****************" << "Part one end" << "***********" <<endl;
cout << endl;
cout << endl;
    // part 2
    int life = 3;
    cout << "Your starting game life is: " << life << endl;
    life = lifeUp();
    printf("Your updated game life is %d\n", life);
    life = lifeUp();
    printf("Your updated game life is %d\n", life);

    unsigned int x = 6;
    unsigned int y = 6;
    unsigned int z = y >> 1;
    cout << "Value od z is: " << z << endl;
    
    int * myp;
    try{
        myp = new int [1000];
        cout << "Memory pace allocated\n";
    } catch(...){
        cout << "Failed in allocating memory\n";
    }

    delete [] myp;

    User mickey = {001, "mickey", "mickey@cartoon.com", 2};
    User donald = {002, "donald", "domad@cartoon.com", 2};

    User * d = &donald;

    cout << donald.email << endl;
    donald.course_count = 4;

    donald.email = "donaldy@toon.com";

    cout << donald.email << endl;

    d->course_count = 12;

    cout << donald.course_count << endl;

    return 0;

}