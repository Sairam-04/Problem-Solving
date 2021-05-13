#include <iostream>
using namespace std;

int main()
{
	int count=0;
	int m,n;
	cin>>m>>n;;
	for(int i=m;i<=n;i++){
	    count=0;
        for(int j=2;j*j<=n;j++){
            if(i%j==0){
                count=1;
                break;
            }
        }
        if(count==0){
            cout<<i<<"\n";
        }
	}
	
	return 0;
}