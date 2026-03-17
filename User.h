#ifndef USER_H     // Header guard start (prevents multiple inclusion of this file)
#define USER_H

#include <iostream>   // For input/output operations
#include <vector>     // For storing multiple posts
#include "Post.h"     // Include Post class because a user has posts

using namespace std;

// User class represents a person using the social media system
class User {

private:
    string username;      // Stores the username of the user
    string password;      // Stores the password for login authentication
    vector<Post> posts;   // List of posts created by the user

public:
    // Constructor to create a new user with username and password
    User(string user, string pass);

    // Returns the username
    string getUsername();

    // Checks if the entered password matches the stored password
    bool checkPassword(string pass);

    // Adds a new post to the user's post list
    void createPost(Post p);

    // Returns all posts of the user (reference to avoid copying)
    vector<Post>& getPosts();
};

#endif   // End of header guard

/*
Attributes:
username
password
posts created by user

Functions:
createPost()
getPosts()
checkPassword()
*/