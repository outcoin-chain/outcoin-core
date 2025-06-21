#pragma once

#include <mw/exceptions/OUTException.h>
#include <mw/util/StringUtil.h>

#define ThrowCrypto(msg) throw CryptoException(msg, __FUNCTION__)
#define ThrowCrypto_F(msg, ...) throw CryptoException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class CryptoException : public OUTException
{
public:
    CryptoException(const std::string& message, const std::string& function)
        : OUTException("CryptoException", message, function)
    {

    }
};