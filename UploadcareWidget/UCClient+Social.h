//
//  UCClient+Social.h
//  ExampleProject
//
//  Created by Yury Nechaev on 05.04.16.
//  Copyright © 2016 Uploadcare. All rights reserved.
//

#import "UCClient.h"

static NSString *const UCURLSchemeDidReceiveCallbackNotification = @"UCURLSchemeDidReceiveCallbackNotification";

@class UCSocialRequest;

@interface UCClient (Social)

/**
 *  Creates NSURLSessionDataTask object from provided social api request and starts it.
 *
 *  @param ucSocialRequest social API request object with corresponding data.
 *  @param completionBlock @b UCCompletionBlock handler, invoked when task is complete.
 *
 *  @return <#return value description#>
 */
- (NSURLSessionDataTask *)performUCSocialRequest:(UCSocialRequest *)ucSocialRequest
                                      completion:(UCCompletionBlock)completionBlock;

/**
 *  Helper method
 *
 *  @return Social error domain
 */
+ (NSString *)socialErrorDomain;

/**
 *  Processes URL if can handle
 *
 *  @param url NSURL object received by the application delegate method
 *
 *  @return BOOL value showing if Uploadcare is capable of handling provided URL
 */
- (BOOL)handleURL:(NSURL *)url;

@end
