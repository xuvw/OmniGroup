// Copyright 2014-2015 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniAppKit/OAAppearance.h>

@protocol OAAppearanceColors <NSObject>

@property (nonatomic, readonly) UIColor *omniRedColor;
@property (nonatomic, readonly) UIColor *omniOrangeColor;
@property (nonatomic, readonly) UIColor *omniYellowColor;
@property (nonatomic, readonly) UIColor *omniGreenColor;
@property (nonatomic, readonly) UIColor *omniTealColor;
@property (nonatomic, readonly) UIColor *omniBlueColor;
@property (nonatomic, readonly) UIColor *omniPurpleColor;
@property (nonatomic, readonly) UIColor *omniGraphiteColor;
@property (nonatomic, readonly) UIColor *omniCremaColor;

@property (nonatomic, readonly) UIColor *omniAlternateRedColor;
@property (nonatomic, readonly) UIColor *omniAlternateYellowColor;

@property (nonatomic, readonly) UIColor *omniNeutralDeemphasizedColor;
@property (nonatomic, readonly) UIColor *omniNeutralPlaceholderColor;
@property (nonatomic, readonly) UIColor *omniNeutralLightweightColor;

@property (nonatomic, readonly) UIColor *omniDeleteColor;

@property (nonatomic, readonly) UIColor *omniExplanotextColor;

@end

@interface OAAppearanceDefaultColors : OAAppearance <OAAppearanceColors>
@end

@interface OAAppearanceDarkColors : OAAppearance <OAAppearanceColors>
@end
