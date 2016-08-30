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
/// The GroupMembersRemoveError union.
/// 
/// This class implements the DBSerializable protocol (serialize and deserialize
/// instance methods), which is required for all Obj-C SDK API route objects.
/// 
@interface DBTEAMGroupMembersRemoveError : NSObject <DBSerializable> 

#pragma mark - Instance fields

/// The DBTEAMGroupMembersRemoveErrorTag enum type represents the possible tag
/// states with which the DBTEAMGroupMembersRemoveError union can exist.
typedef NS_ENUM(NSInteger, DBTEAMGroupMembersRemoveErrorTag) {
    /// No matching group found. No groups match the specified group ID.
    DBTEAMGroupMembersRemoveErrorGroupNotFound,

    /// (no description).
    DBTEAMGroupMembersRemoveErrorOther,

    /// At least one of the specified users is not a member of the group.
    DBTEAMGroupMembersRemoveErrorMemberNotInGroup,

    /// Group is not in this team. You cannot remove members from a group that
    /// is outside of your team.
    DBTEAMGroupMembersRemoveErrorGroupNotInTeam,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMGroupMembersRemoveErrorTag tag;

#pragma mark - Constructors

/// 
/// Initializes union class with tag state of GroupNotFound.
/// 
/// About the GroupNotFound tag state: No matching group found. No groups match
/// the specified group ID.
/// 
/// @return An initialized DBTEAMGroupMembersRemoveError instance.
/// 
- (nonnull instancetype)initWithGroupNotFound;

/// 
/// Initializes union class with tag state of Other.
/// 
/// @return An initialized DBTEAMGroupMembersRemoveError instance.
/// 
- (nonnull instancetype)initWithOther;

/// 
/// Initializes union class with tag state of MemberNotInGroup.
/// 
/// About the MemberNotInGroup tag state: At least one of the specified users is
/// not a member of the group.
/// 
/// @return An initialized DBTEAMGroupMembersRemoveError instance.
/// 
- (nonnull instancetype)initWithMemberNotInGroup;

/// 
/// Initializes union class with tag state of GroupNotInTeam.
/// 
/// About the GroupNotInTeam tag state: Group is not in this team. You cannot
/// remove members from a group that is outside of your team.
/// 
/// @return An initialized DBTEAMGroupMembersRemoveError instance.
/// 
- (nonnull instancetype)initWithGroupNotInTeam;

#pragma mark - Tag state methods

/// 
/// Retrieves whether the union's current tag state has value GroupNotFound.
/// 
/// @return Whether the union's current tag state has value GroupNotFound.
/// 
- (BOOL)isGroupNotFound;

/// 
/// Retrieves whether the union's current tag state has value Other.
/// 
/// @return Whether the union's current tag state has value Other.
/// 
- (BOOL)isOther;

/// 
/// Retrieves whether the union's current tag state has value MemberNotInGroup.
/// 
/// @return Whether the union's current tag state has value MemberNotInGroup.
/// 
- (BOOL)isMemberNotInGroup;

/// 
/// Retrieves whether the union's current tag state has value GroupNotInTeam.
/// 
/// @return Whether the union's current tag state has value GroupNotInTeam.
/// 
- (BOOL)isGroupNotInTeam;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// @return A human-readable string representing the union's current tag state.
/// 
- (NSString * _Nonnull)tagName;

@end


#pragma mark - Serializer Object

/// 
/// The serialization class for the DBTEAMGroupMembersRemoveError union.
/// 
@interface DBTEAMGroupMembersRemoveErrorSerializer : NSObject 

/// 
/// Serializes DBTEAMGroupMembersRemoveError instances.
/// 
/// @param instance An instance of the DBTEAMGroupMembersRemoveError API object.
/// 
/// @return A json-compatible dictionary representation of the
/// DBTEAMGroupMembersRemoveError API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupMembersRemoveError * _Nonnull)instance;

/// 
/// Deserializes DBTEAMGroupMembersRemoveError instances.
/// 
/// @param dict A json-compatible dictionary representation of the
/// DBTEAMGroupMembersRemoveError API object.
/// 
/// @return An instantiation of the DBTEAMGroupMembersRemoveError object.
/// 
+ (DBTEAMGroupMembersRemoveError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end