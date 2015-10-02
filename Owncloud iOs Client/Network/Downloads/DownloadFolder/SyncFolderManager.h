//
//  SyncFolderManager.h
//  Owncloud iOs Client
//
//  Created by Javier Gonzalez on 25/09/15.
//
//

#import <Foundation/Foundation.h>

@class FileDto;
@class CWLOrderedDictionary;

@interface SyncFolderManager : NSObject

@property (nonatomic, strong) CWLOrderedDictionary *dictOfFoldersToBeCheck;
@property (nonatomic, strong) CWLOrderedDictionary *dictOfFilesAndFoldersToBeDownloaded;

- (void) addFolderToBeDownloaded: (FileDto *) folder;

@end