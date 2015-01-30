#include "Chinese.h"

string ChineseWord(const char* wordId)
{
    txt_vec = FileUtils::getInstance()->getValueVectorFromFile("ChineseWords.xml");
	auto txt_map = txt_vec.at(0).asValueMap();
	string ret = txt_map.at(wordId).asString();
	return ret;
}