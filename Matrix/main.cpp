#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int First [3][3];
	int sec [3]={0,0,0};
	cout<<"Please enter numbers:"<<endl;
	for(int i=0 ; i<3 ; i++){
     	for(int j=0 ; j<3 ; j++){
           cin>>First[i][j];
     }
}
    for(int i=0 ; i<3 ; i++){
     	for(int j=0 ; j<3 ; j++){
     		if(j==0){
           sec[0]+=First [i][j];
       }
     }
}
    for(int i=0 ; i<3 ; i++){
     	for(int j=0 ; j<3 ; j++){
     		if(j==1){
           sec[1]+=First [i][j];
       }
     }
}
    for(int i=0 ; i<3 ; i++){
     	for(int j=0 ; j<3 ; j++){
     		if(j==2){
           sec[2]+=First [i][j];
       }
     }
}
    cout <<sec[0]<<"   "<<sec[1]<<"   "<<sec[2]<<"   ";
	return 0;
}