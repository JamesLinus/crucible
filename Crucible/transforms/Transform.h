//
//  Transform.h
//  Crucible
//
//  Created by Alexander Zielenski on 4/7/16.
//  Copyright © 2016 Alexander Zielenski. All rights reserved.
//

#import <Foundation/Foundation.h>

#define CONCAT(A, B) A##B
#define TRANSFORM(NAME) - (id)CONCAT(_crucible_, NAME)

// All of the transforms available
@protocol Transform <NSObject>
TRANSFORM(url);
TRANSFORM(file_url);
TRANSFORM(color);
TRANSFORM(now);
TRANSFORM(alloc_init);
@end
