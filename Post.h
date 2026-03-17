#ifndef POST_H        // Header guard start (prevents multiple inclusion)
#define POST_H

#include <iostream>   // For input/output operations
#include <vector>     // For storing multiple comments
#include "Comment.h"  // Include Comment class because Post contains comments

using namespace std;

// Post class represents a single post in the social media system
class Post {

private:
    int postID;              // Unique ID of the post
    string author;           // Username of the person who created the post
    string content;          // Text/content of the post
    int likes;               // Number of likes on the post
    vector<Comment> comments; // List of comments on this post

public:
    // Constructor to create a post with ID, author name, and content
    Post(int id, string user, string text);

    // Returns the ID of the post
    int getPostID();

    // Increases the like count by 1
    void addLike();

    // Adds a comment object to the comments list
    void addComment(Comment c);

    // Displays post details including comments and likes
    void displayPost();
};

#endif   // Header guard end

/*
attributes:
postID → unique ID
author → username
content → post text
likes → like count
comments → list of comments
Vector stores multiple comments.
*/