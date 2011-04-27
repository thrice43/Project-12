#include <iostream>

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
	cout << "\nPlayer Name: ";
	getline(cin, onePlayer.name);
	cout << "Jersey Number: " ;
	getline(cin ,onePlayer.number );    
	cout << "Total Points this Season: " ; 
	cin >> onePlayer.points ;    
	cin.ignore();
}
void printPlayerInfo(Player pl[] ){
	for ( int i = 0 ; i < 3 ; i++ ) {
		cout << headings[i] << setw(10) ; 
		for ( int j =0 ; j < 3 ; j++){			
			if ( i == 0 ) {
				cout << setw(10) << pl[j].name ;
			}
			if ( i == 1 ) {
				cout << setw(10) << pl[j].number;
			}
			if ( i == 2 ){
				cout << setw(8) << pl[j].points ;
			}
			cout << setw(10) << " || " ;
		}
		cout << endl;
	}
	
}
int main(){
    Player littleLeague[3] ; 
    int totPoints = 0 ; 
    for ( int i = 0 ; i < 3 ; i++ ){
		getPlayerInfo(littleLeague[i]) ;	
	}
	printPlayerInfo(littleLeague) ; 
	cin  >> totPoints ;    
    
    
 
}