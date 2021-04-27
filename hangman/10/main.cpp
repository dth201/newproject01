#include<bits/stdc++.h>

using namespace std;
class array{
    float *a;
    int n;
public:
    array operator++();
    array operator--();
    friend istream& operator>>(istream& x,array &y);
    friend ostream& operator<<(ostream& x,array y);
};
array array::operator++(){

}
