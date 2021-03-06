/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKImage;

@interface WLCardBackFaceImages : PKPassImages {
    PKImage *_faceImage;
}

@property(retain) PKImage * faceImage;

+ (id)archiveName;
+ (int)currentVersion;
+ (int)imageSet;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)faceImage;
- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (void)setFaceImage:(id)arg1;

@end
