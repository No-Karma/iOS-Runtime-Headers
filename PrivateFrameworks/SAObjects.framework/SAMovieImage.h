/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAMovieResolution, NSURL;

@interface SAMovieImage : AceObject <SAAceSerializable> {
}

@property(retain) SAMovieResolution * resolution;
@property(copy) NSURL * uri;

+ (id)image;
+ (id)imageWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)resolution;
- (id)uri;
- (void)setUri:(id)arg1;
- (void)setResolution:(id)arg1;
- (id)encodedClassName;

@end