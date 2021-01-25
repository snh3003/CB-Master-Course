#include <cstring>
#include <iostream>
using namespace std;

int countDecoding(string digits, int n)
{
    if (n == 0 || n == 1)
        return 1;
    if (digits[0] == '0')
        return 0;

    int count = 0; 
    if (digits[n - 1] > '0')
        count = countDecoding(digits, n - 1);
    if (digits[n - 2] == '1'
        || (digits[n - 2] == '2'
        && digits[n - 1] < '7'))
        count += countDecoding(digits, n - 2);
 
    return count;
}
 
int countWays(string digits, int n)
{
    if (n == 0 || (n == 1 && digits[0] == '0'))
        return 0;
    return countDecoding(digits, n);
}
 
int main()
{
    string line;
    getline(cin, line);
    int n = line.length();
    cout<<countWays(line, n);
    return 0;
}