//
//  DTRenderingConfig.m
//  DTCoreText
//
//  Created by Ostap Holub on 5/23/19.
//  Copyright © 2019 Drobnik.com. All rights reserved.
//

#import "DTRenderingConfig.h"


@implementation DTRenderingConfig

+ (instancetype)sharedInstance {
	
	static DTRenderingConfig *sharedConfig = nil;
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{
		sharedConfig = [[self alloc] init];
	});
	return sharedConfig;
}

- (id)init {
	self = [super init];
	if (self) {
		self.maxAvailableWidth = 0.0f;
	}
	return self;
}

@end
