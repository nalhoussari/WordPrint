//
//  Printer.m
//  WordPrinter
//
//  Created by Noor Alhoussari on 2017-06-03.
//  Copyright © 2017 Lighthouse Labs. All rights reserved.
//

#import "Printer.h"

@implementation Printer

-(void)printWord:(NSString *)word{
    
    [self.delegate printer :self. numberOfTimesToPrint:word = 2];
        NSLog(@"%@", word);
}

@end
