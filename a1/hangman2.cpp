#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
    srand(time(0)); //randomseed
    int x = rand()%10;//random array
    int wordlength;
    string a[10] = {"orphan", "heating", "bastion", "cable", "worm", "bachelor", "mighty", "metal", "frame", "ocean",}; //strings
    char orphan[6] = {'o','r','p','h','a','n'};
    char heating[7] = {'h','e','a','t','i','n','g'};
    char bastion[7] = {'b','a','s','t','i','o','n'};
    char cable[5] = {'c','a','b','l','e'};
    char worm[4] = {'w','o','r','m'};
    char bachelor[8] = {'b','a','c','h','e','l','o','r'};
    char mighty[6] = {'m','i','g','h','t','y'};
    char metal[5]= {'m','e','t','a','l'};
    char frame[5]= {'f','r','a','m','e'};
    char ocean[5] = {'o','c','e','a','n'};
    char userinput;
    int wincounter = 0;
    int guesscounter = 0;
    char ga[guesscounter];


    wordlength = a[x].length();
    char b[wordlength];



    cout << "THIS IS FOR TESTING PURPOSES" << endl;
   cout << "THE WORD IS: " << a[x] << endl;//checking
   cout << endl;
   cout << endl;
   cout << endl;
   cout << endl;

    cout << "welcome to hangman!" << endl;
    cout << "guess the string below to win the game!" << endl << endl;
    for(int i = 0; i < wordlength; i++){//fills array with hyphens
        b[i] = '-';
        cout << b[i];
    }//fills array with hyphens


    do{
    cout << endl;
    cin >> userinput;


    switch(x){//fills array with letters depending on random number
        case 0:
        for(int i = 0; i < wordlength; i++){
            if(userinput == orphan[i]){
                    if(userinput == ga[i]){
                        //b[i] = orphan[i];
                        system("clear");
                    }
                    else{
                        b[i] = orphan[i];
                        wincounter++;
                        system("clear");
                    }

            }
            else{
                //guesscounter ++;
                system("clear");
                //cout << "INCORRECT" << endl;
            }
        }//if user is correct replaces for orphan
        break;

        case 1:
        for(int i = 0; i < wordlength; i++){
            if(userinput == heating[i]){
                    if(userinput == ga[i]){
                        system("clear");
                    }
                    else{
                        b[i] = heating[i];
                        wincounter++;
                        system("clear");
                    }

            }
            else{
                system("clear");
            }
        }//if user is correct replaces for heating
        break;

        case 2:
        for(int i = 0; i < wordlength; i++){
            if(userinput == bastion[i]){
                    if(userinput == ga[i]){
                        system("clear");
                    }
                    else{
                        b[i] = bastion[i];
                        wincounter++;
                        system("clear");
                    }

            }
            else{
                system("clear");
            }
        }//if user is correct replaces for heating
        break;

        case 3:
            for(int i = 0; i < wordlength; i++){
            if(userinput == cable[i]){
                    if(userinput == ga[i]){
                        system("clear");
                    }
                    else{
                        b[i] = cable[i];
                        wincounter++;
                        system("clear");
                    }

            }
            else{
                system("clear");
            }
        }//if user is correct replaces for cable
        break;

        case 4:
            for(int i = 0; i < wordlength; i++){
            if(userinput == worm[i]){
                    if(userinput == ga[i]){
                        system("clear");
                    }
                    else{
                        b[i] = worm[i];
                        wincounter++;
                        system("clear");
                }
            }
            else{
                system("clear");
            }
        }//if user is correct replaces for worm
        break;

        case 5:
            for(int i = 0; i < wordlength; i++){
            if(userinput == bachelor[i]){
                if(userinput == ga[i]){
                        system("clear");
                    }
                else{
                b[i] = bachelor[i];
                wincounter++;
                system("clear");
                }
            }
            else{
                system("clear");
            }
        }//if user is correct replaces for bachelor
        break;

        case 6:
            for(int i = 0; i < wordlength; i++){
            if(userinput == mighty[i]){
                if(userinput == ga[i]){
                        system("clear");
                    }
                else{
                b[i] = mighty[i];
                wincounter++;
                system("clear");
                }
            }
            else{
                system("clear");
            }
        }//if user is correct replaces for mighty
        break;

        case 7:
            for(int i = 0; i < wordlength; i++){
            if(userinput == metal[i]){
                if(userinput == ga[i]){
                        system("clear");
                    }
                else{
                b[i] = metal[i];
                wincounter++;
                system("clear");
                }
            }
            else{
                system("clear");
            }
        }//if user is correct replaces for metal
        break;

        case 8:
            for(int i = 0; i < wordlength; i++){
            if(userinput == frame[i]){
                if(userinput == ga[i]){
                        system("clear");
                    }
                else{
                b[i] = frame[i];
                wincounter++;
                system("clear");
                }
            }
            else{
                system("clear");
            }
        }//if user is correct replaces for frame
        break;

        case 9:
            for(int i = 0; i < wordlength; i++){
            if(userinput == ocean[i]){
                if(userinput == ga[i]){
                        system("clear");
                    }
                else{
                b[i] = ocean[i];
                wincounter++;
                system("clear");
                }
            }
            else{
                system("clear");
            }
        }//if user is correct replaces for ocean
        break;

        default:
            cout << "ERROR" << endl;
    }//switch case
    ga[guesscounter] = userinput;
    guesscounter++;
    cout << "YOUR GUESSES SO FAR: ";
    for(int i = 0; i < guesscounter; i++){
        cout << ga[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < wordlength; i++){
        cout << b[i];
    }//prints it out


    }while(wincounter != wordlength);//do


    system("clear");
    cout << endl;

    cout << "congrats you win!" << endl;
    cout << endl;
    cout << "the string was: ";

    for(int i=0; i < wordlength; i++){
        cout << b[i];
    }
    cout << endl;
    cout << endl;
    cout << "you guessed the string in: " << guesscounter << " guesses" << endl;

}//end of main
