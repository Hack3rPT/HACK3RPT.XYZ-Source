#pragma once
#include "SDK.h"

void ReplaceString(std::string& input, const std::string& what, const std::string& with_what)
{
	size_t index;
	index = input.find(what);
	while (index != std::string::npos)
	{
		input.replace(index, what.size(), with_what);
		index = input.find(what, index + with_what.size());
	}
}


namespace chat_bot {

	std::vector<std::string> chat_spam_eng = {

		
	};


	std::vector<std::string> chat_spam_pt = {

		
	};

}