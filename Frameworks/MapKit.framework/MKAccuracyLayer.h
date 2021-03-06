/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAccuracyLayer : CAShapeLayer {
    float _accuracy;
}

@property(readonly) float accuracy;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accuracyRectForPosition:(struct CGPoint { float x1; float x2; })arg1 accuracy:(float)arg2;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;

- (void)_setAccuracy:(float)arg1 force:(BOOL)arg2;
- (float)accuracy;
- (BOOL)isAccuracyBounded:(float)arg1;
- (BOOL)isAccuracyMaxBounded:(float)arg1;
- (BOOL)isAccuracyMinBounded:(float)arg1;
- (BOOL)isHoveringAnimation:(id*)arg1;
- (void)setAccuracy:(float)arg1;
- (BOOL)sizeToFitAccuracy:(float)arg1 animated:(BOOL)arg2;
- (BOOL)sizeToFitAccuracy;

@end
