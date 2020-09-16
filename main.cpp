#include <iostream>
#include <bitset>
using namespace std;
int main()
{
   cout << "Binary Practice" << endl;
   cout << " " << endl;
    int intA = 0b0000000010101;
    int intB = 0x0ABC8747;
    int intC = (intA) & (intB);
    int intD = (intA) | (intB);
    int intE = 0x7FFFFFFF;
    int intF = intE + 1;
    cout << intA << endl;
    cout << sizeof(intA) << endl;
    bitset<sizeof(intA)*8> mySetA(intA);
    bitset<sizeof(intB)*8> mySetB(intB);
    bitset<sizeof(intC)*8> mySetC(intC);
    bitset<sizeof(intD)*8> mySetD(intD);
    bitset<sizeof(intE)*8> mySetE(intE);  
    bitset<sizeof(intF)*8> mySetF(intF);
    cout << mySetA << endl;
    cout << mySetB << endl;
    cout << mySetC << " anded & " << endl; /// anded the two values
    cout << mySetD << " ored | " << endl; /// ored the values
    cout << mySetE << " E " << intE << endl;
    cout << mySetF << " F = E + 1 " << intF << endl;
return 0;
}

