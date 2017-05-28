#pragma once

#include "BaseNode.hpp"
#include <dglib/dg.hpp>

class FeatureMatching : public BaseNode
{
public:
    FeatureMatching(std::string nodeName);
    ~FeatureMatching() = default;

public:
    void prepare(const std::string& cacheDir,
                 const std::map<std::string, AttributeList>& in,
                 AttributeList& out,
                 std::vector<std::vector<std::string>>& commandsArgs) override;
    std::string type() const override { return "openmvg.FeatureMatching"; }
};
