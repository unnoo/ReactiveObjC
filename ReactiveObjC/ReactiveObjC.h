//
//  ReactiveObjC.h
//  ReactiveObjC
//
//  Created by Josh Abernathy on 3/5/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <TargetConditionals.h>

#import "RACEXTKeyPathCoding.h"
#import "RACEXTScope.h"
#import "NSArray+RACSequenceAdditions.h"
#import "NSData+RACSupport.h"
#import "NSDictionary+RACSequenceAdditions.h"
#import "NSEnumerator+RACSequenceAdditions.h"
#import "NSFileHandle+RACSupport.h"
#import "NSNotificationCenter+RACSupport.h"
#import "NSObject+RACDeallocating.h"
#import "NSObject+RACLifting.h"
#import "NSObject+RACPropertySubscribing.h"
#import "NSObject+RACSelectorSignal.h"
#import "NSOrderedSet+RACSequenceAdditions.h"
#import "NSSet+RACSequenceAdditions.h"
#import "NSString+RACSequenceAdditions.h"
#import "NSString+RACSupport.h"
#import "NSIndexSet+RACSequenceAdditions.h"
#import "NSUserDefaults+RACSupport.h"
#import "RACBehaviorSubject.h"
#import "RACChannel.h"
#import "RACCommand.h"
#import "RACCompoundDisposable.h"
#import "RACDelegateProxy.h"
#import "RACDisposable.h"
#import "RACEvent.h"
#import "RACGroupedSignal.h"
#import "RACKVOChannel.h"
#import "RACMulticastConnection.h"
#import "RACQueueScheduler.h"
#import "RACQueueScheduler+Subclass.h"
#import "RACReplaySubject.h"
#import "RACScheduler.h"
#import "RACScheduler+Subclass.h"
#import "RACScopedDisposable.h"
#import "RACSequence.h"
#import "RACSerialDisposable.h"
#import "RACSignal+Operations.h"
#import "RACSignal.h"
#import "RACStream.h"
#import "RACSubject.h"
#import "RACSubscriber.h"
#import "RACSubscriptingAssignmentTrampoline.h"
#import "RACTargetQueueScheduler.h"
#import "RACTestScheduler.h"
#import "RACTuple.h"
#import "RACUnit.h"

//#if TARGET_OS_WATCH
//#elif TARGET_OS_IOS || TARGET_OS_TV
	#import "UIBarButtonItem+RACCommandSupport.h"
	#import "UIButton+RACCommandSupport.h"
	#import "UICollectionReusableView+RACSignalSupport.h"
	#import "UIControl+RACSignalSupport.h"
	#import "UIGestureRecognizer+RACSignalSupport.h"
	#import "UISegmentedControl+RACSignalSupport.h"
	#import "UITableViewCell+RACSignalSupport.h"
	#import "UITableViewHeaderFooterView+RACSignalSupport.h"
	#import "UITextField+RACSignalSupport.h"
	#import "UITextView+RACSignalSupport.h"

//	#if !TARGET_OS_IOS
		#import "NSURLConnection+RACSupport.h"
		#import "UIStepper+RACSignalSupport.h"
		#import "UIDatePicker+RACSignalSupport.h"
		#import "UIAlertView+RACSignalSupport.h"
		#import "UIActionSheet+RACSignalSupport.h"
		#import "MKAnnotationView+RACSignalSupport.h"
		#import "UIImagePickerController+RACSignalSupport.h"
		#import "UIRefreshControl+RACCommandSupport.h"
		#import "UISlider+RACSignalSupport.h"
		#import "UISwitch+RACSignalSupport.h"
//	#endif
//#elif TARGET_OS_MAC
	#import "NSControl+RACCommandSupport.h"
	#import "NSControl+RACTextSignalSupport.h"
	#import "NSObject+RACAppKitBindings.h"
	#import "NSText+RACSignalSupport.h"
	#import "NSURLConnection+RACSupport.h"
//#endif
