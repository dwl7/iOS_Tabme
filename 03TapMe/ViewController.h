//
//  ViewController.h
//  03TapMe
//
//  Created by Dae Woong Lim on 2015-03-20.
//  Copyright (c) 2015 Dae Woong Lim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<UIAlertViewDelegate>
{
    IBOutlet UILabel *timerLabel;
    IBOutlet UILabel *scoreLabel;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
    
    
    AVAudioPlayer *buttonBeep;
    AVAudioPlayer *secondBeep;
    AVAudioPlayer *backgroundMusic;
    
}

-(IBAction)buttonPressed:(id)sender;



@end

