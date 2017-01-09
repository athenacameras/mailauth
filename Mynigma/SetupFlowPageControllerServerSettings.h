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

#import "SetupFlowPageController.h"





@class MovingPlaceholderTextField;


@interface SetupFlowPageControllerServerSettings : SetupFlowPageController



#pragma mark - IBOutlets

@property (weak, nonatomic) IBOutlet UIButton *showSettingsButton;
@property (weak, nonatomic) IBOutlet UIView *buttonSeparator;


@property (weak, nonatomic) IBOutlet MovingPlaceholderTextField *incomingServerNameField;
@property (weak, nonatomic) IBOutlet UISegmentedControl *incomingConnectionTypeSegmentedControl;
@property (weak, nonatomic) IBOutlet UISwitch *incomingDetectPortSwitch;
@property (weak, nonatomic) IBOutlet MovingPlaceholderTextField *incomingPortTextField;


@property (weak, nonatomic) IBOutlet MovingPlaceholderTextField *outgoingServerNameField;
@property (weak, nonatomic) IBOutlet UISegmentedControl *outgoingConnectionTypeSegmentedControl;
@property (weak, nonatomic) IBOutlet UISwitch *outgoingDetectPortSwitch;
@property (weak, nonatomic) IBOutlet MovingPlaceholderTextField *outgoingPortTextField;


@property (weak, nonatomic) IBOutlet UILabel *autoDetectCoverLabel;



//set to a high value to hide settings before the "Show settings" button is tapped
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *settingsTopMarginConstraint;



- (void)hideSettings;


@end