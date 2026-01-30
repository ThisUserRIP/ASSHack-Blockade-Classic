#pragma once
namespace System::System::Net::Mail
{
	enum struct SmtpDeliveryFormat : int32_t
	{
		SevenBit = static_cast<int32_t>(0x0),
		International = static_cast<int32_t>(0x1),
	};
}

