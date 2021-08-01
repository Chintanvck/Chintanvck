#include<iostream>
#include<fstream>


using namespace std;

int main()
{
    fstream f1,f2,f3;
    string i1,i2;

    f1.open("Source1.txt",ios::in);
    f2.open("Source2.txt",ios::in);
    f3.open("Destination.txt",ios::out);



    while(getline(f1,i1))
    {
        f3<<i1;
        f3<<endl;
    }
    while(getline(f2,i2))
    {
        f3<<i2;
        f3<<endl;
    }
    f1.close();
    f2.close();
    f3.close();
}
//chintan
 // vck
