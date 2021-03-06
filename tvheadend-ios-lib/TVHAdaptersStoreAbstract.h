//
//  TVHAdaptersStore.h
//  TvhClient
//
//  Created by Luis Fernandes on 06/03/13.
//  Copyright 2013 Luis Fernandes
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.
//


#import "TVHAdaptersStore.h"
#import "TVHAdapter.h"
#import "TVHApiClient.h"

@class TVHServer;

@interface TVHAdaptersStoreAbstract : NSObject <TVHApiClientDelegate, TVHAdaptersStore>
@property (nonatomic, weak) TVHServer *tvhServer;
@property (nonatomic, weak) id <TVHAdaptersDelegate> delegate;
- (id)initWithTvhServer:(TVHServer*)tvhServer;
- (void)fetchAdapters;

- (NSArray*)adaptersCopy;
@end
