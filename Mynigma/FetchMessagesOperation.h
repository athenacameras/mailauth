//
//	Copyright © 2012 - 2015 Roman Priebe
//
//	This file is part of M - Safe email made simple.
//
//	M is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//
//	M is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//
//	You should have received a copy of the GNU General Public License
//	along with M.  If not, see <http://www.gnu.org/licenses/>.
//





#import <Foundation/Foundation.h>
#import <MailCore/MailCore.h>
#import "SerialisableOperation.h"



@interface FetchMessagesOperation : SerialisableOperation

+ (FetchMessagesOperation*)fetchMessagesByUIDOperationWithRequestKind:(MCOIMAPMessagesRequestKind)requestKind indexSet:(MCOIndexSet*)indexSet folderPath:(NSString*)folderPath session:(MCOIMAPSession*)session withCallback:(void(^)(NSError* error, NSArray* messages, MCOIndexSet* vanishedMessages))callback;

+ (FetchMessagesOperation*)fetchMessagesByNumberOperationWithRequestKind:(MCOIMAPMessagesRequestKind)requestKind indexSet:(MCOIndexSet*)indexSet folderPath:(NSString*)folderPath session:(MCOIMAPSession*)session withCallback:(void(^)(NSError* error, NSArray* messages, MCOIndexSet* vanishedMessages))callback;

@property BOOL byNumber;
//@property BOOL finished;
@property MCOIMAPMessagesRequestKind requestKind;
@property MCOIndexSet* indexSet;

@property(strong) void(^callback)(NSError *error, NSArray *messages, MCOIndexSet *vanishedMessages);

@end
