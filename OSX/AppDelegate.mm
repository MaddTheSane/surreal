//
//  AppDelegate.m
//  Surreal
//
//  Created by C.W. Betts on 6/9/14.
//  Copyright (c) 2014 C.W. Betts. All rights reserved.
//

#import "AppDelegate.h"
#include <fcntl.h>
#include "Engine.h"
#include "UnRender.h"

extern "C" {TCHAR GPackage[64]=TEXT("OSXLaunch");}

#include "FNativeTypes.h"

// Memory allocator.
FMallocNative Malloc;

// Log file.
#include "FOutputDeviceFile.h"
FOutputDeviceFile Log;

// Error handler.
#include "FOutputDeviceAnsiError.h"
FOutputDeviceAnsiError Error;

// Feedback.
#include "FFeedbackContextAnsi.h"
FFeedbackContextAnsi Warn;

// File manager.
FFileManagerNative FileManager;

// Config.
#include "FConfigCacheIni.h"


@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
	// Insert code here to initialize your application
#if !_MSC_VER
	__Context::StaticInit();
#endif
	
	//INT ErrorLevel = 0;
	GIsStarted     = 1;
}

- (void)applicationWillTerminate:(nonnull NSNotification *)notification
{
	appExit();
	GIsStarted = 0;
}

@end
