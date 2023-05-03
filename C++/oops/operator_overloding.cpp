#include<iostream>
using namespace std;
class complex
{
    private:
        int img,real;
    public:
        complex()
        {

        }
        complex(int r,int i)
        {
            real=r;
            img=i;
        }
        complex operator  (complex &obj){
            complex res;
            res.img=img+obj.img;
            res.real=real+obj.real;
            cout<<real<<endl;
            cout<<img<<endl;
            return res;
        }
        void display()
        {
            cout<<real<<" +i"<<img<<endl;
        }
};
int main()
{
    complex c1(12,18),c2(15,17);
    complex c3=c1-c2;
    c3.display();


    return 0;
}