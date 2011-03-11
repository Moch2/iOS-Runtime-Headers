/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImage, UIView;

@interface ABPersonIconImageView : UIView  {
    UIView *_imageView;
    int _imageType;
    struct CGSize { 
        float width; 
        float height; 
    } _iconSize;
    UIImage *_maskImage;
    UIImage *_overlayImage;
    id _styleHelper;
}

@property BOOL shouldPickBestImage;
@property(retain) UIImage * overlayImage;
@property(retain) UIImage * maskImage;
@property(readonly) int imageType;

+ (id)rightBorderOverlayImageOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)leftRightBorderOverlayImageOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)genericBlankPlaceholderImageOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)_placeholderPersonImageForType:(int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)_placeholderCompanyImageForType:(int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlayForType:(int)arg1;
+ (struct CGSize { float x1; float x2; })optimalIconSize;
+ (id)newImageViewWithIconSize:(struct CGSize { float x1; float x2; })arg1 imageType:(int)arg2;

- (id)maskImage;
- (void)setMaskImage:(id)arg1;
- (void)_updateImages;
- (id)init;
- (void)dealloc;
- (BOOL)shouldPickBestImage;
- (id)initWithIconSize:(struct CGSize { float x1; float x2; })arg1 imageType:(int)arg2;
- (void)setNeedsRecompositing;
- (void)setOverlayImage:(id)arg1;
- (id)_maskImageOrNSNull;
- (id)_overlayImageOrNSNull;
- (id)overlayImage;
- (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlay;
- (id)_placeholderPersonImage;
- (id)_placeholderCompanyImage;
- (int)imageType;
- (void)setShouldPickBestImage:(BOOL)arg1;
- (void*)displayedPerson;
- (id)personImageView;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2;
- (BOOL)hasImageToDisplay;
- (void)setNeedsReload;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2 cache:(id)arg3;

@end