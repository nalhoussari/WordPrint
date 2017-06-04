//
//  Printer.h
//  WordPrinter
//
//  Created by Noor Alhoussari on 2017-06-03.
//  Copyright © 2017 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PrinterDelegate <NSObject>

-(int)printer :(Printer *)printer numberOfTimesToPrint:(NSString *)word;

@end

@interface Printer : NSObject

@property (nonatomic, weak) id<PrinterDelegate> delegate;

@end
