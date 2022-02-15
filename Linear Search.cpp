#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={12,45,14,50,50,14};
    int num=0;
    cout<<"Enter Your Search Key"<<endl;
    cin>>num;
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(num==v[i])
        {
            count+=1;
        }
    }
    if(count==0)
    {
        cout<<num<<" "<<"NOT FOUND"<<endl;
    }
    else
    {
        cout<<num<<" "<<"Found"<<count<<"times in data"<<endl;
    }
	return 0;
}
