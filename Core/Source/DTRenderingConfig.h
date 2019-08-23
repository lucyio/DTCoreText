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

@property (nonatomic, strong) NSString *imageName;
@property (nonatomic, strong) void (^inlineImageStyle)(UIView*);

+ (instancetype)sharedInstance;

- (CGSize)inlineImageSize;

@end

NS_ASSUME_NONNULL_END
