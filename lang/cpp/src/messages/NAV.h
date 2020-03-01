// File lang/cpp/src/messages/NAV.h
// Auto-generated by pyUBX generateCpp.py v0.1 on 2020-03-01T13:29:34.882849
// See https://github.com/mayeranalytics/pyUBX
// DO NOT MODIFY THIS FILE!

#ifndef __NAV_H__
#define __NAV_H__

#include <stdint.h>
#include "../UBX.h"

/* Message class NAV.
 */
struct NAV
{
    struct DOP;
    struct PVT;
    struct RELPOSNED;
    struct SVINFO;
};

struct NAV::DOP : public Message
{
    uint32_t iTOW;
    uint16_t gDOP;
    uint16_t pDOP;
    uint16_t tDOP;
    uint16_t vDOP;
    uint16_t hDOP;
    uint16_t nDOP;
    uint16_t eDOP;

    static uint8_t classID;
    static uint8_t messageID;
};

uint8_t NAV::DOP::classID   = 0x01;
uint8_t NAV::DOP::messageID = 0x04;

struct NAV::PVT : public Message
{
    uint32_t iTOW;
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t min;
    uint8_t sec;
    uint8_t valid;
    uint32_t tAcc;
    int32_t nano;
    uint8_t fixType;
    uint8_t flags;
    uint8_t flags2;
    uint8_t numSV;
    int32_t lon;
    int32_t lat;
    int32_t height;
    int32_t hMSL;
    uint32_t hAcc;
    uint32_t vAcc;
    int32_t velN;
    int32_t velE;
    int32_t velD;
    int32_t gSpeed;
    int32_t headMot;
    uint32_t sAcc;
    uint32_t headAcc;
    uint16_t pDOP;
    uint8_t flags3;
    uint8_t reserved1;
    uint32_t reserved1x;
    int32_t headVeh;
    int16_t magDec;
    uint16_t magAcc;

    static uint8_t classID;
    static uint8_t messageID;
};

uint8_t NAV::PVT::classID   = 0x01;
uint8_t NAV::PVT::messageID = 0x07;

struct NAV::RELPOSNED : public Message
{
    uint8_t version;
    uint8_t reserved1;
    uint16_t refStationID;
    uint32_t iTOW;
    int32_t relPosN;
    int32_t relPosE;
    int32_t relPosD;
    int32_t relPosLength;
    int32_t relPosHeading;
    uint32_t reserved2;
    int8_t relPosHPN;
    int8_t relPosHPE;
    int8_t relPosHPD;
    int8_t relPosHPLength;
    uint32_t accN;
    uint32_t accE;
    uint32_t accD;
    uint32_t accLength;
    uint32_t accHeading;
    uint32_t reserved3;
    uint32_t flags;

    static uint8_t classID;
    static uint8_t messageID;
};

uint8_t NAV::RELPOSNED::classID   = 0x01;
uint8_t NAV::RELPOSNED::messageID = 0x3C;

struct NAV::SVINFO : public Message
{
    uint32_t iTOW;
    uint8_t numCh;
    uint8_t globalFlags;
    uint16_t reserved1;

    struct Repeated {
        uint8_t chn;
        uint8_t svid;
        uint8_t flags;
        uint8_t quality;
        uint8_t cno;
        int8_t elev;
        int16_t axim;
        int32_t prRes;
    };
    typedef _iterator<NAV::SVINFO::Repeated> iterator;
    static _iterator<Repeated> iter(char*data, size_t size) {
        return _iterator<Repeated>(data+sizeof(NAV::SVINFO), size-sizeof(NAV::SVINFO));
    }
    static _iterator<Repeated> iter(NAV::SVINFO& msg, size_t size) {
        return iter((char*)(&msg), size);
    }
    static size_t size(size_t n) { return sizeof(NAV::SVINFO) + n*sizeof(NAV::SVINFO::Repeated); }

    static uint8_t classID;
    static uint8_t messageID;
};

uint8_t NAV::SVINFO::classID   = 0x01;
uint8_t NAV::SVINFO::messageID = 0x30;

#endif // ifndef __NAV_H__
