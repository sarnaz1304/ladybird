#pragma once

#include "CharacterDevice.h"

class NullDevice final : public CharacterDevice {
    AK_MAKE_ETERNAL
public:
    NullDevice();
    virtual ~NullDevice() override;

    virtual Unix::ssize_t read(byte* buffer, Unix::size_t bufferSize) override;
    virtual Unix::ssize_t write(const byte* buffer, Unix::size_t bufferSize) override;
    virtual bool hasDataAvailableForRead() const override;
};

