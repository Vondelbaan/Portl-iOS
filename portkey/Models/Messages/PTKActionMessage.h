//
//  PTKActionMessage.h
//  portkey
//
//  Created by Adam Bellard on 12/14/16.
//  Copyright © 2016 Airtime Media. All rights reserved.
//

#import "PTKMessage.h"

@interface PTKActionMessage : PTKMessage

- (NSArray<NSDictionary *> *)actions;

@end
