//
//  main.cpp
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
    
    cout << "What character should the even columns be filled width? ";
    cin >> character;
    
    return character;
}


/**
 oddColumnChar:     Asks the user what char should be filled in for the odd portion of the quild.
 
 @return:       Returns the characer that will be used for the odd.
 
 */
char oddColumnChar () {
    char character;
    
    cout << "What character should the odd columns be filled width? ";
    cin >> character;
    
    return character;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Welcome to the quilt maker :D\n\n";
    
    //Declare and initialize row and column variables of type const int
    const int ROW = lengthOfQuiltBlock();
    const int COLUMN = widthOfQuiltBlock();
    
    //Declare and initialize the evenChar and oddChar variables of type characters
    char evenChar = evenColumnChar(), oddChar = oddColumnChar();
    
    //Declare a 2D array called quilt to be of size length and width specified by the usr
    char quilt[ROW][COLUMN];
    
    //Fill the 2D array(quilt) && display it
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            quilt[i][j] = (j % 2 == 0) ? evenChar : oddChar;
            cout << quilt[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
