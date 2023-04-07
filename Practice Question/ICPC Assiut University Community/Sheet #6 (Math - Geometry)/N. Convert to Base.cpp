#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll num(char c){ 
	if(c >= '0' && c <= '9'){ 
		return c - '0';
	}else {  
      
		return c - 'A' + 10; 
		
	}
}

ll toDec(char* value,ll base){ 
	ll size = strlen(value);
	ll power = 1; 
	ll result = 0;
	for(int i = size - 1;i>=0;i--){ 
		result += num(value[i]) * power;  
		power *= base;
	}
	return result;
}

char reNum(ll num){ 
	if(num >= 0 && num <= 9){ 
		return num + '0';
	} else {  
 		return num + 'A' - 10; 
	}
}

char * fromDec(char res[],ll base,ll n){
	int d=0; 
	while(n > 0){
		res[d++] = reNum(n % base);
		n /= base;
	} 
	res[d] = '\0';
	reverse(res,res+d);
	return res;
}

int main() {

	int ca;
	cin>>ca;
	if(ca == 1){
		char arr[35] ={""};
		cin>>arr;
		ll base;
		cin>>base;
		cout<<toDec(arr,base);
	} else {
		ll n,base;
		cin>>n>>base;
		char res[100];
		cout<<fromDec(res,base,n);
	}

    return 0;
}