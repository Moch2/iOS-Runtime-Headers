/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSOperation;

@interface __NSOperationQueueInternal : NSObject  {
    struct dispatch_queue_s { } *__dispatchQ;
    struct dispatch_semaphore_s { } *__poker;
    NSOperation *__firstOperation;
    NSOperation *__lastOperation;
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    int __pendingAddLock;
    int __maxNumOps;
    int __actualMaxNumOps;
    int __numExecOps;
    int __outerRC;
    unsigned char __mainQ;
    unsigned char __suspended;
    BOOL __nameBuffer[165];
}


- (void)finalize;
- (id)init;
- (void)dealloc;

@end