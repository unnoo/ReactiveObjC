//
//  RACDelegateProxy.h
//  ReactiveObjC
//
//  Created by Cody Krieger on 5/19/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RACSignal<__covariant ValueType>;
@class RACTuple;

NS_ASSUME_NONNULL_BEGIN

// A private delegate object suitable for using
// -rac_signalForSelector:fromProtocol: upon.
@interface RACDelegateProxy : NSObject

// The delegate to which messages should be forwarded if not handled by
// any -signalForSelector: applications.
@property (nonatomic, unsafe_unretained) id rac_proxiedDelegate;

// Creates a delegate proxy capable of responding to selectors from `protocol`.
- (instancetype)initWithProtocol:(Protocol *)protocol;

// Calls -rac_signalForSelector:fromProtocol: using the `protocol` specified
// during initialization.
- (RACSignal<RACTuple *> *)signalForSelector:(SEL)selector;

@end

NS_ASSUME_NONNULL_END
