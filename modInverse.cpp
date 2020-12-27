int modInverse(int a, int m){
    int flag=0;
    for(int i=1; i<m; i++){
        if(((a*i)%m)==1){
         return i;
         flag=1;
        }
    }
    if(flag==0){
        return -1;
    }
}
  


// { Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		
		//calling function modInverse()
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}  // } Driver Code Ends
