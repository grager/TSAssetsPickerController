//
//  IWAssetsManager.h
//  TSAssetPickerController
//
//  Created by Tomasz Szulc on 05.01.2014.
//  Copyright (c) 2014 Tomasz Szulc. All rights reserved.
//

#import "TSBaseLoader.h"

@interface TSAssetsLoader : TSBaseLoader
@property (nonatomic, readonly) NSArray *fetchedAssets;

- (void)fetchAssetsFromAlbum:(NSString *)album block:(void (^)(NSArray *loadedAssets))block;

@end
