//
// Created by Siko Szabolcs on 2022. 04. 06..
//

#ifndef LABS_USER_QUEUE_H
#define LABS_USER_QUEUE_H

#include "../user.h"
#include <stdbool.h>

typedef struct{
    int front;
    int rear;
    unsigned int size;
    User** users;

}UserQueue;

void createUserQueue(UserQueue** userQueue,unsigned int maxSize);
bool queueIsEmpty(UserQueue *userQueue);
bool queueIsFull(UserQueue *userQueue);
void enqueue(UserQueue* userQueue,User *user);
void dequeue(UserQueue* userQueue);
int findElementInQueue(UserQueue* userQueue, int userId);
void printQueue(UserQueue* userQueue, char*destination);
void deleteQueue(UserQueue** userQueue);
int findUser(UserQueue* userQueue,User* user);

#endif //LABS_USER_QUEUE_H
