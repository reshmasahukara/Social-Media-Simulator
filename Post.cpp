#include "Post.h"  //This includes the class definition from Post.h

Post::Post(int id, string user, string text) { //A constructor runs automatically when a Post object is created.
    postID = id;
    author = user;
    content = text;
    likes = 0;
}

int Post::getPostID() {  //function returns the post ID
    return postID;
}

void Post::addLike() {  //function increases the like count by 1.
    likes++;
}

void Post::addComment(Comment c) {  //function adds a comment to the post.
    comments.push_back(c);
}

void Post::displayPost() {  //This function prints the complete post with likes and comments.

    cout << "----------------------------------" << endl;
    cout << "Post ID: " << postID << endl;
    cout << "User: " << author << endl;
    cout << "Post: " << content << endl;
    cout << "Likes: " << likes << endl;

    cout << "Comments:" << endl;

    for(Comment c : comments) {  //this loops through every comment stored in the vector
        c.displayComment();
    }

    cout << "----------------------------------" << endl;
}

/*
Functions:

addLike()
likes++

addComment()
Adds comment into vector.

displayPost()
Shows post, likes, and comments.
*/