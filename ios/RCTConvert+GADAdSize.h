#import <React/RCTConvert.h>

#if __has_include(<GoogleMobileAds/GADMobileAds.h>)

#import <GoogleMobileAds/GADAdSize.h>

@interface RCTConvert (GADAdSize)

+ (GADAdSize)GADAdSize:(id)json;

@end

#else

@interface RCTConvert (GADAdSize) {
}
@end

#endif
