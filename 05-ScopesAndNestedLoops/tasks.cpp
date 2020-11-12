#include <iostream>

int sum(unsigned int n);
int  sumOfAllPrimeNumbers(int a, int b);
bool isPrime(int number);
void printNumbers();
bool isDigitsSame(int number);
int exponentialPower(int i);
int sumTask3(int n);
void printAllLinearIndependantVectors(unsigned int m, unsigned int n);

using std::cin;
using std::cout;
using std::endl;

int main(){
    //task 1
    // unsigned int n;
    // cin >> n;

    // cout << sum(n) << endl;

    //task 2
    // int a, b;
    // cin >> a >> b;

    // cout << sumOfAllPrimeNumbers(a,b) << endl;

    //task 3
    //printNumbers();

    //task 4
    // int n = 2;

    // cout << sumTask3(n) << endl;

    // return 0;

    //task 6
    int m  = 1, n = 2;
    printAllLinearIndependantVectors(m,n);
}
// 1 2
// (1,1)
// (1,2)
// (2,1)
// (2,2)
void printAllLinearIndependantVectors(unsigned int m, unsigned int n){
    for(int i = m; i <= n; i++) {
        for(int j = m; j <= n; j++) {
             
            for(int h = m; h <= n; h++) {
                for(int r = m; r <= n; r++) { 
                    if((i/h) != (j/r)){
                        if((i / h) != 0 && (j/r) != 0) {
                            cout << "(" << h << "," << r << ") " ;
                            cout << "(" << i << "," << j << ")" << endl;
                        }
                    }
                }
            }

        }
    }
}

int sum (unsigned int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

 return sum;   
}

int  sumOfAllPrimeNumbers(int a, int b) {
    int sum = 0;

    for(int i = a; i <= b; i++) {
        if(isPrime(i)) {
            sum += i;
        }
    }
   
    return sum;
}

bool isPrime(int number) {
    for(int i = 2; i <= number/2 ; i++) {
        if(number % i == 0) {
            return false;
        }
    }

    return true;
}

void printNumbers () {
    for(int i = 99; i <= 999; i++)
    if(!isDigitsSame(i)) {
        cout << i << endl;
    }
}

bool isDigitsSame(int number){
    int a = number % 10;
    int b = (number/100) % 10;
    int c = (number / 100) % 10;
    if(a == b && a == c && c == b){
        return true;
    }

    return false;
}

int sumTask3(int n) { 
    int result = 0;
    for(int i = 1; i <= n; i++) {
        result += exponentialPower(i);
    }

    return result;
}

int exponentialPower(int i){
    int result = 1;
    for(int j = 0 ; j < i; j++) {
        result *= i;
    }

    return result;
}