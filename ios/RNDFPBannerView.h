#if __has_include(<React/RCTComponent.h>)
#import <React/RCTView.h>
#else
#import "RCTView.h"
#endif

@class RCTEventDispatcher;

#if __has_include(<GoogleMobileAds/GoogleMobileAds.h>)

#import <GoogleMobileAds/GADBannerViewDelegate.h>
#import <GoogleMobileAds/GADAdSizeDelegate.h>
#import <GoogleMobileAds/GADAppEventDelegate.h>

@interface RNDFPBannerView : RCTView <GADBannerViewDelegate, GADAdSizeDelegate, GADAppEventDelegate>

@property (nonatomic, copy) NSArray *validAdSizes;
@property (nonatomic, copy) NSArray *testDevices;

@property (nonatomic, copy) RCTBubblingEventBlock onSizeChange;
@property (nonatomic, copy) RCTBubblingEventBlock onAdmobDispatchAppEvent;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewDidReceiveAd;
@property (nonatomic, copy) RCTBubblingEventBlock onDidFailToReceiveAdWithError;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewWillPresentScreen;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewWillDismissScreen;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewDidDismissScreen;
@property (nonatomic, copy) RCTBubblingEventBlock onAdViewWillLeaveApplication;

- (void)loadBanner;

@end

#else

@interface RNDFPBannerView : RCTView {
}
@end

#endif
