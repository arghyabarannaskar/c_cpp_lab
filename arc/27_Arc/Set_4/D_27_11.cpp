#include<iostream>
#include<math.h>
using namespace std;
class Overload{
    public:
        void calculate(int m, int r){
            int rev=0;
            while(m!=0){
                rev=10*rev+(m%10);
                m=m/10;
            }
            cout<<"Revrse Number: "<<rev;
        }
        void calculate(int m, char p)
        {
            bool prime=true;
            for(int i=2; i<=sqrt(m); i++){
                if(m%i==0){
                    prime=false;
                    break;
                }
            }
            cout<<(prime?"The number is prime":"The number is not prime");
        }
};
int main(){
    Overload ob;
    int m;
    char c;
    cout<<"Enter the number: ";
    cin>>m;
    cout<<"r or p\n";
    cin>>c;
    if(c=='r') ob.calculate(m,1);
    else ob.calculate(m,'2');
    return 0;
}