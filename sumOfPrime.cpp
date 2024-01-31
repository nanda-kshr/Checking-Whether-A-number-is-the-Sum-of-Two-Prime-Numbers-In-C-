#include<iostream>
#include<string>
using namespace std;

class sumOfPrime{
    private:
        int number;
    public:
        sumOfPrime(int x){
            number = x;
        }
        bool isPrime(int x){
            for(int i=1;i<x/2;i++){
                if(x/i==0)
                    return false;
            }
            return true;
        }
        bool isSumOfPrime(){
            for(int i=1;i<number/2;i++)
                if(isPrime(i) && isPrime(number-i)){
                    return true;
                }
            return false;
        }
};

int main(){
    int r;
    cout<<"Enter a number : ";  // 10 sum of prime nos and 2 not the sum of prime nos
    cin>>r;
    sumOfPrime work(r);
    if(work.isSumOfPrime()){
        cout<<"It is the sum of two Prime Numbers";
    }else{
        cout<<"It is not the sum of two Prime Numbers";
    
    }
    return 0;
}


