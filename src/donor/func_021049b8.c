/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063cf8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02063cf8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
typedef void (*WMCallbackFunc)(void *arg);
typedef struct {
    u8 pad[0x46];
    u16 mp_recvBufSize;
} WMStatus;
typedef struct {
    u32 WM7;
    WMStatus *status;
    u32 pad8;
    u32 *fifo9to7;
    u32 *fifo7to9;
    u16 dmaNo;
    u16 scanOnlyFlag;
    WMCallbackFunc CallbackTable[41];
    WMCallbackFunc indCallback;
    WMCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
} WMArm9Buf;
typedef struct {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
} WMCallback;
typedef struct {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 reserved;
    void *recvBuf;
} WMStartMPCallback;
typedef struct {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 port;
    void *recvBuf;
    u16 *data;
    u16 length;
    u16 aid;
    u8 macAddress[6];
    u16 seqNo;
    void *arg;
    u16 myAid;
    u16 connectedAidBitmap;
    u8 ssid[24];
} WMPortRecvCallback;
typedef struct {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u8 pad[0x14];
    WMCallbackFunc callback;
} WMPortSendCallback;
typedef struct {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u8 macAddress[6];
    u16 aid;
    u16 reason;
    u8 ssid[24];
} WMStartParentCallback;
typedef struct {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u8 macAddress[6];
    u16 aid;
    u16 reason;
} WMStartConnectCallback;
extern WMArm9Buf *data_02148a8c;
extern u16 data_02148a88;
extern WMPortRecvCallback data_02148acc;
extern void func_020fae5c(const void *addr, u32 size);
extern void func_020fae78(const void *addr, u32 size);
extern s32 func_02104ff4(void);
extern void func_0210499c(void);
extern void func_020fbf1c(void);
extern void func_020fcc70(const void *src, void *dest, u32 size);
extern void func_020fca70(const void *src, void *dest, u32 size);
extern void func_020fca58(u16 data, void *dest, u32 size);
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    func_020fca58(*(u16 *) &data, dest, size);
}
static inline void MI_CpuClear16(void *dest, u32 size) {
    MI_CpuFill16(dest, 0, size);
}
void func_021049b8(u32 tag, u32 fifo_buf_adr, BOOL err) {
    WMCallback *callback_p = (WMCallback *) fifo_buf_adr;

    if (err) {
        return;
    }

    func_020fae5c(data_02148a8c->fifo7to9, 256);
    if (!data_02148a8c->scanOnlyFlag) {
        func_020fae5c(data_02148a8c->status, 2048);
    }
    if ((u32) callback_p != (u32) data_02148a8c->fifo7to9) {
        func_020fae5c(callback_p, 256);
    }

    if (callback_p->apiid >= 41) {
        if (callback_p->apiid == 0x80) {
            if (callback_p->errcode == 19) {
                func_020fbf1c();
            }
            if (data_02148a8c->indCallback != ((void *) 0)) {
                data_02148a8c->indCallback(callback_p);
            }
        } else if (callback_p->apiid == 0x82) {
            WMPortRecvCallback *cb_Port = (WMPortRecvCallback *) callback_p;
            if (data_02148a8c->portCallbackTable[cb_Port->port] != ((void *) 0)) {
                cb_Port->arg = data_02148a8c->portCallbackArgument[cb_Port->port];
                func_020fae5c(cb_Port->recvBuf, data_02148a8c->status->mp_recvBufSize);
                (data_02148a8c->portCallbackTable[cb_Port->port])(cb_Port);
            }
        } else if (callback_p->apiid == 0x81) {
            WMPortSendCallback *cb_Port = (WMPortSendCallback *) callback_p;
            callback_p->apiid           = 15;
            if (cb_Port->callback != ((void *) 0)) {
                (cb_Port->callback)(cb_Port);
            }
        }
    } else {
        if (callback_p->apiid == 14) {
            WMStartMPCallback *cb_StartMP = (WMStartMPCallback *) callback_p;
            if (cb_StartMP->state == 11 || cb_StartMP->state == 12) {
                if (cb_StartMP->errcode == 0) {
                    func_020fae5c(cb_StartMP->recvBuf, data_02148a8c->status->mp_recvBufSize);
                }
            }
        }

        if (callback_p->apiid == 2 && callback_p->errcode == 0) {
            WMCallbackFunc cb = data_02148a8c->CallbackTable[callback_p->apiid];
            (void) func_02104ff4();
            if (cb != ((void *) 0)) {
                cb(callback_p);
            }
            return;
        }

        if (data_02148a8c->CallbackTable[callback_p->apiid] != ((void *) 0)) {
            (data_02148a8c->CallbackTable[callback_p->apiid])(callback_p);
            if (!data_02148a88) {
                return;
            }
        }

        if (callback_p->apiid == 8 || callback_p->apiid == 12) {
            u16 state;
            u16 aid;
            u16 myAid;
            u8 *macAddress;
            u8 *ssid;

            if (callback_p->apiid == 8) {
                WMStartParentCallback *cb = (WMStartParentCallback *) callback_p;
                macAddress                = cb->macAddress;
                ssid                      = cb->ssid;
                state                     = cb->state;
                aid                       = cb->aid;
                myAid                     = 0;
            } else if (callback_p->apiid == 12) {
                WMStartConnectCallback *cb = (WMStartConnectCallback *) callback_p;
                aid                        = 0;
                state                      = cb->state;
                myAid                      = cb->aid;
                ssid                       = ((void *) 0);
                macAddress                 = cb->macAddress;
            }
            if (state == 7 || state == 9) {
                u16 i;
                data_02148acc.apiid   = 0x82;
                data_02148acc.errcode = 0;
                data_02148acc.state   = state;
                data_02148acc.recvBuf = ((void *) 0);
                data_02148acc.data    = ((void *) 0);
                data_02148acc.length  = 0;
                data_02148acc.aid     = aid;
                data_02148acc.myAid   = myAid;
                data_02148acc.seqNo   = 0xffff;
                func_020fcc70(macAddress, data_02148acc.macAddress, 6);
                if (ssid != ((void *) 0)) {
                    func_020fca70(ssid, data_02148acc.ssid, 24);
                } else {
                    MI_CpuClear16(data_02148acc.ssid, 24);
                }
                for (i = 0; i < 16; i++) {
                    data_02148acc.port = i;
                    if (data_02148a8c->portCallbackTable[i] != ((void *) 0)) {
                        data_02148acc.arg = data_02148a8c->portCallbackArgument[i];
                        (data_02148a8c->portCallbackTable[i])(&data_02148acc);
                    }
                }
            }
        }
    }

    func_020fae5c(data_02148a8c->fifo7to9, 256);
    func_0210499c();
    if ((u32) callback_p != (u32) data_02148a8c->fifo7to9) {
        callback_p->apiid |= 0x8000;
        func_020fae78(callback_p, 256);
    }
}
