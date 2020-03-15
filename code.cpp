#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) 
{
    long num=0, i=0, count=0, div=0, rem=0, sum=0;
    num = s.size();
    for(i=0; i<num; i++)
    {
        if(s.at(i)=='a')
            count++;
    }
    div = n/num;
    sum = div*count;
    rem = n%num;
    count=0;
    for(i=0; i<rem; i++)
    {
        if(s.at(i)=='a')
            count++;
    }
    sum = sum +count;
    return sum;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
