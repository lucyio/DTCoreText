//
//  DTHTMLTagBlacklist.h
//  DemoApp
//
//  Created by Ostap Holub on 2/28/19.
//  Copyright © 2019 Drobnik.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DTHTMLTagBlacklist : NSObject

@property (nonatomic, strong) NSMutableSet *blacklist;

+ (instancetype)sharedInstance;

+ (void)addTag:(NSString*)tag;
+ (void)removeTag:(NSString*)tag;

@end

NS_ASSUME_NONNULL_END
