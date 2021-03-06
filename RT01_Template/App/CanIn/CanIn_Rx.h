/******************************************************************************
Copyright (C) 2019 Steven, mculib.net All Rights Reserved

This software and code can be freely used for study and research. 
For commercial purposes, please contact the owner for permission.

File  : CanIn_Rx.h  CanIn数据解析处理函数
Author: Wander
******************************************************************************/
#ifndef CANIN_Rx_H
#define CANIN_Rx_H

extern void CanIn_RxFrame123(const uint8* Data);
extern void CanIn_RxFrame245(const uint8* Data);
extern void CanIn_RxFrame271(const uint8* Data);
extern void CanIn_RxFrame28A(const uint8* Data);
extern void CanIn_RxFrame2E5(const uint8* Data);
extern void CanIn_RxFrame314(const uint8* Data);
extern void CanIn_RxFrame3BA(const uint8* Data);
extern void CanIn_RxFrame38F(const uint8* Data);
extern void CanIn_RxFrame42D(const uint8* Data);
extern void CanIn_RxFrame45D(const uint8* Data);
extern void CanIn_RxFrame47D(const uint8* Data);
extern void CanIn_RxFrame782(const uint8* Data);
extern void CanIn_RxFrame24A(const uint8* Data);
extern void CanIn_RxFrame24C(const uint8* Data);
extern void CanIn_RxFrame331(const uint8* Data);

#endif