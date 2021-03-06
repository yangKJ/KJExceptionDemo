//
//  NSObject+KJException.h
//  KJExceptionDemo
//
//  Created by 杨科军 on 2020/12/29.
//  https://github.com/yangKJ/KJExceptionDemo
//  kvo添加观察者后没有清除重复添加或移除观察者导致崩溃
//  kvc键值为空防护
//  没找到对应的函数产生崩溃

#import <Foundation/Foundation.h>
#import "KJCrashManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (KJException)<KJCrashProtocol>

@end

NS_ASSUME_NONNULL_END
