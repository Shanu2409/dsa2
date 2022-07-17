#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 0; i <= n; i++){
    	cout<<endl;
    	cout<<"      ";

        for(int j = 0; j < n - (i-1); j++){
            cout<<" ";
        }
        
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        
        for(int j = 0; j < i-1; j++){
            cout<<"*";
        }

        
    }
    cout<<endl;
    
    for(int i = 0; i <= n-1 ;i++){
		cout<<"         ";
		
		for(int j = 0; j < 3; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
    //left
    
    
    
    for(int i = 1; i<=n+1; i++){
    	for(int j = 0; j < n - (i-1);j++){
    		cout<<" ";
		}
		
		for(int j = 1; j<i; j++){
			cout<<"*";
		}
		
		if(i == 4 || i == 5){
			for(int j = 0; j<n; j++){
    			cout<<"*";
			}
		}
		cout<<endl;
	}
	
	for(int i = 0; i<=n; i++){
		
		for(int j = 0; j<i; j++){
    		cout<<" ";
		}
		
		
    	
    	for(int j = n-(i+1); j>0; j--){
    		if(j == n-(i+1)){
    			cout<<" ";
			}
    		cout<<"*";
		}
		
		if(i == 0){
			for(int j = 0; j<n; j++){
    			cout<<"*";
			}
		}
    	
		cout<<endl;
	}

    return 0;
}
