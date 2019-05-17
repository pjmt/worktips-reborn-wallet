#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define PROJECT_NAME "Worktips"
#define PROJECT_SITE "https://worktips.xyz/"
#define PROJECT_COPYRIGHT "Copyright 2019, The Worktips Developers"
#define APP_VER_MAJOR 2
#define APP_VER_MINOR 0
#define APP_VER_REV 0
#define APP_VER_BUILD 0

#define BUILD_COMMIT_ID "2.0.0-beta"
#define PROJECT_VERSION STR(APP_VER_MAJOR) "." STR(APP_VER_MINOR) "." STR(APP_VER_REV)
#define PROJECT_VERSION_BUILD_NO STR(APP_VER_BUILD)
#define PROJECT_VERSION_LONG PROJECT_VERSION "." PROJECT_VERSION_BUILD_NO " "
#define PROJECT_DESCRIPTION PROJECT_NAME " " PROJECT_VERSION_LONG
