
#import <Foundation/Foundation.h>
#import <AddressBook/ABAddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import <Cordova/CDVPlugin.h>

@interface Contacts : CDVPlugin <ABNewPersonViewControllerDelegate,
                         ABPersonViewControllerDelegate,
                         ABPeoplePickerNavigationControllerDelegate
                         >

- (void)search:(CDVInvokedUrlCommand*)command;
- (void)checkAccess:(CDVInvokedUrlCommand*)command;
- (void)startObserveChanges:(CDVInvokedUrlCommand*)command;
- (void)stopObserveChanges:(CDVInvokedUrlCommand*)command;

@end
