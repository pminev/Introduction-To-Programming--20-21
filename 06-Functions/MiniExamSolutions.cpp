#include <iostream>

bool IsBitZero(int number, unsigned short bit)
{
    // From logical operations we know that we can check value in a single bit
    // using logical AND (&)
    // 1 & 1 = 1  
    // 0 & 1 = 0
    bool isOne = number & (1 << bit); 
    return !isOne;
}

// Fallen bits are the zeros in the number's binary representation
bool HasEvenFallenBits(int number)
{
    unsigned short bitsCount = sizeof(int) * 8;
    unsigned short zerosCount = 0;
    for (int pos = 0; pos < bitsCount; pos++)
    {
        if (IsBitZero(number, pos))
        {
            zerosCount++;
        }
    }

    return !(zerosCount % 2);
}

void PrintSumsWithEvenFallenBits(int begin, int end)
{
    int sum =0;
    for(int i = begin; i <= end; ++i)
    {
        sum += i;
        if (HasEvenFallenBits(sum))
        {
            std::cout << sum << ' ';
        }
    }
}

unsigned int LongestSequenceOfZeros(int number)
{
    unsigned short currentCount = 0;
    unsigned short maxCount = 0;

    while(number)
    {
        if (IsBitZero(number, 0))
        {
            currentCount++;
        }
        else
        {
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
            }
            currentCount = 0;
        }

        number = number >> 1;
    }

    return maxCount;
}

int main() {
    unsigned int begin, end;
    std::cin >> begin >> end;

    // We should check if the given interval is in the correct order
    if (begin > end)
    {
        unsigned int temp = begin;
        begin = end;
        end = temp;
    }

    PrintSumsWithEvenFallenBits(begin, end);

    // Bonus task
    std::cout << "\n\n\n Bonus task: \n\n";
    std::cout << "Longest sequence of zeros in " << begin << " is : " << LongestSequenceOfZeros(begin) << '\n';
    std::cout << "Longest sequence of zeros in " << end<< " is : " << LongestSequenceOfZeros(end) << '\n';
    return 0;
}
