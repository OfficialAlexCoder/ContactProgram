#include <windows.h>
#include <shellapi.h>
#include <string>

int main() {
    std::string url = "https://github.com/OfficialAlexCoder/ContactProgram/releases/download/v1.1/v1.1.zip";

    ShellExecuteA(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);

    return 0;
}
