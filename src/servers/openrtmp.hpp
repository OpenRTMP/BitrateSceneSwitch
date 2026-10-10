#pragma once

#include "../stream-server.hpp"

namespace BitrateSwitch {

// OpenRTMP/librtmp2-server's per-stream, key-protected HTTP stats endpoint.
class OpenRtmpServer : public StreamServer {
public:
    explicit OpenRtmpServer(const StreamServerConfig &config);

    SwitchType checkSwitch(const Triggers &triggers) override;
    BitrateInfo getBitrate() override;

private:
    BitrateInfo fetchStats();
};

} // namespace BitrateSwitch
