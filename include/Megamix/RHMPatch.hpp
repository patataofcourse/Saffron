#ifndef RHMPATCH_H
#define RHMPATCH_H

namespace Megamix {
    extern char* rhmpatchBuffer;
    int LoadC00Bin(const std::string &path="_:/rhmm/C00.bin");
    void PatchTickflowAddresses(u64 region);
}

#endif