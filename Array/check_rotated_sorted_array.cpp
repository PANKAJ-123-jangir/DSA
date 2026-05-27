#include<iostream>
#include<vector>
using namespace std;
void check(vector<int>v){
    int count=0;
    int n=v.size();
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i])
        {
        count++;
        }
    }
        if(v[n-1]>v[0]){
            count++;
        }
        
    if(count<=1){
        cout<<"the array is sorted and rotated"<<endl;
    }
    else{
        cout<<"the array is not sorted and rotated"<<endl;
    }    
}
int main(){
    vector<int>vec1={1,1,1,1,1};
    vector<int>vec2={3,4,5,1,2};//these three are condition for sorted and roteted
    vector<int>vec3={1,2,3,4,5};

    //check for not sorted and rotated
    vector<int>vec4={2,1,4,5,2};

    check(vec1);
    check(vec2);
    check(vec3);
    check(vec4);
    return 0;
}