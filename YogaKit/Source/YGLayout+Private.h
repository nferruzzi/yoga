/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the LICENSE
 * file in the root directory of this source tree.
 */
#import "YGLayout.h"
#import <YogaKit/Yoga.h>

@interface YGLayout ()

@property (nonatomic, assign, readonly) YGNodeRef node;

- (instancetype)initWithView:(UIView *)view;

@end
