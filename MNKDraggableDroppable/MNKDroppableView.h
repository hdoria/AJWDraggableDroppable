/*
 
 MNKDroppableView.h
 MNKDraggableDroppable
 
 Created by @adamwaite.
 
 Copyright (c) 2014 Adam Waite. All rights reserved.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 */

#import <Foundation/Foundation.h>

///--------------------
/// @name MNKDroppableView
///--------------------

/**
 *  The MNKDroppableView protocol is adopted to customise droppable view behaviour.
 */
@protocol MNKDroppableView <NSObject>

@optional

/**
 *  Applies a resting state for the view once a drag gesture is no longer in motion.
 */
- (void)droppableViewApplyRegularState;

/**
 *  Applies a pending state for the view once a drag gesture is in motion but no draggable has entered the droppable bounds.
 */
- (void)droppableViewApplyPendingState;

/**
 *  Applies a state indicating that ending the current drag gesture will drop a draggable into the droppable bounds.
 */
- (void)droppableViewApplyPendingDropState;

/**
 *  The snap to point should a draggable be dropped in the adopting view's bounds.
 */
- (CGPoint)droppableSnapPoint;

@end