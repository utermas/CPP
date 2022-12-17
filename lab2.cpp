#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>  
#include <algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    istringstream ss(str);
    vector<string> abc;
    copy(istream_iterator<string>(ss), istream_iterator<string>(), back_inserter(abc));
    sort(abc.begin(), abc.end());
    copy(abc.begin(), abc.end(), ostream_iterator<string>(cout, " "));
    return 0;
}