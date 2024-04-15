#include <iostream>

using namespace std;

class Fact 
{
private:
    int number;
public:
    Fact(int num) 
    {
        number = num;
    }
    int calculateFactorial() 
    {
        int factorial = 1;
        for (int i = 1; i <= number; i++) 
        {
            factorial *= i;
        }
        return factorial;
    }
};

int main()
{
    int num;
    cin >> num;
    Fact fact(num);
    cout << fact.calculateFactorial();
}