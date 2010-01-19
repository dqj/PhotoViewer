//
//  EGOPhotoController.h
//  EGOPhotoViewer
//
//  Created by Devin Doty on 1/8/10.
//  Copyright 2010 enormego. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGOImageLoader.h"
#import <MessageUI/MessageUI.h>

@class EGOPhotoImageView, EGOPhotoSource, EGOPhoto, EGOPhotoCaptionView;

@interface EGOPhotoController : UIViewController<UIScrollViewDelegate, UIActionSheetDelegate, MFMailComposeViewControllerDelegate> {

	EGOPhotoSource *_photoSource;
	NSMutableArray *_photoViews;
	EGOPhotoCaptionView *_captionView;
	UIScrollView *_scrollView;	

	NSTimer *timer;	
	NSInteger pageIndex;
	BOOL rotating;
	
	UIBarButtonItem *leftButton;
	UIBarButtonItem *rightButton;
	UIBarButtonItem *actionButton;

}

- (id)initWithPhotoSource:(EGOPhotoSource*)aSource;  //  multiple photos
- (id)initWithImageURL:(NSURL*)aURL;  //  single photo view

@property(nonatomic,readonly) EGOPhotoSource *photoSource;
@property(nonatomic,retain) NSMutableArray *photoViews;
@property(nonatomic,retain) EGOPhotoCaptionView *captionView;
@property(nonatomic,retain) IBOutlet UIScrollView *scrollView;

@end