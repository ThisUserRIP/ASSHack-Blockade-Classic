#pragma once
namespace mscorlib::System::Runtime::Remoting::Messaging
{
	enum struct ArgInfoType : uint8_t
	{
		In = static_cast<uint8_t>(0x0),
		Out = static_cast<uint8_t>(0x1),
	};
}

