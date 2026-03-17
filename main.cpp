#include <iostream> // iostream → used for input and output (cin, cout)
#include <vector>  //vector → used to store multiple users
#include "User.h"
/*
"User.h" → custom class that likely contains:
user details
password
posts
functions like createPost() and getPosts()
*/
using namespace std;

vector<User> users; //Stores all registered users
User* currentUser = nullptr;  //User* currentUser->Pointer to the currently logged-in user.     nullptr means no one logged in

int postCounter = 1;  //Used to give each post a unique ID.

void signup() {  //creates a new user account.

    string username, password;

    cout << "Enter username: ";  //asks username
    cin >> username;

    cout << "Enter password: ";  //ask password
    cin >> password;

    users.push_back(User(username, password));    //creates user onject and store it in vector

    cout << "Signup successful!\n";
}

void login() {  //Checks if the username and password match

    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    for(User &u : users) {  //loop through users

        if(u.getUsername() == username && u.checkPassword(password)) {  //check credentials
            currentUser = &u;
            cout << "Login successful!\n";
            return;
        }
    }

    cout << "Invalid login\n";
}

void createPost() {  //user writes a post

    string text;  //This variable stores what the user writes as the post.

    cin.ignore();  //This removes extra newline characters left in the input buffer from previous cin
    cout << "Enter post: ";
    getline(cin, text);  //getline() allows the user to write a full sentence including spaces.

    Post p(postCounter++, currentUser->getUsername(), text);  //Create a Post object
/*
postCounter++               unique post ID
currentUser->getUsername()	author name
text	                    post content
*/
    currentUser->createPost(p);
}

void showFeed() {  //Shows posts from all users.

    for(User &u : users) {

        vector<Post> &posts = u.getPosts();  //Get their posts:

        for(Post &p : posts) {
            p.displayPost();  //Display each post:
        }
    }
}

int main() {  //main function

    int choice;

    while(true) {

        cout << "\n1 Signup\n";
        cout << "2 Login\n";
        cout << "3 Exit\n";

        cin >> choice;

        if(choice == 1)
            signup();

        else if(choice == 2) {

            login();

            if(currentUser != nullptr) {

                int option;

                while(true) {

                    cout << "\n1 Create Post\n";
                    cout << "2 View Feed\n";
                    cout << "3 Logout\n";

                    cin >> option;

                    if(option == 1)
                        createPost();

                    else if(option == 2)
                        showFeed();

                    else if(option == 3) {
                        currentUser = nullptr;
                        break;
                    }
                }
            }
        }

        else if(choice == 3)
            break;
    }
}
/*
to run the pgm in terminal':
.\social.exe
*/