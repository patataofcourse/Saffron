#ifndef RHMPATCH_H
#define RHMPATCH_H

namespace Megamix {
    extern char* rhmpatchBuffer;
    int LoadC00Bin(u32 region, const std::string &path="_:/spicerack/C00.bin");
    void PatchTickflowAddresses(u32 region);
}

#endif