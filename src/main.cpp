#include <iostream>

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

void calculate4(){
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


int main() {
    std::string greeting ="Jenny";
    std::cout << greeting;


    return 0;
}
