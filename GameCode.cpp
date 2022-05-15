#include "GameCode.h"
#include "NewsStory.h"
#include <iostream>

//constructor
GameCode:: GameCode() {
    stories = new NewsStory [3];
};

//chooses two random two, one random false to put in stories array
void GameCode:: PickStories (int* trueStories, int* fakeStories) {

}

//return number of times guesses have been wrong in a row
int GameCode:: GetNumWrongInRow(){

}

//returns the user's score
int GameCode:: GetUserScore(){

}

//returns index of the fake story
int GameCode::GetFakeStory(){

}

//destructor
GameCode:: ~GameCode(){
    delete [] stories;
}

