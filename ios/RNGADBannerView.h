#if __has_include(<React/RCTView.h>)
#import <React/RCTView.h>
#else
#import "RCTView.h"
#endif

@class RCTEventDispatcher;

#if __has_include(<GoogleMobileAds/GADMobileAds.h>)

#import <GoogleMobileAds/GADBannerViewDelegate.h>
#import <GoogleMobileAds/GADAdSizeDelegate.h>

@interface RNGADBannerView : RCTView <GADBannerViewDelegate, GADAdSizeDelegate>

@property (nonatomic, copy) NSArray *testDevices;

@property (nonatomic, copy) RCTBubblingEventBlock onSizeChange;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewDidReceiveAd;
@property (nonatomic, copy) RCTBubblingEventBlock onDidFailToReceiveAdWithError;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewWillPresentScreen;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewWillDismissScreen;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewDidDismissScreen;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewWillLeaveApplication;

- (void)loadBanner;

@end

#else

@interface RNGADBannerView : RCTView {
}
@end

#endif
