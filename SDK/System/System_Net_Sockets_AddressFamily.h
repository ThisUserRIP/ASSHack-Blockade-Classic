#pragma once
namespace System::System::Net::Sockets
{
	enum struct AddressFamily : int32_t
	{
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
		Unspecified = static_cast<int32_t>(0x0),
		Unix = static_cast<int32_t>(0x1),
		InterNetwork = static_cast<int32_t>(0x2),
		ImpLink = static_cast<int32_t>(0x3),
		Pup = static_cast<int32_t>(0x4),
		Chaos = static_cast<int32_t>(0x5),
		NS = static_cast<int32_t>(0x6),
		Ipx = static_cast<int32_t>(0x6),
		Iso = static_cast<int32_t>(0x7),
		Osi = static_cast<int32_t>(0x7),
		Ecma = static_cast<int32_t>(0x8),
		DataKit = static_cast<int32_t>(0x9),
		Ccitt = static_cast<int32_t>(0xA),
		Sna = static_cast<int32_t>(0xB),
		DecNet = static_cast<int32_t>(0xC),
		DataLink = static_cast<int32_t>(0xD),
		Lat = static_cast<int32_t>(0xE),
		HyperChannel = static_cast<int32_t>(0xF),
		AppleTalk = static_cast<int32_t>(0x10),
		NetBios = static_cast<int32_t>(0x11),
		VoiceView = static_cast<int32_t>(0x12),
		FireFox = static_cast<int32_t>(0x13),
		Banyan = static_cast<int32_t>(0x15),
		Atm = static_cast<int32_t>(0x16),
		InterNetworkV6 = static_cast<int32_t>(0x17),
		Cluster = static_cast<int32_t>(0x18),
		Ieee12844 = static_cast<int32_t>(0x19),
		Irda = static_cast<int32_t>(0x1A),
		NetworkDesigners = static_cast<int32_t>(0x1C),
		Max = static_cast<int32_t>(0x1D),
	};
}

