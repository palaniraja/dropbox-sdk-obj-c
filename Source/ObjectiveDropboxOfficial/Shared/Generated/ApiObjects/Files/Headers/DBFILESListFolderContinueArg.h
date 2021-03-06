///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESListFolderContinueArg;

#pragma mark - API Object

///
/// The `ListFolderContinueArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESListFolderContinueArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The cursor returned by your last call to `listFolder` or
/// `listFolderContinue`.
@property (nonatomic, readonly, copy) NSString * _Nonnull cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor The cursor returned by your last call to `listFolder` or
/// `listFolderContinue`.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithCursor:(NSString * _Nonnull)cursor;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFolderContinueArg` struct.
///
@interface DBFILESListFolderContinueArgSerializer : NSObject

///
/// Serializes `DBFILESListFolderContinueArg` instances.
///
/// @param instance An instance of the `DBFILESListFolderContinueArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESListFolderContinueArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESListFolderContinueArg * _Nonnull)instance;

///
/// Deserializes `DBFILESListFolderContinueArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESListFolderContinueArg` API object.
///
/// @return An instantiation of the `DBFILESListFolderContinueArg` object.
///
+ (DBFILESListFolderContinueArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
