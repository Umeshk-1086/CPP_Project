#include<iostream>

using namespace std;
int main(){
    int p1,p2;
    cout<<"Option for players are "<<endl<<"1.Rock"<<endl<<"2.Paper"<<endl<<"3.Scissors"<<endl;
    cout<<"Enter the option for palyer 1"<<endl;
    cin>>p1;
    cout<<"Enter the option for palyer 2"<<endl;
    cin>>p2;
    if(p1==1&&p2==2){
        cout<<"Player 2 Wins";
    }
    else if(p1==2&&p2==1)cout<<"Player 1 Wins";
    else if(p1==2&&p2==3)cout<<"Player 2 Wins";
    else if(p1==3&&p2==2)cout<<"Player 1 Wins";
    else if(p1==1&&p2==3)cout<<"Player 1 Wins";
    else if(p1==3&&p2==1)cout<<"Player 2 Wins";
    
    else if(p1==p2){
        cout<<"Its a Draw";
    }
    else{
        cout<<"Invalid Option";
    }
    
    return 0;
}