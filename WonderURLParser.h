//
//  WonderURLParser.h
//  URLParser
//
//  Created by Wonder on 14-8-25.
//  Copyright (c) 2014年 Yin Xiaoyu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WonderURLParser : NSObject

@property (strong, nonatomic) NSArray *variables;

- (id)initWithURLString:(NSString *)url;
- (NSString *)valueForVariable:(NSString *)varName;

@end
