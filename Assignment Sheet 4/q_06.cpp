#include<iostream>
using namespace std;
class LeapYear{
    private:
        int year;
    public:
        LeapYear(int year){
            this->year=year;
           
        }
        ~LeapYear(){
             if(year%400==0 ||(year%100!=0 && year%4==0)){
                 cout << year << " is Leap Year" << endl;
            }else{
                cout << year << " is not Leap Year"<<endl;
            }
        }
};
int main(){
    LeapYear lp1(2000);
    LeapYear lp2(2022);
    LeapYear lp3(1600);
    return 0;
}