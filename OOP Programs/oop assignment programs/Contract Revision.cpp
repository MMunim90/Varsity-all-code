#include <bits/stdc++.h>

using namespace std;

int main() {

    char d;
    string n;
    int i,k,chk;
    while(cin>>d){
        cin>>n;
        k=n.size();
        chk=0;
        if(d=='0' && n[0]=='0')
            break;
        for(i=0; i<k; i++){
            if(n[i]=='0'){
                if(chk!=0)
                    cout<<n[i];
            }
            else if(n[i]!=d)
            {
                cout<<n[i];
                chk=1;
            }
        }
        if(chk==0)
            cout<<0<<endl;
        else
            cout<<endl;
    }

    return 0;
}
