#include "yespowercache.h"

CBlockYespowerCache *yespowerCache = NULL;

CBlockYespowerCache::CBlockYespowerCache(size_t nCacheSize, bool fMemory, bool fWipe) : CLevelDBWrapper(GetDataDir() / "blocks" / "cache", nCacheSize, fMemory, fWipe) {
}

bool CBlockYespowerCache::WriteHash(const uint256 &hash, const uint256 &yespowerHash)
{
    return Write(std::make_pair('y', hash), yespowerHash);
}

bool CBlockYespowerCache::ReadHash(const uint256 &hash, uint256 &yespowerHash)
{
    return Read(std::make_pair('y', hash), yespowerHash);
}
