//----------------------------------------------------------
//  Name: Bhavya Devarsu
//  Class: CMPSC 121 Section 1
//  Project # 7
// Write a program to assign the seasts on each flight of a plane
//---------------------------------------------------------

#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main() {
    //size of th earray seating
    const int SIZE1=11;
    //array for the seating assignments
    int seating[SIZE1]={0,0,0,0,0,0,0,0,0,0,0};
    //variable for user input for first class or economy seating
    int userin=1;
    //input variable for the yes or no answer
    string ans=" ";
    
    while(userin!=0){
        cout<<"Do you want First class (enter 1) or Economy (enter 2) seat?"<<endl;
        cin>>userin;
        
        //if statement for when the user enters 1 (FIRST CLASS)
        if(userin==1){
            //checks if the last seat in the first class is empty
            if(seating[5]==0){
                ////checks for the available seat in first class
                for(int i=1; i<=5; i++){
                    // if statement to check if the seating is available
                    if(seating[i]==0){
                        cout<<"Your seat number is: "<<i<<" in First class."<<endl;
                        //marks the seat as taken
                        seating[i]=1;
                        i=6;
                    }
                }
            }
            //When the last seat in the first class is taken, checks if the last seat in economy is also taken
            else if(seating[5]==1 && seating[10]==0){
                cout<<"First class is full, but economy has some seats. Do you want econony seats? (type yes or no)"<<endl;
                cin>>ans;
                //if the user wants a seat in economy, gives them a seat in economy
                if(ans=="yes"){
                    //checks which seats are available in economy
                    for(int e=6; e<=10; e++){
                        // if statement to check if the seating is available
                        if(seating[e]==0){
                            cout<<"Your seat number is: "<<e<<" in Economy class."<<endl;
                            //marks the seat as taken
                            seating[e]=1;
                            e=11;
                        }
                    }
                }
                //if statement for when the user does not want an economy seat
                else if(ans=="no"){
                    cout<<"Next flight leaves in 3 hours."<<endl;
                    cout<<"Enter zero to exit."<<endl;
                }
            }
            //If both economy and first class are full
            else if(seating[5]==1 && seating[10]==1){
                cout<<"All seats are full."<<endl;
                cout<<"Next flight leaves in 3 hours."<<endl;
                cout<<"Enter zero to exit."<<endl;
            }
        }
        
        //if statement for when the user enters 2 (ECONOMY)
        else if(userin==2){
            //checks if the seats are open
            if(seating[10]==0){
                for(int e=6; e<=10; e++){
                    // if statement to check if the seating is available
                    if(seating[e]==0){
                        cout<<"Your seat number is: "<<e<<" in Economy class."<<endl;
                        //marks the seat as taken
                        seating[e]=1;
                        e=11;
                    }
                }
            }
           //When the last seat in economy is taken, checks if the last seat in first class is also taken
            else if(seating[10]==1 && seating[5]==0){
                cout<<"Economy is full, but First class has some seats. Do you want First class seats? (type yes or no)"<<endl;
                cin>>ans;
                //if the user wants a seat in First class, gives them a seat in First class
                if(ans=="yes"){
                    for(int i=1; i<=5; i++){
                        // if statement to check if the seating is available
                        if(seating[i]==0){
                            cout<<"Your seat number is: "<<i<<" in First class."<<endl;
                            //marks the seat as taken
                            seating[i]=1;
                            i=6;
                        }
                    }
                }
                //if statement for when the user does not want a first class seat
                else if(ans=="no"){
                    cout<<"Next flight leaves in 3 hours."<<endl;
                    cout<<"Enter zero to exit."<<endl;
                }
            }
            //if statement for when both first class and economy are full
            else if(seating[10]==1 && seating[5]==1){
                cout<<"All seats are full."<<endl;
                cout<<"Next flight leaves in 3 hours."<<endl;
                cout<<"Enter zero to exit."<<endl;
            }
            
        }
    }
    return 0;
}
