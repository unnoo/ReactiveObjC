//
//  NSObjectRACAppKitBindingsSpec.m
//  ReactiveObjC
//
//  Created by Justin Spahr-Summers on 2013-07-01.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

@import Quick;
@import Nimble;

#import "RACChannelExamples.h"

#import "RACEXTKeyPathCoding.h"
#import "NSObject+RACAppKitBindings.h"

QuickSpecBegin(NSObjectRACAppKitBindingsSpec)

itBehavesLike(RACViewChannelExamples, ^{
	return @{
		RACViewChannelExampleCreateViewBlock: ^{
			return [[NSSlider alloc] initWithFrame:NSZeroRect];
		},
		RACViewChannelExampleCreateTerminalBlock: ^(NSSlider *view) {
			return [view rac_channelToBinding:NSValueBinding];
		},
		RACViewChannelExampleKeyPath: @keypath([[NSSlider alloc] init], objectValue),
		RACViewChannelExampleSetViewValueBlock: ^(NSSlider *view, NSNumber *value) {
			view.objectValue = value;

			// Bindings don't actually trigger from programmatic modification. Do it
			// manually.
			NSDictionary *bindingInfo = [view infoForBinding:NSValueBinding];
			[bindingInfo[NSObservedObjectKey] setValue:value forKeyPath:bindingInfo[NSObservedKeyPathKey]];
		}
	};
});

QuickSpecEnd
