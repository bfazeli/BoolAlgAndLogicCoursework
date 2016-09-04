//
//  Main.cpp
//  Lab1_QuiltPatterns
//
//  Created by Bijan Fazeli on 9/2/16.
//  Copyright © 2016 Fazeli, Bijan. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

/**
 lengthOfQuiltBlock:    Asks the usr for the length of the quilt.
 
 @return:       Returns the length of the quilt.
 
 */
int lengthOfQuiltBlock () {
    int length;
    
    cout << "Enter the length of the quilt block: ";
    cin >> length;
    
    while (length < 0 || length > 25) {
        cout << "Your number must be between 0 and 25" << endl;
        cout << "Enter the length of the quilt block: ";
        cin >> length;
    }
    
    return length;
}

/**
 widthOfQuiltBlock:     Asks the user for the width of the quilt that'll be made.
 
 @return:       Returns the width of the quilt.
 
 */
int widthOfQuiltBlock () {
    int width;
    
    cout << "Enter the width of the quilt block: ";
    cin >> width;
    
    while (width < 0 || width > 25) {
        cout << "Your number must be between 0 and 25" << endl;
        cout << "Enter the width of the quilt block: ";
        cin >> width;
    }
    
    return width;
}

/**
 evenColumnChar:    Asks the user what char should be filled in for the even portion of the quilt.
 
 @return:       Returns the character that will be used for the evens.
 
 */
char evenColumnChar () {
    char character;
    
    cout << "What character should the even columns be filled with? ";
    cin >> character;
    
    return character;
}


/**
 oddColumnChar:     Asks the user what char should be filled in for the odd portion of the quild.
 
 @return:       Returns the characer that will be used for the odd.
 
 */
char oddColumnChar () {
    char character;
    
    cout << "What character should the odd columns be filled with? ";
    cin >> character;
    
    return character;
}

int main(int argc, const char * argv[]) {
    //Greet usr and display purpose.
    cout << "Welcome to quilt maker." << endl;
    cout << "This program will allow you to create and display your very own quilt pattern." << endl;
    cout << "\nLet us get started.\n\n" << endl;
    
    //Declare and initialize a char var, 'con' to be 'n' which will store whether the usr
    //wants to continue or not
    char con = 'n';
    
    //Do while-loop will determine if usr wants to continue or not depending on his response.
    do {
        
        //Declare and initialize row and column variables of type const int
        const size_t ROW = lengthOfQuiltBlock();
        const size_t COLUMN = widthOfQuiltBlock();
    
        //Declare and initialize the evenChar and oddChar variables of type characters
        char evenChar = evenColumnChar(), oddChar = oddColumnChar();
        
        //Declare a 2D array called quilt to be of size length and width specified by the usr
        char quilt[ROW][COLUMN];
    
        //Fill the 2D array(quilt) && display it
        for (size_t i = 0; i < ROW; i++) {
            for (size_t j = 0; j < COLUMN; j++) {
                quilt[i][j] = (j % 2 == 0) ? evenChar : oddChar;
                cout << quilt[i][j];
            }
            cout << endl;
        }
        
        //Dispay message to usr and ask for usr input on whether he/she wants to continue.
        cout << "To continue, hit 'y' or 'n' to exit: ";
        cin >> con;
        cout << '\n';
        
    }  while (con == 'y');
    
    cout << "Good bye." << endl;
    
    return 0;
}
