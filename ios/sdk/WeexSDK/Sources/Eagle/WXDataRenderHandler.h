/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WXDataRenderHandler <NSObject>
    
- (void)createPage:(NSString *)pageId template:(NSString *)jsBundleString options:(NSDictionary *)options  data:(id)data;

- (void)createPage:(NSString *)pageId contents:(NSData *)contents options:(NSDictionary *)options data:(id)data;

- (void)callUpdateComponentData:(NSString*)pageId componentId:(NSString*)componentId jsonData:(NSString*)jsonData;

- (void)destroyDataRenderInstance:(NSString *)pageId;

- (void)refreshDataRenderInstance:(NSString *)pageId data:(NSString *)data;

- (void)fireEvent:(NSString *)pageId ref:(NSString *)ref event:(NSString *)event args:(NSDictionary *)args domChanges:(NSDictionary * _Nullable)domChanges;

- (void)registerModules:(NSDictionary *)modules;
    
- (void)registerComponents:(NSArray *)components;
    
- (void)invokeCallBack:(NSString *)pageId function:(NSString *)funcId args:(NSDictionary *)args keepAlive:(BOOL)keepAlive;

- (void)DispatchPageLifecycle:(NSString *)pageId;

@end

NS_ASSUME_NONNULL_END
