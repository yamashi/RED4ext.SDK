#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/RandomizerMode.hpp>
#include <RED4ext/Types/generated/scn/SceneGraphNode.hpp>

namespace RED4ext
{
namespace scn { 
struct RandomizerNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnRandomizerNode";
    static constexpr const char* ALIAS = NAME;

    scn::RandomizerMode mode; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    uint32_t numOutSockets; // 4C
    NativeArray<uint8_t, 32> weights; // 50
};
RED4EXT_ASSERT_SIZE(RandomizerNode, 0x70);
} // namespace scn
} // namespace RED4ext
