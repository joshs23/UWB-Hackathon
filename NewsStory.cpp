#include "NewsStory.h"

class NewsStory {

    NewsStory::NewsStory() {}

    bool NewsStory::isReal() {
        return this->isReal;
    }

    std::string NewsStory::getArticleTitle() {
        return this->articleTitle;
    }

    std::string NewsStory::getURL() {
        return this->URL;
    }


};
