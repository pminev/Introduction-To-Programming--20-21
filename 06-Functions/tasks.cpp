#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int max(int a, int b);
int absolute(int number);
int pow(int num, int power);
int leastCommonDivisor(int a, int b);
int nThFibonacci(int n);
int isPrime(int n);
int aDivB(int a, int b);
double circleArea(double radius);
int input(unsigned n);
void print(int n);

int main (){
    #pragma region task1
    // int a, b;
    // cin >> a >> b;

    // cout << max(a,b) << endl;
    #pragma endregion task1

    #pragma region task2
    // int n;
    // cin >> n;
    // cout << absolute(n);
    #pragma endregion task2

    #pragma region task3
    // int a,b;
    // cin >> a >> b;
    // cout << pow(a,b) << endl;
    #pragma endregion task3

    #pragma region task4
    // int a,b;
    // cin >> a >> b;
    // cout << leastCommonDivisor(a,b) << endl;
    #pragma endregion task4

    #pragma region task5
    int n;
    cin >> n;
    cout << nThFibonacci(n) << endl;
    #pragma endregion task5

    #pragma region task6
    // int a;
    // cin >> a;
    // cout << isPrime(a) << endl;
    #pragma endregion task6

    #pragma region task7
    // int x,y;
    // cin >> x >> y;
    // cout << aDivB(x,y) << endl;
    #pragma endregion task7

    #pragma region task8
    // double r;
    // cin >> r;
    // cout << circleArea(r) << endl;
    #pragma endregion task8

    #pragma region task9
    // unsigned n;
    // cin >> n;
    // print(input(n));
    #pragma endregion task9


}

int max(int a, int b) {
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int absolute(int a) { 
    if(a < 0) { 
        return -a;
    } else {
        return a;
    }
}

int pow(int num, int power) {
    int temp = 1;
    for(int i = 0; i < power; i++) {
        temp *= num;
    }
    
    return temp;
}

int leastCommonDivisor(int a, int b) {
    int maxNum = max(a,b);
    for(int i = 2; i <= maxNum; i++) {
        if((a % i == 0) && (b % i == 0)) {
            return i;
        }
    }

    return a*b;
}

int nThFibonacci(int n) {
    int prev = 1;
    int curr = 1;
    int next = 2;

    if(n <= 0 || n == 1) {
        return 1;
    }

    for(int i = 3; i <= n; i++) {
        
        prev = curr;
        curr = next;
        next = prev + curr;
        
        if(i == n) {
            return curr;
        }
    }
}
int isPrime(int n) {
    for(int i = 2; i < n/2; i++) {
        if(n % i == 0) {
            return 0;
        }
    }

    return 1;
}
int aDivB(int a, int b) {
    int tempA = a;
    unsigned count = 0;
    while(tempA) {
        if(tempA % b == 0) {
            count++;
        } else {
            break;
        }
            tempA /= b;
    }

    return count;
}
double circleArea(double r) {
    if(r >= 0) {
        return 3.14159*r*r;
    }
}
int input(unsigned n) {
    int max, temp;

    cin >> max;
    cin >> temp;
    for(int i = 2; i < n; i++) {
        if(max < temp) {
            max = temp;
        }
        cin >> temp;
    }

    return max;
}
void print(int n) {
    cout << n << endl;
}