#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const string headings[3] =  {"| Name: " ,"| Number: " , "| Total Points: " };

struct Player{
    string name ; 
    string number ; 
    int points; 
};


void getPlayerInfo(Player &onePlayer){
	cout << "\n" << setw(26) << "Player Name: ";
	getline(cin, onePlayer.name);
	cout << setw(26) << "Jersey Number: " ;
	getline(cin ,onePlayer.number );    
	cout << setw(26) << "Total Points this Season: " ; 
	cin >> onePlayer.points ;    
	cin.ignore();
}
void printPlayerInfo(Player pl[] ){
	int totScore = 0 ; 
	int width = 15 ; 
	for ( int i = 0 ; i < 3 ; i++ ) {
		cout << headings[i] << setw(15) ; 
		for ( int j =0 ; j < 3 ; j++){			
			if ( i == 0 ) {
				if ( j == 0 ){
					width = 10 ; 
				}else{
					width = 3 ; 
				}
				cout << setw(width) << pl[j].name << "     ";
				cout << "|" ; 
			}
			if ( i == 1 ) {
				if ( j == 0 ) {
					width = 8; 
				}
				else{ 
					width = 3; 
				}
				cout << setw(width) << pl[j].number <<  "     ";
				cout << "|" ; 
			}
			if ( i == 2 ){
				if ( j == 0 ){ 
					width = 2 ; 
				}
				else { 
					width = 3; 
				}
				cout << setw(width) << pl[j].points << "     ";
				totScore+=pl[j].points ;
				cout << "|" ; 
			}
			cout << setw(10) << " " ;
		}
		cout << endl;
	}
	cout << "\nTotal Score for all: " << totScore << endl ; 
}
int main(){
    Player littleLeague[3] ; 
    int totPoints = 0 ; 
    for ( int i = 0 ; i < 3 ; i++ ){
		getPlayerInfo(littleLeague[i]) ;	
	}
	printPlayerInfo(littleLeague) ; 
}
