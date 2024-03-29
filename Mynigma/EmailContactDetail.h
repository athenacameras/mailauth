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
#import <CoreData/CoreData.h>

@class Contact, EmailMessage, IMAPAccountSetting, MynigmaPrivateKey, MynigmaPublicKey;

@interface EmailContactDetail : NSManagedObject

@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSDate * currentReceivedDate;
@property (nonatomic, retain) NSDate * currentSentDate;
@property (nonatomic, retain) NSDate * dateLastContacted;
@property (nonatomic, retain) NSString * fullName;
@property (nonatomic, retain) NSNumber * hasUsedMac;
@property (nonatomic, retain) NSDate * lastCheckedWithServer;
@property (nonatomic, retain) NSDate * lastSentPublicKeyInHeader;
@property (nonatomic, retain) NSDate * licencedUntil;
@property (nonatomic, retain) NSNumber * numberOfTimesContacted;
@property (nonatomic, retain) NSNumber * sentToServer;
@property (nonatomic, retain) MynigmaPublicKey *currentPublicKey;
@property (nonatomic, retain) MynigmaPrivateKey *currentReceivedPair;
@property (nonatomic, retain) MynigmaPrivateKey *currentSentPair;
@property (nonatomic, retain) NSSet *linkedToContact;
@property (nonatomic, retain) NSSet *messages;
@property (nonatomic, retain) NSSet *publicKeys;
@property (nonatomic, retain) IMAPAccountSetting *senderAddressForAccount;
@end

@interface EmailContactDetail (CoreDataGeneratedAccessors)

- (void)addLinkedToContactObject:(Contact *)value;
- (void)removeLinkedToContactObject:(Contact *)value;
- (void)addLinkedToContact:(NSSet *)values;
- (void)removeLinkedToContact:(NSSet *)values;

- (void)addMessagesObject:(EmailMessage *)value;
- (void)removeMessagesObject:(EmailMessage *)value;
- (void)addMessages:(NSSet *)values;
- (void)removeMessages:(NSSet *)values;

- (void)addPublicKeysObject:(MynigmaPublicKey *)value;
- (void)removePublicKeysObject:(MynigmaPublicKey *)value;
- (void)addPublicKeys:(NSSet *)values;
- (void)removePublicKeys:(NSSet *)values;

@end
