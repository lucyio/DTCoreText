//
//  DTRenderingConfig.h
//  DTCoreText
//
//  Created by Ostap Holub on 5/23/19.
//  Copyright © 2019 Drobnik.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DTRenderingConfig : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, assign) CGFloat maxAvailableWidth;

@end

NS_ASSUME_NONNULL_END
