/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* _ZN12ValueManager7GetByIdEl from https://github.com/Eebit/fe11-us src/state_manager.cpp (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef s32 BOOL;
struct Block {
    struct Block *prev;
    struct Block *next;
    u32 size;
    u16 offset;
    u8 free;
    u8 remainder;
};
class Heap {
public:
    struct Block *head;

    static void Init(void);

    void Init(struct Block *block, s32 size);
    s32 SizeOf(void *);
    u32 GetLargestFreeSize(void);

    void *AllocateAlignedFromFront(struct Block *block, u32 size, u32 alignment);
    void *AllocateAlignedFromBack(struct Block *, u32 size, u32 alignment);
    void FreeAndCoalesce(struct Block *block);
    void *Alloc(u32 size);
    void *_01ffb9bc(u32 size);
    void *_01ffba40(u32 size, u32 alignment);
    void *_01ffbaec(u32 size, u32 alignment);
    void Free(void *addr);
};
extern struct Heap gHeap;
struct SaveBuffer {
    u32 unk_00;
    u8 *unk_04;

    inline u8 ReadByte() {
        u8 tmp = *unk_04;
        unk_04++;
        return tmp;
    }

    inline u16 ReadShort() {
        u16 a = ReadByte();
        a |= (ReadByte() << 8);
        return a;
    }

    inline u32 ReadWord() {
        u16 a = ReadShort();
        u16 b = ReadShort();

        return a | b << 16;
    }

    inline void WriteByte(u8 byte) {
        *this->unk_04 = byte;
        this->unk_04++;
    }

    inline void WriteShort(u16 halfword) {
        WriteByte(halfword);
        WriteByte(halfword >> 8);
    }

    inline void WriteWord(u32 word) {
        WriteShort(word);
        WriteShort(word >> 16);
    }
};
class FlagManager {
public:
    char **unk_04;
    u8 *unk_08;
    u32 unk_0c;

    virtual void ClearById(u32);
    virtual void ClearByName(char *);
    virtual ~FlagManager() {
        if (this->unk_04 != 0) {
            gHeap.Free(this->unk_04);
        } else {
            gHeap.Free(this->unk_08);
        }
    };

    void func_020492a0(void);
    s32 FindIdByName(char *);
    BOOL GetById(u32);
    BOOL GetByName(char *);
    void SetById(u32);
    void SetByName(char *);
    BOOL func_02049438(void);
    void func_0204947c(void);
    void RegisterName(char *, BOOL);
    void RemoveById(u32);
    void RemoveAll(void);
    void SaveFlags(struct SaveBuffer *);
    void LoadFlags(struct SaveBuffer *);
    void LoadFlags(struct SaveBuffer *, s32);
};
class ValueManager : public FlagManager {
public:
    virtual void ClearById(u32);
    virtual void ClearByName(char *);
    virtual ~ValueManager() {};

    s32 GetById(s32);
    s32 GetByName(char *);
    void SetById(s32, s32);
    void SetByName(char *, s32);
    void SaveValues(struct SaveBuffer *);
    void LoadValues(struct SaveBuffer *);
    void LoadValues(struct SaveBuffer *, s32);
};
s32 ValueManager::GetById(s32 valueId) {
    u32 *values = reinterpret_cast<u32 *>(this->unk_08);
    return values[valueId];
}
