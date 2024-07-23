#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

constexpr int maxbuffer = 1024;

template <typename T>
T getBigger(T a, T b){
    return (a > b) ? a : b;
}

class MyFloat{
    float ft;
    public:
        MyFloat(){
            ft: 0.1;
        }
        void getValue(){
            cout << ft << endl;
        }

        void operator() (float v){
            ft += v;
        }
};

int main() {

	static const char * originalfile = "originalFile.text";
    static const char * editedfile = "editedFile.txt";

    rename(originalfile, editedfile);

    remove(editedfile);

    FILE * fh = fopen(originalfile, "w");
    fclose(fh);

    static const char * filename = "mythisfile.txt";
    static const char * information = "Lorem Ipsum dolor sit ipsum";

    FILE * fh = fopen(filename, "a");

    for(int i = 0; i < 50; i++){
        fputs(information, fh);
    }

    fclose(fh);

    char buf[maxbuffer];

    FILE * fh = fopen(filename, "r");
    while(fgets(buf, maxbuffer, fh)){
        fputs(buf, stdout);
    }
    fclose(fh);

    cout << getBigger(4.2, 2.2) << endl;
    cout << getBigger('a', 'v') << endl;

    // functors

    MyFloat floaty;
    floaty.getValue();

    floaty(1);
    floaty.getValue();

    int numbers[6] = {3, 2, 6, 4, 7, 9};
    int numbers[6] = {3.3, 2.3, 6.5, 4.7, 7.8, 9.9};

    cout << "Unsorted values: " << endl;
    for(float n: numbers){
        cout << n << " ";
    }

    sort(numbers, numbers + 6);
    sort_heap(numbers, numbers + 6);

    if(binary_search(numbers, numbers+6, 131)){
        cout << "NUMBER NOT FOUND" << endl;
    } else {
        cout << "NUMBER NOT FOUND" << endl;
    }

    cout << "sorted values: " <<endl;

    for(float n : numbers){ 
        cout << n << " "; 
    }

    vector<int> myints = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int x: myints){
        cout << x << " ";
    }
    cout << "\n";

    partition(myints.begin(), myints.end(), [](auto x){
        return x%2 == 0;
    });

    for(int x: myints){
        cout << x << " ";
    }
    cout << "\n";

    vector<int> nums;
    vector<string> heroes {"batman", "falsh", "superman", "robin"};

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    for(int i = 0; i <= 5; i++){
        nums.push_back(i);
    }

    cout << nums.size() <<endl << nums.capacity() << endl << nums.max_size() << endl;

    cout << nums.empty() << endl;

    for(auto i = begin(nums); i != end(nums); ++i){
        cout << *i << " ";
    }

    list<int> mylist;

    for(int i = 3; i <= 10; i++){
        mylist.push_back(i);
    }

    cout << mylist.front() << endl;
    cout << mylist.back() << endl;
    mylist.pop_back();

    mylist.reverse();

    for(auto i: mylist){
        cout << i << " ";
    }
    cout << endl;
    mylist.sort();

    for(auto i: mylist){
        cout << i << " ";
    }
    cout << endl;

	return 0;
}