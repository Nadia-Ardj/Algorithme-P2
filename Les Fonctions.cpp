
#include<iostream>
#include<cmath> 

using namespace std ;

void welcome(){
    cout<<"helooo\n " ;
}
int recupAge(){
    int age=0 ;
    cout<<"rentrer votre age \t";
    cin>>age ;
    return age ;  
}
double recupNbr(){
    double nbr ;
    cout<<"entrer votre nombre \t";
    cin>> nbr ;
    return nbr ;
}
double addition(double n1 , double n2 ){
    return n1+n2 ;
}


int main(){
int monage ;
double nbr1 , nbr2 ;
welcome();
monage=recupAge();
nbr1=recupNbr();
nbr2=recupNbr();
cout<<"votre age est : "<<monage<<endl;
 cout<<"la somme des nombres est :  "<<addition(nbr1 ,  nbr2 ) <<endl; 


system("pause");
return 0; 

}