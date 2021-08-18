#include <iostream>
#include <new>  // for placement new
#include <bits/stdc++.h>
#define bool int

bool getParity(unsigned int n);

using namespace std;

int main()
{
    unsigned int n = 7;
    cout << "Parity of no " << n << " = " << (getParity(n) ? "odd" : "even") << endl;
    return 0;
}

bool getParity(unsigned int n)
{
    bool parity = 0;
    while (n)
    {
        parity = !parity;
        n = n & ( n - 1);
    }
    return parity;
}