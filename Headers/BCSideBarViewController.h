//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <BCLayerList/NSSplitViewDelegate-Protocol.h>

@class BCLayerListFilterViewController, BCOutlineViewController, BCOutlineViewDataController, BCPageListViewController, BCSidebarTabButton, NSButton, NSDictionary, NSObject, NSPopUpButton, NSSplitView, NSString, NSTabView, NSView;
@protocol BCOutlineViewNode, BCSideBarViewControllerDelegate;

@interface BCSideBarViewController : NSViewController <NSSplitViewDelegate>
{
    BOOL _userUpdatedPageHeight;
    NSObject<BCSideBarViewControllerDelegate> *_delegate;
    NSButton *_libraryPreferencesButton;
    NSButton *_toggleLibraryListButton;
    BCSidebarTabButton *_pageTabButton;
    BCSidebarTabButton *_componentsTabButton;
    NSTabView *_tabView;
    NSDictionary *_tabConfigurations;
    BCOutlineViewDataController *_pageListDataController;
    BCPageListViewController *_pageListViewController;
    NSView *_pageListContainer;
    long long _pageCount;
    NSPopUpButton *_pagePopUpButton;
    BCOutlineViewDataController *_layerListDataController;
    NSView *_layerListContainer;
    BCOutlineViewController *_layerListViewController;
    NSButton *_addPageButton;
    NSButton *_togglePageListButton;
    NSSplitView *_splitView;
    BCLayerListFilterViewController *_filterViewController;
}

@property(retain, nonatomic) BCLayerListFilterViewController *filterViewController; // @synthesize filterViewController=_filterViewController;
@property(nonatomic) BOOL userUpdatedPageHeight; // @synthesize userUpdatedPageHeight=_userUpdatedPageHeight;
@property(nonatomic) __weak NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) __weak NSButton *togglePageListButton; // @synthesize togglePageListButton=_togglePageListButton;
@property(nonatomic) __weak NSButton *addPageButton; // @synthesize addPageButton=_addPageButton;
@property(retain, nonatomic) BCOutlineViewController *layerListViewController; // @synthesize layerListViewController=_layerListViewController;
@property(retain, nonatomic) NSView *layerListContainer; // @synthesize layerListContainer=_layerListContainer;
@property(retain, nonatomic) BCOutlineViewDataController *layerListDataController; // @synthesize layerListDataController=_layerListDataController;
@property(nonatomic) __weak NSPopUpButton *pagePopUpButton; // @synthesize pagePopUpButton=_pagePopUpButton;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) NSView *pageListContainer; // @synthesize pageListContainer=_pageListContainer;
@property(retain, nonatomic) BCPageListViewController *pageListViewController; // @synthesize pageListViewController=_pageListViewController;
@property(retain, nonatomic) BCOutlineViewDataController *pageListDataController; // @synthesize pageListDataController=_pageListDataController;
@property(retain, nonatomic) NSDictionary *tabConfigurations; // @synthesize tabConfigurations=_tabConfigurations;
@property(retain, nonatomic) NSTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) __weak BCSidebarTabButton *componentsTabButton; // @synthesize componentsTabButton=_componentsTabButton;
@property(nonatomic) __weak BCSidebarTabButton *pageTabButton; // @synthesize pageTabButton=_pageTabButton;
@property(nonatomic) __weak NSButton *toggleLibraryListButton; // @synthesize toggleLibraryListButton=_toggleLibraryListButton;
@property(nonatomic) __weak NSButton *libraryPreferencesButton; // @synthesize libraryPreferencesButton=_libraryPreferencesButton;
@property(nonatomic) __weak NSObject<BCSideBarViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (id)pageListToggleButtonTooltip;
- (void)onTogglePageList:(id)arg1;
@property(readonly, nonatomic) BOOL isSplitViewCollapsed;
- (BOOL)showPagePopUpButton;
- (void)showPageView;
- (BOOL)hidePagePopUpButton;
- (void)hidePageView;
- (void)flagsChangedNotification;
- (void)renamePage;
- (void)renameLayerAfterNextLayerListRefresh;
- (void)findLayer:(id)arg1;
- (void)renameLayer;
- (void)checkPageListHeight;
- (void)refreshWithMask:(unsigned long long)arg1;
- (void)refreshPagePopup;
- (void)pagePopUpButtonDidChange:(id)arg1;
- (void)updatePopupWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <BCOutlineViewNode> currentPage;
- (void)viewDidAppear;
@property(nonatomic) double currentPageHeight;
- (void)applyAppearance;
- (void)refreshAfterAppearanceChange;
- (id)tabViewControllerForIdentifier:(id)arg1;
- (void)switchToTabWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *currentTabIdentifier;
- (void)applyTabConfiguration:(id)arg1;
- (void)updateActiveList;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)embedView:(id)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)initWithPageListDataSource:(id)arg1 delegate:(id)arg2 layerListDataSource:(id)arg3 delegate:(id)arg4;
- (BOOL)isNodeExpanded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

