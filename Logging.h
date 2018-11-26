//
//  Logging.h
//  ConnectSDK
//
//  Created by Boudewijn Geiger on 24/11/2018.
//  Copyright © 2018 LG Electronics. All rights reserved.
//

// Try tu use CocoaLumberjack
#if __has_include("DDLog.h")
    #import <CocoaLumberjack/CocoaLumberjack.h>
    #define LOG_LEVEL_INFO DDLogLevelInfo
#endif
