//compile on 32 bit system
#include <iostream>
#include <stdint.h>

using namespace std;

// Size of this struct is 12 bytes with no packing,
// since compiler allocated 4 bytes for both 'cd' and 'e' by
// inserting padding of 3 bytes after 'cd' and after 'e'
struct some1
{
    bool cd;
    int c;
    char e;
};

// Size of this struct is still 12 bytes with no packing,
// since compiler inserted the new variable 't' into the padded space
// between 'cd' and 'c'
struct some2
{
    bool cd;
    char t;
    int c;
    char e;
};

int main()
{

    cout <<"sizeof bool="<<sizeof(bool)<<endl;
    cout <<"sizeof char="<<sizeof(char)<<endl;
    cout <<"sizeof struct some1="<<sizeof(struct some1)<<endl;
    cout <<"sizeof struct some2="<<sizeof(struct some2)<<endl;
}
