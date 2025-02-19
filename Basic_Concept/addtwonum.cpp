#include<iostream>
using namespace std;
class Addition{
    private:
            int a,b,sum;
    public:
           void input()
           {
            cout<<"Enter Two numbers :";
            cin>>a>>b;

           }
           void calculation()
           {
            sum=a+b;
           }
           void output()
           {
            cout<<"a:" <<a<< " + " << "b:" <<b<< " =sum:"<<sum;

           }
};//End Class
          int main()
          {
            Addition add;
            add. input();
            add. calculation();
            add. output();
            return 0;

          }