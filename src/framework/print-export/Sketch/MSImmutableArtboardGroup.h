//
//  MSArtboardGroup.h
//  ProtoWire
//
//  Created by Mark Horgan on 10/05/2017.
//  Copyright © 2017 Mark Horgan. All rights reserved.
//

#import "MSImmutableLayerGroup.h"
#import "MSImmutableColor.h"

@interface MSImmutableArtboardGroup: MSImmutableLayerGroup

@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (readonly, nonatomic) MSImmutableColor *backgroundColor;
@property (readonly, nonatomic) BOOL includeBackgroundColorInExport;

@end
