#pragma once
namespace System::System::Net::Sockets
{
	enum struct IOControlCode : int64_t
	{
		AsyncIO = static_cast<int64_t>(0x8004667D),
		NonBlockingIO = static_cast<int64_t>(0x8004667E),
		DataToRead = static_cast<int64_t>(0x4004667F),
		OobDataRead = static_cast<int64_t>(0x40047307),
		AssociateHandle = static_cast<int64_t>(0x88000001),
		EnableCircularQueuing = static_cast<int64_t>(0x28000002),
		Flush = static_cast<int64_t>(0x28000004),
		GetBroadcastAddress = static_cast<int64_t>(0x48000005),
		GetExtensionFunctionPointer = static_cast<int64_t>(0xC8000006),
		GetQos = static_cast<int64_t>(0xC8000007),
		GetGroupQos = static_cast<int64_t>(0xC8000008),
		MultipointLoopback = static_cast<int64_t>(0x88000009),
		MulticastScope = static_cast<int64_t>(0x8800000A),
		SetQos = static_cast<int64_t>(0x8800000B),
		SetGroupQos = static_cast<int64_t>(0x8800000C),
		TranslateHandle = static_cast<int64_t>(0xC800000D),
		RoutingInterfaceQuery = static_cast<int64_t>(0xC8000014),
		RoutingInterfaceChange = static_cast<int64_t>(0x88000015),
		AddressListQuery = static_cast<int64_t>(0x48000016),
		AddressListChange = static_cast<int64_t>(0x28000017),
		QueryTargetPnpHandle = static_cast<int64_t>(0x48000018),
		NamespaceChange = static_cast<int64_t>(0x88000019),
		AddressListSort = static_cast<int64_t>(0xC8000019),
		ReceiveAll = static_cast<int64_t>(0x98000001),
		ReceiveAllMulticast = static_cast<int64_t>(0x98000002),
		ReceiveAllIgmpMulticast = static_cast<int64_t>(0x98000003),
		KeepAliveValues = static_cast<int64_t>(0x98000004),
		AbsorbRouterAlert = static_cast<int64_t>(0x98000005),
		UnicastInterface = static_cast<int64_t>(0x98000006),
		LimitBroadcasts = static_cast<int64_t>(0x98000007),
		BindToInterface = static_cast<int64_t>(0x98000008),
		MulticastInterface = static_cast<int64_t>(0x98000009),
		AddMulticastGroupOnInterface = static_cast<int64_t>(0x9800000A),
		DeleteMulticastGroupFromInterface = static_cast<int64_t>(0x9800000B),
	};
}

