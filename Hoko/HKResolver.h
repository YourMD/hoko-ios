//
//  HKResolver.h
//  
//
//  Created by Ivan Bruel on 18/05/15.
//
//

#import <Foundation/Foundation.h>

@interface HKResolver : NSObject

- (instancetype)initWithToken:(NSString *)token;

- (void)resolveSmartlink:(NSString *)smartlink completion:(void(^)(NSURL *deeplink, NSError *error))completion;

@end
