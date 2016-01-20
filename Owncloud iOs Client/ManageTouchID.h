//
//  ManageTouchID.h
//  Owncloud iOs Client
//
//  Created by María Rodríguez on 20/01/16.
//
//

/*
 Copyright (C) 2016, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */


@interface ManageTouchID : NSObject

+ (BOOL)isTouchIDAvailable;
+ (void)touchIDStart;

@end