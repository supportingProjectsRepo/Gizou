#ifndef _Gizou_h
#define _Gizou_h

#import <Foundation/Foundation.h>
#import <Availability.h>

#ifdef __IPHONE_OS_VERSION_MAX_ALLOWED
#import "UIImage+GZImages.h"
#else

#endif

#import "GZDataManager.h"
#import "GZWords.h"
#import "GZNames.h"
#import "GZLocations.h"
#import "GZInternet.h"
#import "GZPhoneNumbers.h"

#ifdef _CORELOCATIONDEFINES_H
#import "GZLocations+CoreLocationExtensions.h"
#endif

#endif