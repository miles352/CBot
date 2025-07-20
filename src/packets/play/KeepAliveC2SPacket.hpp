#include "packets/ServerboundPacket.hpp"

class KeepAliveC2SPacket : public ServerboundPacket
{
    public:

    KeepAliveC2SPacket(int64_t keep_alive_id);

    static constexpr int id = 0x1B;

    int get_id() const override { return this->id; }

    using Data = struct
    {
        int64_t keep_alive_id;
    };

    Data data{};

    std::vector<uint8_t> encode() override;
};
