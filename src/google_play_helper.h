#pragma once

#include <string>
#include <thread>
#include <playapi/util/config.h>
#include <include/cef_client.h>

class InitialSetupBrowserClient;

class GooglePlayHelper {

private:
    static std::string const DOWNLOAD_PACKAGE;

    playapi::config config;
    std::thread thread;

public:
    static GooglePlayHelper singleton;

    bool handleLoginAndApkDownloadSync(InitialSetupBrowserClient* setup, CefWindowInfo const& windowInfo);

    void handleLoginAndApkDownload(InitialSetupBrowserClient* setup, CefWindowInfo const& windowInfo);

};