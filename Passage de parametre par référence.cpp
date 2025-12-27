
#include<iostream>
#include<cmath> 

using namespace std ;

void permutation(int &nbr1 , int &nbr2){
    int permu ;
    permu=nbr1;
    nbr1=nbr2;
    nbr2=permu;
}



int main(){
    int n1 , n2 ;
    cout<<"le premier nombre n1 est  :  ";
    cin>>n1;
    cout<<"\nle deuxiemme nombre n2 est  : " ;
    cin>>n2;
   permutation(n1,n2);
   cout<<"\nn1 devient : "<<n1 ;
   cout<<" \nn2 devient : "<<n2<<endl;




system("pause");
return 0; 

}