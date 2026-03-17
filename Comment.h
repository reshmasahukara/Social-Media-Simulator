//This code is the header file for the Comment class
#ifndef COMMENT_H //header guard
#define COMMENT_H //header guard

#include <iostream>
#include <string>

using namespace std;

class Comment {  //declares a class named "comment"

private:  //they cannot be accessed directly outside the clas
    string username;
    string text;

public:  //can be accessed outside the class.
    Comment(string user, string txt);
    void displayComment();
};

#endif
/*
This defines a class blueprint.

Attributes:
username → who commented
text → comment content

Functions:
constructor → creates comment
displayComment → prints comment
*/