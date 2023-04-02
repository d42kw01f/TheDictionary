#include "getWordType.h"
#include <iostream>
#include <map>


std::string getTypeDisplayName(const std::string& type) {
    static const std::map<std::string, std::string> type_display_map = {
            {"n", "[noun]"},
            {"v", "[verb]"},
            {"adv", "[adverb]"},
            {"adj", "[adjective]"},
            {"prep", "[preposition]"},
            {"misc", "[miscellaneous]"},
            {"pn", "[proper noun]"},
            {"n_and_v", "[noun and verb]"}
    };

    auto it = type_display_map.find(type);
    if (it != type_display_map.end()) {
        return it->second;
    } else {
        return "[unknown]";
    }
}
