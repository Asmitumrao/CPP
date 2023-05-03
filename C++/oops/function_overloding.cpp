#include<iostream>
using namespace std;
class fruits{
    public:
        void quality()
        {
            cout<<"this is a fruit of good quality"<<endl;
        }
        void quality(int k)
        {
            cout<<"this is also a fruit but it is more red "<<endl;
        }
        void quality(char t)
        {
            cout<<"this is not so good fruit"<<endl;
        }
};
int main()
{
    fruits apple;
    apple.quality();
    apple.quality(10);
    apple.quality('p');
    

    return 0;

}
