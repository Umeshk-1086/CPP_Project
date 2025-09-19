#include<iostream>

using namespace std;
int main(){
    int x;
    int p1w=0,p2w=0;
    cin>>x;
    for(int i=0;i<x;i++){

    int p1,p2;
    cout<<"Option for players are "<<endl<<"1.Rock"<<endl<<"2.Paper"<<endl<<"3.Scissors"<<endl;
    cout<<"Enter the option for palyer 1"<<endl;
    cin>>p1;
    cout<<"Enter the option for palyer 2"<<endl;
    cin>>p2;
    if(p1==1&&p2==2){
        cout<<"Player 2 Wins\n"; 
        p2w++;
    }
    else if(p1==2&&p2==1){
        cout<<"Player 1 Wins\n";
        p1w++;
        
    }
    else if(p1==2&&p2==3){
        cout<<"Player 2 Wins\n";
        p2w++;
        
    }
    else if(p1==3&&p2==2){
        cout<<"Player 1 Wins\n";
        p1w++;
        
    }
    else if(p1==1&&p2==3){
        cout<<"Player 1 Wins\n";
        p1w++;
        
    }
    else if(p1==3&&p2==1){
        cout<<"Player 2 Wins\n";
        p2w++;
    }
        
    
    else if(p1==p2){
        cout<<"Its a Draw\n";
    }
    else{
        cout<<"Invalid Option";
    }
    }
    
    if(p1w==p2w)cout<<"Both have won equal no. of games\n";
    else if(p1w>p2w)cout<<"Player 1 Wins more games\n";
    else cout<<"Player 2 Wins more games\n";
    return 0;
}


