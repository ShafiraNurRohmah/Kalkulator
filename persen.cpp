#include <iostream>
#include <math.h>
using namespace std;
double hasil;
void persen(double a){
	hasil=a/(float)100;
	cout<<"hasil "<<a<<"%"<<"="<<hasil;	
}

main(){
	int pilih;double a; double b;
	cout<<"masukkan angka1 :";cin>>a;
	cout<<"masukkan angka2 :";cin>>b;
	cout<<"Perhitungan :";
	persen(a);

}
