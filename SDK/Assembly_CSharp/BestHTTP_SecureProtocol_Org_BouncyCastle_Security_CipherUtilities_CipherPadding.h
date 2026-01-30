#pragma once
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	enum struct CipherUtilities_CipherPadding : int32_t
	{
		NOPADDING = static_cast<int32_t>(0x0),
		RAW = static_cast<int32_t>(0x1),
		ISO10126PADDING = static_cast<int32_t>(0x2),
		ISO10126D2PADDING = static_cast<int32_t>(0x3),
		ISO10126_2PADDING = static_cast<int32_t>(0x4),
		ISO7816_4PADDING = static_cast<int32_t>(0x5),
		ISO9797_1PADDING = static_cast<int32_t>(0x6),
		ISO9796_1 = static_cast<int32_t>(0x7),
		ISO9796_1PADDING = static_cast<int32_t>(0x8),
		OAEP = static_cast<int32_t>(0x9),
		OAEPPADDING = static_cast<int32_t>(0xA),
		OAEPWITHMD5ANDMGF1PADDING = static_cast<int32_t>(0xB),
		OAEPWITHSHA1ANDMGF1PADDING = static_cast<int32_t>(0xC),
		OAEPWITHSHA_1ANDMGF1PADDING = static_cast<int32_t>(0xD),
		OAEPWITHSHA224ANDMGF1PADDING = static_cast<int32_t>(0xE),
		OAEPWITHSHA_224ANDMGF1PADDING = static_cast<int32_t>(0xF),
		OAEPWITHSHA256ANDMGF1PADDING = static_cast<int32_t>(0x10),
		OAEPWITHSHA_256ANDMGF1PADDING = static_cast<int32_t>(0x11),
		OAEPWITHSHA384ANDMGF1PADDING = static_cast<int32_t>(0x12),
		OAEPWITHSHA_384ANDMGF1PADDING = static_cast<int32_t>(0x13),
		OAEPWITHSHA512ANDMGF1PADDING = static_cast<int32_t>(0x14),
		OAEPWITHSHA_512ANDMGF1PADDING = static_cast<int32_t>(0x15),
		PKCS1 = static_cast<int32_t>(0x16),
		PKCS1PADDING = static_cast<int32_t>(0x17),
		PKCS5 = static_cast<int32_t>(0x18),
		PKCS5PADDING = static_cast<int32_t>(0x19),
		PKCS7 = static_cast<int32_t>(0x1A),
		PKCS7PADDING = static_cast<int32_t>(0x1B),
		TBCPADDING = static_cast<int32_t>(0x1C),
		WITHCTS = static_cast<int32_t>(0x1D),
		X923PADDING = static_cast<int32_t>(0x1E),
		ZEROBYTEPADDING = static_cast<int32_t>(0x1F),
	};
}

