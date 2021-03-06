#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSMenu *statusMenu;
@property (strong, nonatomic) NSStatusItem *statusBar;

- (IBAction)prefsMenuItemAction:(id)sender;

- (IBAction)quitMenuItemAction:(id)sender;

@property (weak) IBOutlet NSMenuItem *muteMenuItem;

- (IBAction)menuMenuItemAction:(id)sender;

- (void) hideMenuBar:(BOOL)enableState;

- (void) shortCutKeyPressed;

@end

