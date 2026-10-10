#pragma once

#include "../stream-server.hpp"

namespace BitrateSwitch {

class OpenRtmpServer : public StreamServer {
public:
    explicit OpenRtmpServer(const StreamServerConfig &config);

    SwitchType checkSwitch(const Triggers &triggers) override;
    BitrateInfo getBitrate() override;

private:
    BitrateInfo fetchStats();
};

} // namespace BitrateSwitch
