/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLTexture;

@interface VGLRouteLineMesh : VGLMesh {
    float _splitLocation;
    VGLTexture *_texture;
    float _totalArchLength;
    BOOL _trafficSpeed;
    int _z;
}

@property float splitLocation;
@property(retain) VGLTexture * texture;
@property float totalArchLength;
@property BOOL trafficSpeed;
@property int z;

- (void)dealloc;
- (void)drawTrianglesWithContext:(id)arg1 offset:(int)arg2 count:(int)arg3;
- (void)drawTrianglesWithContext:(id)arg1;
- (id)init;
- (id)initWithVertexCapacity:(int)arg1 indexCapacity:(int)arg2;
- (void)setSplitLocation:(float)arg1;
- (void)setTexture:(id)arg1;
- (void)setTotalArchLength:(float)arg1;
- (void)setTrafficSpeed:(BOOL)arg1;
- (void)setZ:(int)arg1;
- (float)splitLocation;
- (id)texture;
- (float)totalArchLength;
- (BOOL)trafficSpeed;
- (int)z;

@end
