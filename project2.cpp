//Rock Paper Sizer Game :
#include<iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int main(){
    
    //Start Game Logic
    char UserTurn;
    char ComputerTurn;
    int UserCount = 0;
    int ComputerCount = 0;
    cout<<"Rock PAPER AND SIZER GAME:"<<endl<<"How To Play :\n1.Step: R Stand For Rock , P Stand For Paper , S Stand For Sizer.\n2.Step: Enter Any of Letter R,P,S\n3.Step: Press C for Closed The Game\n[Note: Dont Enter another Letter Expect \"R,P,S\"]";
    while(true){
        srand(static_cast<unsigned int>(time(0)));
        int random_number = rand() % 3;
        // cout<<endl<<random_number<<endl;
        cout<<"\n\nLet's Begin the game: Enter your Turn:  ";
        cin>>UserTurn;
        if(UserTurn == 'C' || UserTurn == 'c'){
             break;
        }

    if(random_number == 0){
        ComputerTurn = 'R';
      if(UserTurn == 'p'){
          ComputerTurn = 'r';
          if(ComputerTurn == 'r' && UserTurn == 'p'){
                ComputerCount;
                UserCount += 1;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nUser Won and Computer Lose\n";
          }
      }
      else if(UserTurn == 'P'){
         if(ComputerTurn == 'R' && UserTurn == 'P'){
                ComputerCount;
                UserCount += 1;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nUser Won and Computer Lose\n";
          }
      }
      else if(UserTurn == 's'){
        ComputerTurn = 'r';
         if(ComputerTurn == 'r' && UserTurn == 's'){
                ComputerCount += 1;
                UserCount;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nComputer Won and User Lose\n";
          }
      }
      else if(UserTurn == 'S'){
         if(ComputerTurn == 'R' && UserTurn == 'S'){
                ComputerCount += 1;
                UserCount;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nComputer Won and User Lose\n";
          }
      }
      else if(UserTurn == 'r'){
        ComputerTurn = 'r';
         if(ComputerTurn == 'r' && UserTurn == 'r'){
                ComputerCount;
                UserCount;
                 cout<<"\nScore: "<<endl<<"Computer: "<<ComputerCount<<" User: "<<UserCount<<endl;
                 cout<<"\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nBoth are Same \"It's a Tie\"\n";
       }
      }
      else if(UserTurn == 'R'){
         if(ComputerTurn == 'R' && UserTurn == 'R'){
                ComputerCount;
                UserCount;
                 cout<<"\nScore: "<<endl<<"Computer: "<<ComputerCount<<" User: "<<UserCount<<endl;
                 cout<<"\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nBoth are Same \"It's a Tie\"\n";
       }
      }
      else{
             cout<<"Wrong Game Input";
      }

   }



   else if(random_number == 1){
      ComputerTurn = 'P';
      if(UserTurn == 'r'){
          ComputerTurn = 'p';
          if(ComputerTurn == 'p' && UserTurn == 'r'){
                ComputerCount += 1;
                UserCount;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nComputer Won and User Lose\n";
          }
      }
      else if(UserTurn == 'R'){
         if(ComputerTurn == 'P' && UserTurn == 'R'){
                ComputerCount += 1;
                UserCount;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nComputer Won and User Lose\n";
          }
      }
      else if(UserTurn == 's'){
        ComputerTurn = 'p';
         if(ComputerTurn == 'p' && UserTurn == 's'){
                ComputerCount;
                UserCount += 1;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nUser Won and Computer Lose\n";
          }
      }
      else if(UserTurn == 'S'){
         if(ComputerTurn == 'P' && UserTurn == 'S'){
                ComputerCount;
                UserCount += 1;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nUser Won and Computer Lose\n";
          }
      }
      else if(UserTurn == 'p'){
        ComputerTurn = 'p';
         if(ComputerTurn == 'p' && UserTurn == 'p'){
                ComputerCount;
                UserCount;
                 cout<<"\nScore: "<<endl<<"Computer: "<<ComputerCount<<" User: "<<UserCount<<endl;
                 cout<<"\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nBoth are Same \"It's a Tie\"\n";
       }
      }
      else if(UserTurn == 'P'){
         if(ComputerTurn == 'P' && UserTurn == 'P'){
                ComputerCount;
                UserCount;
                 cout<<"\nScore: "<<endl<<"Computer: "<<ComputerCount<<" User: "<<UserCount<<endl;
                 cout<<"\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nBoth are Same \"It's a Tie\"\n";
       }
      }
      else{
             cout<<"Wrong Game Input";
      }

   }



    else if(random_number == 2){
        ComputerTurn = 'S';
      if(UserTurn == 'r'){
          ComputerTurn = 's';
          if(ComputerTurn == 's' && UserTurn == 'r'){
                ComputerCount;
                UserCount += 1;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nUser Won and Computer Lose\n";
          }
      }
      else if(UserTurn == 'R'){
         if(ComputerTurn == 'S' && UserTurn == 'R'){
                ComputerCount;
                UserCount += 1;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nUser Won and Computer Lose\n";
          }
      }
      else if(UserTurn == 'p'){
        ComputerTurn = 's';
         if(ComputerTurn == 's' && UserTurn == 'p'){
                ComputerCount += 1;
                UserCount;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nComputer Won and User Lose\n";
          }
      }
      else if(UserTurn == 'P'){
         if(ComputerTurn == 'S' && UserTurn == 'P'){
                ComputerCount += 1;
                UserCount;
                cout<<"\nScore: Computer: "<<ComputerCount<<" User: "<<UserCount;
                cout<<"\n\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nComputer Won and User Lose\n";
          }
      }
      else if(UserTurn == 's'){
        ComputerTurn = 's';
         if(ComputerTurn == 's' && UserTurn == 's'){
                ComputerCount;
                UserCount;
                 cout<<"\nScore: "<<endl<<"Computer: "<<ComputerCount<<" User: "<<UserCount<<endl;
                 cout<<"\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nBoth are Same \"It's a Tie\"\n";
       }
      }
      else if(UserTurn == 'S'){
         if(ComputerTurn == 'S' && UserTurn == 'S'){
                ComputerCount;
                UserCount;
                 cout<<"\nScore: "<<endl<<"Computer: "<<ComputerCount<<" User: "<<UserCount<<endl;
                 cout<<"\nUser: "<<UserTurn<<" Computer: "<<ComputerTurn<<endl<<"\nBoth are Same \"It's a Tie\"\n";
       }
      }
      else{
             cout<<"Wrong Game Input";
      }

   }
    else{
        //server loss try again
        cout<<"\nServer Busy\"Try Again \3\"";
    }

 } 
 cout<<"\n\nThanks for Playing Our Game \3";
    return 0;
}