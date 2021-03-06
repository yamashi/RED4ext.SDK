#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/EMeshParticleOrientationMode.hpp>
#include <RED4ext/Types/generated/IParticleDrawer.hpp>

namespace RED4ext
{
struct CMesh;

struct CParticleDrawerMesh : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerMesh";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<CMesh>> meshes; // 38
    EMeshParticleOrientationMode orientationMode; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(CParticleDrawerMesh, 0x50);
} // namespace RED4ext
