//
//  UIDatePicker+RACSignalSupport.m
//  ReactiveObjC
//
//  Created by Uri Baghin on 20/07/2013.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "UIDatePicker+RACSignalSupport.h"

#if !TARGET_OS_OSX && !TARGET_OS_WATCH

#import "RACEXTKeyPathCoding.h"
#import "UIControl+RACSignalSupportPrivate.h"

@implementation UIDatePicker (RACSignalSupport)

- (RACChannelTerminal *)rac_newDateChannelWithNilValue:(NSDate *)nilValue {
	return [self rac_channelForControlEvents:UIControlEventValueChanged key:@keypath(self.date) nilValue:nilValue];
}

@end

#endif
