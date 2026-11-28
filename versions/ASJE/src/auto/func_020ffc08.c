/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FSi_InitRom from https://github.com/RonyxDumb/mkds libs/NitroSDK/fs/src/overlay_rom_loader.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef struct OSThreadQueue {
    struct OSThread *mHead;
    struct OSThread *mTail;
} OSThreadQueue;
typedef struct OSMutex {
    OSThreadQueue mQueue;
    struct OSThread *mHolder;
    u32 mLockCount;
    struct OSMutex *mNext;
    struct OSMutex *mPrev;
} OSMutex;
typedef struct OSMutexQueue {
    OSMutex *mHead;
    OSMutex *mTail;
} OSMutexQueue;
typedef struct FSFile FSFile;
typedef struct FSArchive FSArchive;
typedef s32 (*FS_ARCHIVE_READ_FUNC)(FSArchive *archive, void *dst, u32 src, u32 len);
typedef s32 (*FS_ARCHIVE_WRITE_FUNC)(FSArchive *archive, const void *src, u32 dst, u32 len);
typedef s32 (*FS_ARCHIVE_PROC_FUNC)(FSFile *file, u32 command);
typedef struct FSFileID {
    FSArchive *mArc;
    u32 mFileId;
} FSFileID;
typedef union FileLocation {
    struct {
        u32 mUnk_00;
        u32 mUnk_04;
        u32 mUnk_08;
    } w;
    struct {
        FSFileID mId;
        u32 mUnk_08;
    } d;
    struct {
        FSArchive *mArc;
        u16 mOwnId;
        u16 mIndex;
        u32 mPos;
    } h;
    struct {
        struct FSDirEntry *mEntry;
        u32 mSkipString;
        u32 mUnk_08;
    } e;
    struct {
        u8 *mBuf;
        u32 mBufLen;
        u16 mTotalLen;
        u16 mDirId;
    } b;
    struct {
        void *mUnk_00;
        s32 mUnk_04;
        s32 mUnk_08;
    } p;
} FileLocation;
typedef struct FSFileLink {
    FSFile *mPrev;
    FSFile *mNext;
} FSFileLink;
typedef struct FSFile {

    FSFileLink mLink;
    FSArchive *mArc;
    volatile u32 mStat;
    u32 mCommand;
    s32 mError;
    OSThreadQueue mQueue;
    FileLocation mProp;
    union {
        u32 mPosition;
        u32 mParentId;
    };
    FileLocation mArg;
    const u8 *mPath;
    u32 mFindDirectory;
    FileLocation *mResult;
} FSFile;
typedef struct FSArchive {
    u32 mName;
    FSArchive *mNext;
    FSArchive *mPrev;
    OSThreadQueue mSyncQ;
    OSThreadQueue mStatQ;
    volatile u32 mFlag;
    FSFileLink mList;
    u8 *mBase;
    u32 mFat;
    u32 mFatSize;
    u32 mFnt;
    u32 mFntSize;
    u32 mFatBak;
    u32 mFntBak;
    u32 mLoadMem;
    FS_ARCHIVE_READ_FUNC mRead;
    FS_ARCHIVE_WRITE_FUNC mWrite;
    FS_ARCHIVE_READ_FUNC mTable;
    FS_ARCHIVE_PROC_FUNC mProc;
    u32 mProcFlag;
} FSArchive;
extern s32 (*fsi_default_command[])(FSFile *file);
typedef struct FSDirEntry {
    FileLocation mId;
    u32 mIsDirectory;
    u32 mNameLength;
    u8 mName[0x80];
} FSDirEntry;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSAlarm {
    OSAlarmHandler mHandler;
    void *mArg;
    u32 mTag;
    u64 mFire;
    struct OSAlarm *mPrev;
    struct OSAlarm *mNext;
    u64 mPeriod;
    u64 mStart;
} OSAlarm;
typedef struct OSThread {
    u32 mCpsr;
    void *mR0;
    u32 mR1;
    u32 mR2;
    u32 mR3;
    u32 mR4;
    u32 mR5;
    u32 mR6;
    u32 mR7;
    u32 mR8;
    u32 mR9;
    u32 mR10;
    u32 mR11;
    u32 mR12;
    u32 mSp;
    void (*mLr)(void);
    u32 mPcPlus4;
    u32 mSpSvc;
    u8 mCpContext[0x1c];
    u32 mState;
    struct OSThread *mNext;

    u32 mId;
    u32 mPriority;
    u32 mProfiler;
    OSThreadQueue *mQueue;
    struct OSThread *mLinkPrev;
    struct OSThread *mLinkNext;
    OSMutex *mMutex;
    OSMutexQueue mMutexQueue;
    u8 *mStackTop;
    u8 *mStackBottom;
    u32 mStackWarningOffset;
    OSThreadQueue mJoinQueue;
    void *mSpecific[3];

    OSAlarm *mAlarmForSleep;

    void (*mDestructor)(void *);
    u8 mPad[8];
} OSThread;
typedef struct CARDRomRegion {
    u8 *mOffset;
    u32 mLength;
} CARDRomRegion;
typedef struct RomHeaderStart {
    u8 mUnk_00[0x20];
    u32 mMainRomOffset;
    u8 mMainEntryAddress[0x4];
    u32 mMainRamAddress;
    u32 mMainSize;
    u32 mSubRomOffset;
    u8 mUnk_34[0x8];
    u32 mSubSize;
    union {
        struct {
            u32 mFntOffset;
            u32 mFntSize;
        };
        CARDRomRegion mFntTable;
    };
    union {
        struct {
            u32 mFatOffset;
            u32 mFatSize;
        };
        CARDRomRegion mFatTable;
    };
    union {
        struct {
            u32 mOverlayTable0Offset;
            u32 mOverlayTable0Size;
        };
        CARDRomRegion mOverlayTable0;
    };
    union {
        struct {
            u32 mOverlayTable1Offset;
            u32 mOverlayTable1Size;
        };
        CARDRomRegion mOverlayTable1;
    };
} RomHeaderStart;
typedef struct CARDRomHeader {
    RomHeaderStart mHead;
    u32 mRomCtrl;
    u8 mUnk_64[0x1c];
    u32 mRomSize;
    u8 mUnk_84[0xdc];
} CARDRomHeader;
extern void func_02103e30(void);
typedef struct FSFileID FSFileID;
typedef struct FSFile FSFile;
typedef struct FSArchive FSArchive;
extern u32 data_02147e1c;
extern u32 data_02147e20;
extern CARDRomRegion data_02147e24;
extern CARDRomRegion data_02147e2c;
extern FSArchive data_02147e34;
extern u8 data_02138c04[];
extern void func_020ffc08(u32 dmaNo);
extern s32 func_020ffda8(FSFile *file, u32 command);
extern s32 func_020ffdb0(FSArchive *archive, void *dst, u32 src, u32 len);
extern s32 func_020ffdb8(FSFile *file, u32 command);
extern s32 func_020ffe48(FSArchive *archive, const void *src, u32 dst, u32 len);
extern s32 func_020ffe50(FSArchive *archive, void *dst, u32 src, u32 len);
extern void func_020fed10(FSArchive *archive, FS_ARCHIVE_PROC_FUNC proc, u32 flags);
extern u32 func_020fee5c(FSArchive *archive, u8 *base, u32 fat, u32 fatSize, u32 fnt, u32 fntSize,
                         FS_ARCHIVE_READ_FUNC readFunc, FS_ARCHIVE_WRITE_FUNC writeFunc);
extern u32 func_020feed4(FSArchive *archive, const u8 *name, s32 nameLen);
extern void func_020fef94(FSArchive *archive);
typedef struct FSFile FSFile;
extern s32 func_020f9ab4(void);
typedef struct OSLockWord OSLockWord;
typedef struct OSLockWord {
    u32 mLockFlag;
    u16 mOwnerID;
    u16 mExtension;
} OSLockWord;
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef struct {
    void *lo[OS_ARENA_MAX];
    void *hi[OS_ARENA_MAX];
} OSArenaInfo;
typedef struct CTRDGModuleInfo {

    u16 mIdHalfword;
    u8 mExLsiId[3];
    u8 mIsAgbCartridge : 1;
    u8 mDetectPullOut : 1;
    u8 mUnk_05_2 : 6;
    u16 mMakerCode;

    u32 mIdWord;
} CTRDGModuleInfo;
typedef struct RTCRawDate {
    u32 mYear : 8;
    u32 mMonth : 5;
    u32 : 3;
    u32 mDay : 6;
    u32 : 2;
    u32 mWeek : 3;
    u32 : 5;
} RTCRawDate;
typedef struct RTCRawTime {
    u32 mHour : 6;
    u32 mAfternoon : 1;
    u32 : 1;
    u32 mMinute : 7;
    u32 : 1;
    u32 mSecond : 7;
    u32 : 9;
} RTCRawTime;
typedef struct RTCRawStatus2 {
    u16 mIntrMode : 4;
    u16 : 2;
    u16 mIntr2Mode : 1;
    u16 : 9;
} RTCRawStatus2;
typedef struct RTCRawAlarm {
    u32 mWeek : 3;
    u32 : 4;
    u32 mWe : 1;
    u32 mHour : 6;
    u32 mAfternoon : 1;
    u32 mHe : 1;
    u32 mMinute : 7;
    u32 mMe : 1;
    u32 : 8;
} RTCRawAlarm;
typedef union RTCRawData {
    u32 mWords[2];
    RTCRawDate mDate;
    struct {
        u8 mUnk_00[2];
        RTCRawStatus2 mValue;
    } mStatus2;
    struct {
        u8 mUnk_00[4];
        RTCRawTime mValue;
    } mTime;
    struct {
        u8 mUnk_00[4];
        RTCRawAlarm mValue;
    } mAlarm;
} RTCRawData;
typedef struct BootInfo {
    u16 mBootType;
    u8 mParentBssDesc[0x3e];
} BootInfo;
typedef struct NvramUserInfo {
    u8 mUnk_00[2];
    u8 mFavoriteColor;
    u8 mBirthdayMonth;
    u8 mBirthdayDay;
    u8 mUnk_05;
    u8 mNickName[0x14];
    u8 mNickNameLength;
    u8 mUnk_1b;
    u8 mComment[0x34];
    u8 mCommentLength;
    u8 mUnk_51[7];
    u16 mRawX1;
    u16 mRawY1;
    u8 mDx1;
    u8 mDy1;
    u16 mRawX2;
    u16 mRawY2;
    u8 mDx2;
    u8 mDy2;
    u16 mOption;
    u8 mUnk_66[0xe];

    u8 mMacAddress[6];

    u16 mAllowedChannel;
    u8 mUnk_7c[0x84];
} NvramUserInfo;
typedef struct OSSystemWork {
    u8 mUnk_000[0x30];
    CTRDGModuleInfo mCartridgeModuleInfo;
    vu32 mVblankCount;
    BootInfo mWmBootBuf;
    NvramUserInfo mNvramUserInfo;
    u8 mUnk_180[0x20];
    OSArenaInfo mArenaInfo;
    RTCRawData mRealTimeClock;
    u8 mUnk_1f0[0x10];
    CARDRomHeader mRomHeader;
    u8 mUnk_360[0x28];
    u32 mPxiHandleChecker[2];
    u32 mMicLastAddress;
    u16 mMicSamplingData;
    u16 mWmCallbackControl;
    u8 mUnk_398[0x10];

    vu16 mButtonXY;
    u16 mTouchPanel[2];
    u8 mUnk_3ae[2];
    u32 mLockIdFlagMain[2];
    u8 mUnk_3b8[8];
    OSLockWord mLockVramC;
    u8 mUnk_3c8[0x18];
    OSLockWord mLockCard;
    OSLockWord mLockCartridge;
    OSLockWord mLockInit;
    u8 mUnk_3f8[2];
    u16 mMmemCheckerSub;
    u8 mUnk_3fc[4];
} OSSystemWork;
typedef struct OSMutex OSMutex;
typedef struct OSMutex OSMutex;
extern u32 data_02147e1c;
extern u32 data_02147e20;
extern CARDRomRegion data_02147e2c;
extern CARDRomRegion data_02147e24;
extern FSArchive data_02147e34;
extern u8 data_02138c04[4];
s32 func_020ffe50(FSArchive *archive, void *dst, u32 src, u32 len);
s32 func_020ffe48(FSArchive *archive, const void *src, u32 dst, u32 len);
s32 func_020ffdb8(FSFile *file, u32 command);
s32 func_020ffdb0(FSArchive *archive, void *dst, u32 src, u32 len);
s32 func_020ffda8(FSFile *file, u32 command);
void func_020ffc08(u32 dmaNo) {
    enum {
        ROM_REGION_ADDRESS_NONE
    } fntRegion, fatRegion;

    data_02147e20         = dmaNo;
    data_02147e1c         = func_020f9ab4();
    data_02147e24.mOffset = 0;
    data_02147e24.mLength = 0;
    data_02147e2c.mOffset = 0;
    data_02147e2c.mLength = 0;
    func_02103e30();
    func_020fef94(&data_02147e34);
    func_020feed4(&data_02147e34, data_02138c04, 3);
    if (((OSSystemWork *) 0x027ffc00)->mWmBootBuf.mBootType == 2) {
        data_02147e24.mOffset = (u8 *) -1;
        data_02147e24.mLength = 0;
        data_02147e2c.mOffset = (u8 *) -1;
        data_02147e2c.mLength = 0;
        func_020fed10(&data_02147e34, func_020ffda8, -1);
        func_020fee5c(&data_02147e34, 0, 0, 0, 0, 0, func_020ffdb0, func_020ffe48);
        return;
    }
    fntRegion = 0x27ffe40;
    fatRegion = 0x27ffe48;
    func_020fed10(&data_02147e34, func_020ffdb8, 0x602);
    if (((CARDRomRegion *) fntRegion)->mOffset == (u8 *) -1) {
        return;
    }
    if (((CARDRomRegion *) fntRegion)->mOffset == 0) {
        return;
    }
    if (((CARDRomRegion *) fatRegion)->mOffset == (u8 *) -1) {
        return;
    }
    if (((CARDRomRegion *) fatRegion)->mOffset == 0) {
        return;
    }
    func_020fee5c(&data_02147e34, 0, (u32) ((CARDRomRegion *) fatRegion)->mOffset, ((CARDRomRegion *) fatRegion)->mLength,
                  (u32) ((CARDRomRegion *) fntRegion)->mOffset, ((CARDRomRegion *) fntRegion)->mLength, func_020ffe50,
                  func_020ffe48);
}
