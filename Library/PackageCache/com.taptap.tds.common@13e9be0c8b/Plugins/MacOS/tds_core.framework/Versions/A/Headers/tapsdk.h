#pragma once

#include <memory>
#include <string>
#include <cstdint>

namespace tapsdk {

class TDSUser;

enum class Region : int {
    CN = 0,
    Global
};

class TDSUser {
public:
    static void SetCurrent(const std::shared_ptr<TDSUser>& user);
    static std::shared_ptr<TDSUser> GetCurrent();

    TDSUser(const std::string& user_id = {});

    virtual ~TDSUser() = default;

    virtual std::string GetUserId();
    virtual std::string GetUserName() = 0;
    virtual bool ContainTapInfo() = 0;
private:
    std::string user_id;
};

class Game {
public:
    static void SetCurrent(const std::shared_ptr<Game> &game);
    static std::shared_ptr<Game> GetCurrent();

    virtual ~Game() = default;

    // 游戏 Game ID
    virtual std::string GetGameID() = 0;

    // 游戏包名/Bundle ID
    virtual std::string GetPackageName() = 0;
};

struct Config {
    bool enable_duration_statistics = false;
    Region region = Region::CN;
};

bool Init(const Config &config);

}  // namespace tapsdk
