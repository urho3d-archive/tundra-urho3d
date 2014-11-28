// For conditions of distribution and use, see copyright notice in LICENSE

#include "StableHeaders.h"
#include "Renderer.h"
#include "AssetAPI.h"
#include "AssetCache.h"
#include "Profiler.h"
#include "LoggingFunctions.h"
#include "IParticleAsset.h"

#include <ParticleEffect.h>

namespace Tundra
{

IParticleAsset::IParticleAsset(AssetAPI *owner, const String &type_, const String &name_) :
    IAsset(owner, type_, name_)
{
}

IParticleAsset::~IParticleAsset()
{
    Unload();
}

void IParticleAsset::DoUnload()
{
    particleEffect_.Reset();
}

bool IParticleAsset::IsLoaded() const
{
    return particleEffect_ != nullptr;
}

}