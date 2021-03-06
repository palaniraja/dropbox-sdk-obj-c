///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMIncludeMembersArg;

#pragma mark - API Object

///
/// The `IncludeMembersArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMIncludeMembersArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Whether to return the list of members in the group.  Note that the default
/// value will cause all the group members  to be returned in the response. This
/// may take a long time for large groups.
@property (nonatomic, readonly) NSNumber * _Nonnull returnMembers;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param returnMembers Whether to return the list of members in the group.
/// Note that the default value will cause all the group members  to be returned
/// in the response. This may take a long time for large groups.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithReturnMembers:(NSNumber * _Nullable)returnMembers;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (nonnull instancetype)initDefault;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `IncludeMembersArg` struct.
///
@interface DBTEAMIncludeMembersArgSerializer : NSObject

///
/// Serializes `DBTEAMIncludeMembersArg` instances.
///
/// @param instance An instance of the `DBTEAMIncludeMembersArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMIncludeMembersArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMIncludeMembersArg * _Nonnull)instance;

///
/// Deserializes `DBTEAMIncludeMembersArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMIncludeMembersArg` API object.
///
/// @return An instantiation of the `DBTEAMIncludeMembersArg` object.
///
+ (DBTEAMIncludeMembersArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
