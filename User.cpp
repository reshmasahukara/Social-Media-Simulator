#include "User.h"   // Includes the User class definition from User.h

// Constructor to create a new user with username and password
User::User(string user, string pass) {
    username = user;   // Assign the username
    password = pass;   // Assign the password
}

// Function to return the username
string User::getUsername() {
    return username;   // Returns the stored username
}

// Function to check if the entered password matches the stored password
bool User::checkPassword(string pass) {
    return password == pass;   // Returns true if passwords match, otherwise false
}

// Function to add a new post to the user's post list
void User::createPost(Post p) {
    posts.push_back(p);   // Add the post object to the vector of posts
}

// Function to return the list of posts of the user
vector<Post>& User::getPosts() {
    return posts;   // Returns reference to the posts vector
}

/*
checkPassword()
Verifies login.

createPost()
Adds post to user's post list.

getPosts()
Returns all posts of user.
*/