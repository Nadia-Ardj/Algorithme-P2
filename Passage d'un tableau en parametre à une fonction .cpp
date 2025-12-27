
#include<iostream>
#include<cmath> 

using namespace std ;

void saisirTableau(int tab[], int taille){
    for(int i=0 ; i<taille ; i++){
    cout<<"entrer les nombres : ";
    cin>>tab[i];
    } 
}
void affichageTableau(int tab[], int taille){
    for (int i = 0; i < taille; i++)
    {
        cout<<tab[i]<<"\t";
    }
}



int main(){
const int taille=5 ;
int t[5]={0} ;
saisirTableau(t,5);
cout<<"les nombres sont : \t";
affichageTableau(t,5);

system("pause");
return 0; 

}