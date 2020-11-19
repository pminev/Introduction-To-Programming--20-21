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
unsigned baumSweetNumber(int n);
void printAllDeadlyNumbersToN(int n);
unsigned long long pow(int number, int power);
int numberDigitLengt(int num);
unsigned bitLen(unsigned n);

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

    //  unsigned long long n;

    //  cin >> n;

     //cout << mirrorNumber(decryptNumber(n)) << endl;

    #pragma endregion task10
    #pragma region task11

    
    // int n;

    //  cin >> n;

    //  cout << baumSweetNumber(n) << endl;

    #pragma endregion task11
    #pragma region task12

    // int n;

    // cin >> n;

    // printAllDeadlyNumbersToN(n);

    #pragma endregion task12
}   

void printAllDeadlyNumbersToN(int n) {
    unsigned onesCount = 0;
    if(n > 0) {
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < 32; j++) {
                if(i & (1 << j)) {
                    onesCount++;
                }
            }
            if(isPrime(onesCount)) {
                cout << i << endl;
            }
                onesCount = 0;
        }
    }
}

unsigned bitLen(unsigned n) {
    int count = 0;
    
    while(n) {
        count++;
        n /= 2;
    }
}

unsigned baumSweetNumber(int n) {
    unsigned zerosCount = 0;
    unsigned bitLength = bitLen(n);
    for(int i = 0; i < 32; i++) {
        if(!(n & (1 << i))) {
            zerosCount++;
        } else {
            if(zerosCount % 2) {
                return 0;
            }
            zerosCount = 0;
        }
    }

    return 1;
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
    unsigned long long temp = 0;
    for(unsigned i = 5, count = 0; count <= n ; i++) {
        temp = i*i;
        cout << temp << endl;
        if(temp % pow(10, numberDigitLengt(i)) == i) {
            count++;
            //cout << i << endl;
        }
    }
}

int numberDigitLengt(int num) {
    int tempNum = num;
    int count = 0;

    while(tempNum) {
        tempNum /= 10;
        count++;
    }

    return count;
}

unsigned long long pow(int number, int power) {
    unsigned long long result = 1;

    if(number < 0 || power < 0) {
        return 0;
    }

    for(int i = 0; i < power; i++) {
        result *= number;
    }

    return result;
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