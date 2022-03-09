//
// Created by Siko Szabolcs on 2022. 03. 09..
//
#include "../../../headers/models/structures/user_array.h"

void createUserArray(UserArray** userArray,unsigned int maxUsers){
    *userArray = (UserArray*) malloc(sizeof(UserArray));
    (*userArray)->users =(User**)malloc(maxUsers*sizeof(User*));
    (*userArray)->capacity = maxUsers;
    (*userArray)->numberOfUsers = 0;

}
void deleteUserArray(UserArray** userArray){

    for (int i = 0; i < (*userArray)->numberOfUsers; ++i) {
        deleteUser(&(*userArray)->users[i]);
    }
    free((*userArray)->users);
    free(*userArray);
}
bool addNewUser(UserArray* userArray, User* newUser){
    if(userArray->capacity > userArray->numberOfUsers){

        userArray->users[userArray->numberOfUsers] = newUser;
        userArray->numberOfUsers++;

        return true;
    }
    return false;
}
User* getUserAtPosition(UserArray* userArray,int position){
    return userArray->users[position];
}

