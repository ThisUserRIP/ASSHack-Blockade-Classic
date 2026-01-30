#pragma once
namespace System::System::Net::Mail
{
	enum struct SmtpDeliveryMethod : int32_t
	{
		Network = static_cast<int32_t>(0x0),
		SpecifiedPickupDirectory = static_cast<int32_t>(0x1),
		PickupDirectoryFromIis = static_cast<int32_t>(0x2),
	};
}

