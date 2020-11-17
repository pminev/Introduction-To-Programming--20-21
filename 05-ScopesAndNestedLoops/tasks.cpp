#include <iostream>

int sum(unsigned int n);
int  sumOfAllPrimeNumbers(int a, int b);
bool isPrime(int number);
void printNumbers();
bool isDigitsSame(int number);
int exponentialPower(int i);
int sumTask3(int n);
void printAllLinearIndependantVectors(unsigned int m, unsigned int n);
void printAllNDigitPowers(unsigned int n);
void findFirstNAutomorphNumbers(unsigned n);
void encryptNumber(const int number);
int mirrorNumber(int number);
unsigned decryptNumber(unsigned long long n);

using std::cin;
using std::cout;
using std::endl;

int main(){
    #pragma region task1
    // unsigned int n;
    // cin >> n;

    // cout << sum(n) << endl;
    #pragma endregion task1
    #pragma region task2
    //task 2
    // int a, b;
    // cin >> a >> b;

    // cout << sumOfAllPrimeNumbers(a,b) << endl;
#pragma endregion task2
    #pragma region task3
    //task 3
    //printNumbers();
    #pragma endregion task3
    #pragma region task4
    //task 4
    // int n = 2;

    // cout << sumTask3(n) << endl;
    #pragma endregion task4
    #pragma region task6
    //task 6
    // int m  = 1, n = 2;
    // printAllLinearIndependantVectors(m,n);
#pragma endregion task6
    #pragma region task7

    //task 7
    // int n = 7;
    // printAllNDigitPowers(n);
    #pragma endregion task7
    #pragma region task8

    // unsigned n;
    // cin >> n;

    // findFirstNAutomorphNumbers(n);

    #pragma endregion task8
    #pragma region task9

    // unsigned n;

    // cin >> n;

    // encryptNumber(n);

    #pragma endregion task9
    #pragma region task10

     unsigned long long n;

     cin >> n;

     cout << mirrorNumber(decryptNumber(n)) << endl;

    #pragma endregion task10
}   

unsigned decryptNumber(unsigned long long n) {
    unsigned long long nTemp = n;
    unsigned count = 0;
    unsigned result = 0;

    while(nTemp) {
        if(nTemp % 10) {
            count++;
            nTemp /= 10;

        } else {
            result = result * 10 + count;
            count = 0;
            nTemp /= 10;
            
        }
            
    }
    result = result * 10 + count;   

    return result;
}

int mirrorNumber(const int number) {
    int newNumber = 0;
    int tempNumber = number;
    while(tempNumber) {
        newNumber += tempNumber % 10;
        
        if(tempNumber/10){
            newNumber *= 10;
        }

        tempNumber /= 10;
    }
    return newNumber;
}

void encryptNumber(const int number) {
    int tempNumber;

    for( tempNumber = mirrorNumber(number) ; tempNumber; tempNumber /= 10) {
        for(int i = tempNumber % 10; i > 0; i--) {
            cout << 1;
        }
        cout << ((tempNumber / 10) ? "0" : "");;
    }
}

void findFirstNAutomorphNumbers(unsigned n) {
    unsigned temp = 0;

    for(unsigned i = 5, count = 0; count < n ; i++) {
        temp = i*i;

        if(i > 0 && i < 9) {
            if(temp % 10 == i) {
                count++;
                cout << i << endl;
            }   
        } else if(i > 9 && i < 100) {
            if(temp % 100 == i) {
                cout << i << endl;
                count++;
            }
        } else {
            if(temp % 1000 == i) {
                cout << i << endl;
                count++;
            }
        }
    }
}
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

void printAllNDigitPowers(unsigned int n) {
    unsigned int lastNumber = 1;
    unsigned int square = 0;

    for (unsigned int i = 0; i < n; i++)
    {
        lastNumber *= 10;
    }


    for (unsigned int j = 2; j <= lastNumber; j++) {
        square = j*j;

        if(!(j & 1)) {
            if(square <= lastNumber) {
                cout << square << endl;
            }
        }
    }
    
    
}
int sum (unsigned int n){
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= n; i++)
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