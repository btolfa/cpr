#ifndef PAYLOAD_H
#define PAYLOAD_H

#include <memory>
#include <string>
#include <initializer_list>


struct Pair {
    Pair(const std::string& key, const std::string& value) : key(key), value(value) {}
    Pair(const std::string& key, const int& value) : key(key), value(std::to_string(value)) {}

    std::string key;
    std::string value;
};

class Payload {
  public:
    Payload(const std::initializer_list<Pair>& pairs);
    Payload(const std::string& content) : content(content) {}

    std::string content;
};

#endif
