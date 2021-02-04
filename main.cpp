
#include <iostream>
#include <fstream>
using namespace std;
int N = 1000;
int main() {
    ifstream in1("Users\kvartez\Desktop\liczby1.txt");
    ifstream in2("Users\kvartez\Desktop\liczby2.txt");
    ofstream nig("naenae.txt");
    int licz[N],lacz[N];
    int min =0,max = 0;
    int q = 0;
    if(in1.good()){
        while(!in1.eof()){
        	
            
            in1 >>oct >> licz[q];
            
            
            
            q++;
        }
    }    
    q=0;
	if(in2.good()) {
		while(!in2.eof()){
			in2>>dec>> lacz[q];
			q++;
		}
	}   
	for(int i = 0 ; i<N+1;i++){
		if (licz[i]==lacz[i]){
                min++;
            }
            if(licz[i] >lacz[i]){
                max++;
            }
	}
    nig<<"rowne:";
    nig<<dec<<min;
    nig<<endl<<"wieksze:";
    nig<<dec<<max;
    return 0;
}
