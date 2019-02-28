//
//  DTHTMLTagBlacklist.m
//  DemoApp
//
//  Created by Ostap Holub on 2/28/19.
//  Copyright © 2019 Drobnik.com. All rights reserved.
//

#import "DTHTMLTagBlacklist.h"

@implementation DTHTMLTagBlacklist

+ (instancetype)sharedInstance {
	
	static DTHTMLTagBlacklist *sharedBlacklist = nil;
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{
		sharedBlacklist = [[self alloc] init];
	});
	return sharedBlacklist;
}

+ (void)addTag:(NSString*)tag {
	DTHTMLTagBlacklist *instance = DTHTMLTagBlacklist.sharedInstance;
	[instance.blacklist addObject:tag];
}

+ (void)removeTag:(NSString*)tag {
	DTHTMLTagBlacklist *instance = DTHTMLTagBlacklist.sharedInstance;
	[instance.blacklist removeObject:tag];
}

@end
