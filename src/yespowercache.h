#ifndef YESPOWERCACHE_H
#define YESPOWERCACHE_H

#include "uint256.h"
#include "leveldbwrapper.h"

class CBlockYespowerCache : public CLevelDBWrapper
{
public:
    CBlockYespowerCache(size_t nCacheSize, bool fMemory = false, bool fWipe = false);
private:
    CBlockYespowerCache(const CBlockYespowerCache&);
    void operator=(const CBlockYespowerCache&);
public:
    bool WriteHash(const uint256 &hash, const uint256 &yespowerHash);
    bool ReadHash(const uint256 &hash, uint256 &yespowerHash);
};

#endif // YESPOWERCACHE_H
