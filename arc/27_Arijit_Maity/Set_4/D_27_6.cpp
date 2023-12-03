#include<bits/stdc++.h>
using namespace std;
class LeapYear{
    private:
        int yyyy;
        bool status;
    public:
        LeapYear(int yyyy){
            this->yyyy=yyyy;
            if(yyyy%400==0 ||(yyyy%100!=0 && yyyy%4==0)){
                status=true;
            }else{
                status=false;
            }
        }
        ~LeapYear(){
            (status) ? cout << yyyy << " is Leap Year" << endl : cout << yyyy << " is not Leap Year"<<endl;
        }
};
int main(){
    LeapYear lp1(2000);
    LeapYear lp2(2022);
    LeapYear lp3(1600);
    return 0;
}