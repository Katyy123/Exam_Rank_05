#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {

}

TargetGenerator::~TargetGenerator() {

    std::map<std::string, ATarget *>::iterator it_begin;//map_target.begin();
    std::map<std::string, ATarget *>::iterator it_end = map_target.end();

    for (it_begin = map_target.begin(); it_begin != it_end; ++it_begin)
		delete it_begin->second;
    map_target.clear();
}

void TargetGenerator::learnTargetType(ATarget* target) {
    
    if (target)
        map_target.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(const std::string &name) {
    
    std::map<std::string, ATarget *>::iterator it = map_target.find(name);

	if (it != map_target.end())
		delete it->second;
    map_target.erase(name);
}

ATarget* TargetGenerator::createTarget(const std::string &name) {
    
    std::map<std::string, ATarget *>::iterator it = map_target.find(name);
    
    if (it != map_target.end())
        return map_target[name];
    return NULL;
}
