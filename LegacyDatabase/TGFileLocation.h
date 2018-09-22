#import <Foundation/Foundation.h>

@interface TGFileLocation : NSObject

@property (nonatomic, readonly) NSInteger datacenterId;
@property (nonatomic, readonly) int64_t volumeId;
@property (nonatomic, readonly) int32_t localId;
@property (nonatomic, readonly) int64_t secret;
@property (nonatomic, readonly) NSData *fileReference;

- (instancetype)initWithDatacenterId:(NSInteger)datacenterId volumeId:(int64_t)volumeId localId:(int32_t)localId secret:(int64_t)secret fileReference:(NSData *)fileReference;
- (instancetype)initWithFileUrl:(NSString *)url;

@end
