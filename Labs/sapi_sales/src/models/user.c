//
// Created by Szabi-PC on 2022. 03. 02..
//
#include "../../headers/models/user.h"

int numberOfUser = 0;

char *getUserType(UserType type) {
    switch (type) {
        case STUDENT:
            return "Studnet";
        case TEACHER:
            return "Teacher";

        default:
            return "undefined";
    }
}

char *getGender(Gender type){
    switch (type) {

        case MALE:
            return "Male";

        case FEMALE:
            return "Female";
            
        default:
            return "Undefined";
    }
}

char *getSpecialization(Specialization type) {
    switch (type) {
        case INFORMATICS:
            return "Informatics";
        case COMPUTER_SCIENCE:
            return "Computer science";
        case AUTOMATION:
            return "Automation";
        case TELECOMMUNICATION:
            return "Telecommunication";
        case MATHEMATICS_INFORMATICS:
            return "Mathematics and Informatics";
        case ENGINEERING:
            return "Engineering";
        default:
            return "Undefined";
    }
}

void setUser(User* newUser,char *name, UserType type, Gender gender, Specialization specialization, Date birthdate) {

    newUser->id = ++numberOfUser;
    newUser->specialization = specialization;
    newUser->birthdate = birthdate;
    newUser->gender = gender;
    newUser->type = type;
    strcpy(newUser->name, name);

}

void printUser(User *user) {
    printf("%s details:\n"
           "\t - ID: %i\n"
           "\t - TYPE: %s\n"
           "\t - SPECIALIZATION: %s\n"
           "\t - BIRTH YEAR: %i\n",
           "\t - BIRTH MONTH: %i\n",
           "\t - BIRTH DAY: %i\n",
           user->name,
           user->id,
           getUserType(user->type),
           getGender(user->gender),
           getSpecialization(user->specialization),
           user->birthdate.year,
           user->birthdate.month,
           user->birthdate.day);


}
Date DateC(int year,int month,int day){
    Date date1;
    date1.year = year;
    date1.month = month;
    date1.day = day;

    return date1;
}

void createUser(User ** newUser) {
    *newUser = (User*) malloc(sizeof(User));
}
void deleteUser(User** pUser){
    free(*pUser);
}
