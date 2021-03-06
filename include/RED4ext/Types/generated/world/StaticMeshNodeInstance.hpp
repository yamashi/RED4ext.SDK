#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/MeshNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct StaticMeshNodeInstance : world::MeshNodeInstance
{
    static constexpr const char* NAME = "worldStaticMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StaticMeshNodeInstance, 0x100);
} // namespace world
} // namespace RED4ext
