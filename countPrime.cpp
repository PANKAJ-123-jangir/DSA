#include<iostream>
#include<vector>
using namespace std;
/*🧠 What is Sieve of Eratosthenes?
It’s an algorithm to find all prime numbers up to N by marking multiples of
primes as not prime.
Instead of checking each number again and again → we pre-compute primes.

💡 Core Idea
Assume all numbers are prime
Start from 2 (first prime)
Mark all multiples of 2 as not prime
Move to next unmarked number (3)
Mark all multiples of 3
Repeat till √N
Count numbers still marked prime
*/
int primeCnt(int n){
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    int count=0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;
            }
            
        }
    }
    return count;
}

//more optimized
int countPrimes(int n) {
        if(n <= 2) return 0;

        vector<bool> prime(n, true); // size = n for numbers 0..n-1
        prime[0] = prime[1] = false;

        // Mark multiples of primes
        for(int i = 2; i * i < n; i++){
            if(prime[i]){
                for(int j = i * i; j < n; j += i){
                    prime[j] = false;
                }
            }
        }

        // Count primes after sieve
        int count = 0;
        for(int i = 2; i < n; i++){
            if(prime[i]) count++;
        }

        return count;
    }
/*my thinking
bool primeCheck(int n){
    int count=0;
    for(int i=2;i<=n/2;i++){
       if(n%i==0){
        count++;
       }
    }
    if(count==0){
        return 1;
    }
    else{
        return 0;
    }
}
int primeCnt(int n){
    int count=0;
    for(int i=2;i<=n;i++){
        if(primeCheck(i)==1){
            count++;
        }
    }
    return count;
}
    */
int main(){
    int n=6;
   // cout<<primeCnt(n);
    cout<<countPrimes(n);

   return 0;
}