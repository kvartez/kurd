#include <iostream>
#include <fstream>
using namespace std;
int N = 1000;
int main() {
    ifstream in1;
	in1.open("liczby1.txt");
    ifstream in2;
	in2.open("liczby2.txt");
    ofstream nig("naenae.txt");
    int licz,lacz;
    int min =0,max = 0;
    int q = 0;
    for(int i = 0 ; i<N+1;i++){
    	in1 >> oct >> licz;
    	in2 >> dec >> lacz;
    		if (licz==lacz){
                min++;
            }
            if(licz >lacz){
                max++;
            }
	}
	in2.close();
	in1.close();
    nig<<"rowne:";
    nig<<dec<<min;
    nig<<endl<<"wieksze:";
    nig<<dec<<max;
    return 0;
}
