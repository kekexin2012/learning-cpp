#include <iostream>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++23-extensions"
using namespace std;

void calculate1()
{
    int sum = 0;
    for (int i = 92; i >= 2; i = i - 2) {
        sum = sum + i;
    }
        cout << sum;
        cout << "\n";
}

void calculate2()
{
    int sum = 0;
    for (int i = 1; i <= 2012; i++) {
        sum = sum + i;
    }
        cout << sum;
        cout << "\n";

}

void calculate3()
{
    int sum = 0;
    for (int i = 2; i <= 2588; i++) {
        sum = sum + i;
    }
        cout << sum;
        cout << "\n";
}

void calculate4() {
    int sum = 0;
    for (int i = 5; i <= 6002; i = i + 3) {
        sum = sum + i;
    }
        cout << sum;
        cout << "\n";

    int value_5000 = 10 + (5000 - 1) * 5;
    sum = 0;
    for (int i = 10; i <= value_5000; i = i + 5) {
        sum = sum + i;
    }
        cout << sum;
        cout << "\n";

    sum = 0;
    for (int i = 11; i <= 97; i = i + 2) {
        sum = sum + i;
    }
        cout << sum;
        cout << "\n";

}
    int main(){
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }
    string cars[5] = {"Jenny", "Amy", "Anna", "Tom","Lingling"};
        cout << cars [3] << "\n" ;

    int j = 0;
    while (i<10){
        cout << i <<"\n";
        i++;
        if(i==4){
            break;
        }
    string Myfriends[5] = {"Amy","Apple","Anna","Sally","Tomas"};
        cout << Myfriends [2] << "\n" ;
    }



    return 0;
 }


#pragma clang diagnostic pop