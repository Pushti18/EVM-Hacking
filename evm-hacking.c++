#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	    int x=(p+q+r)/2;
	    if(p+b+c>x || a+q+c>x|| a+b+r>x || a+b+c>x )
	        cout<<"Yes"<<endl;
	    }
	    else
	       cout<<"No"<<endl;
	   // if(a+b+c >= x){
	   //     cout << "YES" << endl;
	   //     continue;
	   // } 
	   // if(p+b+c>x){
	   //     cout << "YES" << endl;
	   // }
	   // if(a+q+c>x){
	   //     cout << "YES" << endl;
	   // }
	   // if( a+b+r>x ){
	   //     cout << "YES" << endl;
	   // }
	 }
	return 0;
}
