#include "Comment.h"  //This includes the class declaration from Comment.h.

Comment::Comment(string user, string txt) {  //this is the constructor of the class.
    username = user;  //ex:Comment c("Rahul", "Nice post!");
    text = txt;
}
/*
username → Rahul
text → Nice post!
*/
void Comment::displayComment() {  //prints the comment on the screen
    cout << username << ": " << text << endl;
}

/*
This implements the class functions
Example output:   Rahul: Nice post!
*/