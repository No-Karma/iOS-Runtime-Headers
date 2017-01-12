/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCustomFeedback : SFFeedback {
    unsigned int  _feedbackType;
    NSDictionary * _jsonFeedback;
}

@property (nonatomic) unsigned int feedbackType;
@property (nonatomic, copy) NSDictionary *jsonFeedback;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)feedbackType;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned int)arg1 jsonFeedback:(id)arg2;
- (id)jsonFeedback;
- (void)setFeedbackType:(unsigned int)arg1;
- (void)setJsonFeedback:(id)arg1;

@end