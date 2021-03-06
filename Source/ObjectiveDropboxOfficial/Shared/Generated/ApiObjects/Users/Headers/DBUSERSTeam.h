///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBUSERSTeam;

#pragma mark - API Object

///
/// The `Team` struct.
///
/// Information about a team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSTeam : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The team's unique ID.
@property (nonatomic, readonly, copy) NSString * _Nonnull id_;

/// The name of the team.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param id_ The team's unique ID.
/// @param name The name of the team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithId_:(NSString * _Nonnull)id_ name:(NSString * _Nonnull)name;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `Team` struct.
///
@interface DBUSERSTeamSerializer : NSObject

///
/// Serializes `DBUSERSTeam` instances.
///
/// @param instance An instance of the `DBUSERSTeam` API object.
///
/// @return A json-compatible dictionary representation of the `DBUSERSTeam` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBUSERSTeam * _Nonnull)instance;

///
/// Deserializes `DBUSERSTeam` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBUSERSTeam`
/// API object.
///
/// @return An instantiation of the `DBUSERSTeam` object.
///
+ (DBUSERSTeam * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
