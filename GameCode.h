#pragma once
#include "NewsStory.h"

class GameCode {
//not sure what should be considered private
private:
    int wrongInARow;
    int userScore;
    int theFakeStory;
    NewsStory* stories;

public:
    GameCode();
    void PickStories (int* trueStories, int* fakeStories);
    int GetNumWrongInRow();
    int GetUserScore();
    int GetFakeStory();
    ~GameCode();


/* plan:
 * from an array of news stories pick two true and one lie
 * maybe two arrays, one full of true one full of false?
 *
 * put them in their own 3 elm array, save whatever index the fake one is in
 * display the options to the user, have them decided what the fake is
 *
 * i think this is where the gui comes in? because we probably need buttons
 * somehow
 *
 * keep track of points
 * if they choose the correct answer add 10 points
 * if they choose the wrong answer remove 10 points
 * if they get x many wrong in a row end game?
 */

};
