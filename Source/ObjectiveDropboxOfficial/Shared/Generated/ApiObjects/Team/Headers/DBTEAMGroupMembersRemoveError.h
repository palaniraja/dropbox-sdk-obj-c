///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMGroupMembersRemoveError;

#pragma mark - API Object

///
/// The `GroupMembersRemoveError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupMembersRemoveError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMGroupMembersRemoveErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMGroupMembersRemoveError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMGroupMembersRemoveErrorTag) {
  /// No matching group found. No groups match the specified group ID.
  DBTEAMGroupMembersRemoveErrorGroupNotFound,

  /// (no description).
  DBTEAMGroupMembersRemoveErrorOther,

  /// This operation is not supported on system-managed groups.
  DBTEAMGroupMembersRemoveErrorSystemManagedGroupDisallowed,

  /// At least one of the specified users is not a member of the group.
  DBTEAMGroupMembersRemoveErrorMemberNotInGroup,

  /// Group is not in this team. You cannot remove members from a group that
  /// is outside of your team.
  DBTEAMGroupMembersRemoveErrorGroupNotInTeam,

  /// These members are not part of your team.
  DBTEAMGroupMembersRemoveErrorMembersNotInTeam,

  /// These users were not found in Dropbox.
  DBTEAMGroupMembersRemoveErrorUsersNotFound,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMGroupMembersRemoveErrorTag tag;

/// These members are not part of your team. @note Ensure the
/// `isMembersNotInTeam` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly) NSArray<NSString *> * _Nonnull membersNotInTeam;

/// These users were not found in Dropbox. @note Ensure the `isUsersNotFound`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) NSArray<NSString *> * _Nonnull usersNotFound;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "group_not_found".
///
/// Description of the "group_not_found" tag state: No matching group found. No
/// groups match the specified group ID.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroupNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

///
/// Initializes union class with tag state of "system_managed_group_disallowed".
///
/// Description of the "system_managed_group_disallowed" tag state: This
/// operation is not supported on system-managed groups.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithSystemManagedGroupDisallowed;

///
/// Initializes union class with tag state of "member_not_in_group".
///
/// Description of the "member_not_in_group" tag state: At least one of the
/// specified users is not a member of the group.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMemberNotInGroup;

///
/// Initializes union class with tag state of "group_not_in_team".
///
/// Description of the "group_not_in_team" tag state: Group is not in this team.
/// You cannot remove members from a group that is outside of your team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroupNotInTeam;

///
/// Initializes union class with tag state of "members_not_in_team".
///
/// Description of the "members_not_in_team" tag state: These members are not
/// part of your team.
///
/// @param membersNotInTeam These members are not part of your team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMembersNotInTeam:(NSArray<NSString *> * _Nonnull)membersNotInTeam;

///
/// Initializes union class with tag state of "users_not_found".
///
/// Description of the "users_not_found" tag state: These users were not found
/// in Dropbox.
///
/// @param usersNotFound These users were not found in Dropbox.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUsersNotFound:(NSArray<NSString *> * _Nonnull)usersNotFound;

- (nonnull instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "group_not_found".
///
/// @return Whether the union's current tag state has value "group_not_found".
///
- (BOOL)isGroupNotFound;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value
/// "system_managed_group_disallowed".
///
/// @return Whether the union's current tag state has value
/// "system_managed_group_disallowed".
///
- (BOOL)isSystemManagedGroupDisallowed;

///
/// Retrieves whether the union's current tag state has value
/// "member_not_in_group".
///
/// @return Whether the union's current tag state has value
/// "member_not_in_group".
///
- (BOOL)isMemberNotInGroup;

///
/// Retrieves whether the union's current tag state has value
/// "group_not_in_team".
///
/// @return Whether the union's current tag state has value "group_not_in_team".
///
- (BOOL)isGroupNotInTeam;

///
/// Retrieves whether the union's current tag state has value
/// "members_not_in_team".
///
/// @note Call this method and ensure it returns true before accessing the
/// `membersNotInTeam` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "members_not_in_team".
///
- (BOOL)isMembersNotInTeam;

///
/// Retrieves whether the union's current tag state has value "users_not_found".
///
/// @note Call this method and ensure it returns true before accessing the
/// `usersNotFound` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "users_not_found".
///
- (BOOL)isUsersNotFound;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMGroupMembersRemoveError` union.
///
@interface DBTEAMGroupMembersRemoveErrorSerializer : NSObject

///
/// Serializes `DBTEAMGroupMembersRemoveError` instances.
///
/// @param instance An instance of the `DBTEAMGroupMembersRemoveError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersRemoveError` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupMembersRemoveError * _Nonnull)instance;

///
/// Deserializes `DBTEAMGroupMembersRemoveError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersRemoveError` API object.
///
/// @return An instantiation of the `DBTEAMGroupMembersRemoveError` object.
///
+ (DBTEAMGroupMembersRemoveError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
