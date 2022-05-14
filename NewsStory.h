#include <iostream>
#include <fstream>

#pragma once

class NewsStory{

private:
    bool isReal;
    std::string URL;
    std::string articleTitle;

public:
    NewsStory();
    bool IsReal();
    std::string getArticleTitle();
    std::string getURL();

};
