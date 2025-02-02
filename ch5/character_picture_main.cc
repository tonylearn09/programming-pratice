#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "character_picture.h"

using std::cout;
using std::copy;
using std::endl;
using std::ostream_iterator;
using std::string;
using std::vector;

int main()
{
    vector<string> p;
    p.push_back("this is an");
    p.push_back("example");
    p.push_back("to");
    p.push_back("illustrate");
    p.push_back("framing");

    ostream_iterator<string>out(cout, "\n");

    copy(p.begin(), p.end(), out);
    cout << endl;

    vector<string> f = frame(p);
    copy(f.begin(), f.end(), out);
    cout << endl;

    vector<string> h = hcat(frame(p), p);
    copy(h.begin(), h.end(), out);
    cout << endl;

    vector<string> v = vcat(frame(p), p);
    copy(v.begin(), v.end(), out);
    cout << endl;

    return 0;
}
