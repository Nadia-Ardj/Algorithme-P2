
#include<iostream>
using namespace std ;

int main(){

    int N1=0 , N2=0 , N3=0 ; 

 cout<<"entrer le nombre 1 ";
 cin>>N1 ;
 cout<<"\nentrer le nombre 2";
 cin>>N2 ;

 N3=N1 ;
 N1=N2 ;
 N2=N3 ;

 cout<<"le nombre 1 deviennt :"<<N1 <<endl ;
 cout<<"le nombre 2 devient :"<<N2 <<endl ;

 return 0;
}